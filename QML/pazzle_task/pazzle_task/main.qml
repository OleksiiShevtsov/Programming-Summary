import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    id: rootMain
    color : "#FFA773"
    width: 400
    height: 400
    visible: true
    title: qsTr("Hello World")

    GameBoard{
        anchors.fill: parent
    }
}
