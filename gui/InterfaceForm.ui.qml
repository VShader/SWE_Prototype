import QtQuick 2.4
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    id: item
    width: 400
    height: 400

    property alias item: item
    property alias item2: item2
    property alias mouseArea1: mouseArea1
    property alias mouseArea2: mouseArea2
    property alias label1: label1
    property alias checkButton: checkButton
    property alias notInterestedButton: notInterestedButton
    property alias goBackButton: goBackButton
    property alias buyButton: buyButton
    property alias menueButton: menueButton


    ToolBar
    {
        RowLayout
        {
            anchors.fill: parent
            ToolButton
            {
                id: menueButton
                iconSource: "qrc:/icons/ic_menu.svg"
                Layout.alignment: Qt.AlignRight
            }
        }
    }

    Item {
        id: item1
        visible: true
        anchors.fill: parent

        Label {
            id: label1
            x: 131
            y: 315
            width: 138
            height: 16
            text: qsTr("Title")
            font.pointSize: 11
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
        }

        Image {
            id: image1
            x: 91
            y: 37
            width: 218
            height: 257
            visible: true

            MouseArea {
                id: mouseArea1
                x: 91
                y: 37
                visible: true
                anchors.fill: parent
            }
        }

        ToolButton {
            id: notInterestedButton
            x: 313
            y: 326
            width: 59
            height: 52
            tooltip: "not iterrested"
            iconSource: "qrc:/icons/ic_close.svg"
            antialiasing: false
            z: 0
            checked: false
        }

        ToolButton {
            id: checkButton
            x: 28
            y: 326
            width: 57
            height: 52
            text: ""
            iconSource: "qrc:/icons/ic_check.svg"
            tooltip: "ckick to see more"
        }

    }

    Item {
        id: item2
        visible: false
        anchors.fill: parent

        MouseArea {
            id: mouseArea2
            anchors.fill: parent
            opacity: 0
        }

        ToolButton {
            id: buyButton
            x: 28
            y: 326
            width: 57
            height: 52
            text: ""
            tooltip: "add to shopping cart"
            iconSource: "qrc:/icons/ic_check.svg"
        }

        ToolButton {
            id: goBackButton
            x: 313
            y: 326
            width: 59
            height: 52
            tooltip: "go back"
        }
    }
    states: [
        State {
            name: "product details state"

            PropertyChanges {
                target: item1
                visible: false
            }

            PropertyChanges {
                target: mouseArea2
                opacity: 1
            }

            PropertyChanges {
                target: item2
                visible: true
            }

            PropertyChanges {
                target: goBackButton
                iconSource: "qrc:/icons/ic_close.svg"
            }

            PropertyChanges {
                target: buyButton
                iconSource: "qrc:/icons/ic_add_shopping_cart.svg"
            }

            PropertyChanges {
                target: notInterestedButton
                iconSource: "qrc:/icons/ic_close.svg"
            }
        }
    ]
}

