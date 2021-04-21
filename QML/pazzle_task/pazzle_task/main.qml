import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    id: rootName
    color : "#FFA773"
    width: 400
    height: 400
    visible: true
    title: qsTr("Hello World")

    Tile{
        width: rootName.width/4
        height: rootName.height/4
    }
}
