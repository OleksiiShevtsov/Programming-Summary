#include "gameboard.h"
#include <algorithm>
#include <random>

GameBoard::GameBoard(const size_t boardDimensionn, QObject* parent)
    : QAbstractListModel {parent},
      m_boardDimension {boardDimensionn},
      m_boardSize {m_boardDimension * m_boardDimension}
{
    m_rowBoard.resize(m_boardSize);
    std::iota(m_rowBoard.begin(), m_rowBoard.end(), 1);
    shuffle();
}

void GameBoard::shuffle(){
    static auto seed = std::chrono::system_clock::now().time_since_epoch().count();
    static std::mt19937 generator(seed);

    //do{
        std::shuffle(m_rowBoard.begin(), m_rowBoard.end(), generator);
    //}while(!isBoardValid)
}
