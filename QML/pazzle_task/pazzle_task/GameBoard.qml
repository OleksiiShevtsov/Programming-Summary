import QtQuick 2.0
import Game 1.0

GridView {
    id: root

    model: GameBoardModel{

    }

    cellHeight: height / root.model.boardDimension
    cellWidth: width / root.model.boardDimension

    delegate: Item{
        id: _beckgroundDelegate
        width: root.cellWidth
        height: root.cellHeight

        visible: display !== root.model.hiddenElementValue

        Tile{
            anchors.fill: _beckgroundDelegate
            anchors.margins: 5
            displayText: display

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    root.model.move(index);
                }
            }
        }
    }
}
