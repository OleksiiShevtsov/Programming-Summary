#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <QAbstractListModel>
#include <vector>

class GameBoard : public QAbstractListModel
{
    Q_OBJECT
public:
    static constexpr size_t defoultPazzleDimension { 4 };
    GameBoard(const size_t boardDimension = defoultPazzleDimension,
              QObject* parent = nullptr);

    struct Tile{
        size_t value{};
        Tile& operator=(const size_t newValue){
            value = newValue;
            return *this;
        }

        bool operator==(const size_t other){
            return other == value;
        }
    };

    //пересмотреть
    int rowCount(const QModelIndex& parent = QModelIndex {}) const override//переопределение
    {
        Q_UNUSED(parent);
        return m_rowBoard.size();
    }
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override{
        if(!index.isValid() || role != Qt::DisplayRole){
            return {};
        }

        const int rowIndex {index.row()};

        return QVariant::fromValue(m_rowBoard[rowIndex].value);
    }


private:
    void shuffle();

    std::vector<Tile> m_rowBoard;
    const size_t m_boardDimension;
    const size_t m_boardSize;
};

#endif // GAMEBOARD_H
