import QtQuick 2.0

GridView {
    id: root
    model: TilesModel {

    }

    cellHeight: height / 4
    cellWidth: width / 4

    delegate: Item{
        id: _beckgroundDelegate
        width: root.cellWidth
        height: root.cellHeight

        Tile{
            anchors.fill: _beckgroundDelegate
            anchors.margins: 5
            displayText: display
        }
    }
}
