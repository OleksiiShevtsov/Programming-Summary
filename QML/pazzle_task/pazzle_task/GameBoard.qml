import QtQuick 2.0
import Game 1.0

GridView {
    id: root

    model: GameBoardModel{

    }

    cellHeight: height / 4
    cellWidth: width / 4

    delegate: Item{
        id: _beckgroundDelegate
        width: root.cellWidth
        height: root.cellHeight

        visible: display != 16

        Tile{
            anchors.fill: _beckgroundDelegate
            anchors.margins: 5
            displayText: display
        }
    }
}
