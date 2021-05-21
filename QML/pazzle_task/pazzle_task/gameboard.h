#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <QAbstractListModel>
#include <vector>

class GameBoard : public QAbstractListModel
{
    Q_OBJECT

    Q_PROPERTY(int boardDimension READ boardDimension CONSTANT)
    Q_PROPERTY(int hiddenElementValue READ boardSize CONSTANT)

public:
    static constexpr size_t defoultPazzleDimension { 4 };
    using Position = std::pair<size_t, size_t>;

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

    Q_INVOKABLE bool move(int index);
    size_t boardDimension() const;
    size_t boardSize() const;

    int rowCount(const QModelIndex& parent = QModelIndex {}) const override;//переопределение
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;

private:
    void shuffle();
    bool isPositionValid(const size_t position) const;
    bool isBoardValid() const;

    Position getRowCol(const size_t index) const;

    std::vector<Tile> m_rowBoard;
    const size_t m_boardDimension;
    const size_t m_boardSize;
};

#endif // GAMEBOARD_H
