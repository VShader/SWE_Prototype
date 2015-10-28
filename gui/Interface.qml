import QtQuick 2.4
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2
import "../scripts/itemCreation.js" as MyScript

ApplicationWindow {
    id: appWindow
    title: "My Application"
    width: 440
    height: 520
    visible: true

    ToolBar
    {
        ToolButton
        {
            id: menueButton
            iconSource: "qrc:/icons/ic_menu.svg"
        }
    }

    InterfaceForm
    {
        id: form

        item.anchors.fill: parent
        mouseArea1.onClicked: item.state = "product details state"
        checkButton.onClicked: item.state = "product details state"
        goBackButton.onClicked: item.state = "default state"
        mouseArea2.acceptedButtons: Qt.AllButtons

        mouseArea2.onClicked:
        {
            if(mouse.button == Qt.RightButton)
            {
                MyScript.createButton(mouseArea2.mouseX, mouseArea2.mouseY)
            }
        }
    }
}
