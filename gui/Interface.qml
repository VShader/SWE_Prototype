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



    InterfaceForm
    {
        id: form


        label1.text: model.headline
        item.anchors.fill: parent
        mouseArea1.onClicked: item.state = "product details state"
        checkButton.onClicked: item.state = "product details state"
        goBackButton.onClicked: item.state = "default state"
        mouseArea2.acceptedButtons: Qt.AllButtons
        notInterestedButton.onClicked: label1.text = model.headline
        menueButton.onClicked: console.log("menue")

        mouseArea2.onClicked:
        {
            if(mouse.button == Qt.RightButton)
            {
                MyScript.createButton(mouseArea2.mouseX, mouseArea2.mouseY)
            }
        }
    }
}
