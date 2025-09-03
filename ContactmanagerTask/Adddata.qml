import QtQuick
import QtQuick.Controls
Item {
    width: parent.width
    height: parent.height
    signal addButtonClicked()
    RoundButton{
        text: "+"
        highlighted: true
        width: 50
        height: 50
        anchors.bottom: parent.bottom
        anchors.right: parent.right
        anchors.margins: 16
        onClicked: {
            addButtonClicked()
            console.log("button clicked to add new information..!")
        }
    }

}
