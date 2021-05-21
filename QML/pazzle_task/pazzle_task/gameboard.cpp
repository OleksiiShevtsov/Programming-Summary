#include "gameboard.h"
#include <algorithm>
#include <random>

namespace
{
    bool isAdjacent(const GameBoard::Position f, const GameBoard::Position s){
        if(f == s){
            return false;
        }

        const auto calcDistace = [](const size_t pos1, size_t pos2){
            int distance = static_cast<int>(pos1);
            distance = distance - static_cast<int>(pos2);
            distance = std::abs(distance);
            return distance;
        };

        bool result {false};

        if(f.first == s.first){
            int distance = calcDistace(f.second, s.second);
            if(distance == 1){
                result = true;
            }
        } else if(f.second == s.second) {
            int distance = calcDistace(f.first, s.first);
            if(distance == 1){
                result = true;
            }
        }

        return result;
    }
}

GameBoard::GameBoard(const size_t boardDimensionn, QObject* parent)
    : QAbstractListModel {parent},
      m_boardDimension {boardDimensionn},
      m_boardSize {m_boardDimension * m_boardDimension}
{
    m_rowBoard.resize(m_boardSize);
    std::iota(m_rowBoard.begin(), m_rowBoard.end(), 1);
    shuffle();
}

bool GameBoard::move(int index)
{
    if(!isPositionValid(static_cast<size_t>(index))){
        return false;
    }

    const Position elementPosition = {getRowCol(index)};

    auto hiddenElementIterator = std::find(m_rowBoard.begin(), m_rowBoard.end(), boardSize());
    Q_ASSERT(hiddenElementIterator != m_rowBoard.end());

    Position hiddenElementPosition {getRowCol(std::distance(m_rowBoard.begin(), hiddenElementIterator))};

    if(!isAdjacent(elementPosition, hiddenElementPosition)){
        return false;
    }
    std::swap(hiddenElementIterator->value, m_rowBoard[index].value);
    emit dataChanged(createIndex(0, 0), createIndex(m_boardSize, 0));
    return true;
}

size_t GameBoard::boardDimension() const{
    return m_boardDimension;
}

int GameBoard::rowCount(const QModelIndex& parent) const{
    Q_UNUSED(parent);
    return m_rowBoard.size();
}

QVariant GameBoard::data(const QModelIndex& index, int role) const{
    if(!index.isValid() || role != Qt::DisplayRole){
        return {};
    }

    const int rowIndex {index.row()};

    if(!isPositionValid(rowIndex)){
        return {};
    }

    return QVariant::fromValue(m_rowBoard[rowIndex].value);
}

void GameBoard::shuffle(){
    static auto seed = std::chrono::system_clock::now().time_since_epoch().count();
    static std::mt19937 generator(seed);

    do{
        std::shuffle(m_rowBoard.begin(), m_rowBoard.end(), generator);
    }while(!isBoardValid());
}

bool GameBoard::isPositionValid(const size_t position) const
{
    return position < m_boardSize;
}

bool GameBoard::isBoardValid() const
{
    int inv {0};
    for (size_t i {0}; i < m_boardSize; ++i) {
        for (size_t j = i; j < m_boardSize; ++j) {
            if (m_rowBoard[j].value < m_rowBoard[i].value && m_rowBoard[i].value!=m_boardSize){
                ++inv;
            }
        }
    }
    const size_t start_point = 1;

    for (size_t i = 0; i < m_boardSize; ++i) {
        if (m_rowBoard[i].value == m_boardSize){
            inv += start_point + i / m_boardDimension;
        }
    }

    return (inv % 2) == 0;
}

size_t GameBoard::boardSize() const
{
    return m_boardSize;
}

GameBoard::Position GameBoard::getRowCol(const size_t index) const
{
    Q_ASSERT(m_boardDimension > 0);

    size_t row = index / m_boardDimension;
    size_t column = index % m_boardDimension;

    return std::make_pair(row, column);
}
