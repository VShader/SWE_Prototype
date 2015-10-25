import QtQuick 2.4
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2
import "../scripts/itemCreation.js" as MyScript

ApplicationWindow {
    title: "My Application"
    width: 480
    height: 640
    visible: true

    InterfaceForm
    {
        item.anchors.fill: parent
        mouseArea1.onClicked: item.state = "State1"
        button1.onClicked: item.state = "base state"
        button2.onClicked: MyScript.func()
    }
}
