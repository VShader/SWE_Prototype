import QtQuick 2.4
import QtQuick.Controls 1.4

Item {
    id: item
    width: 400
    height: 400

    property alias item: item
    property alias mouseArea1: mouseArea1
    property alias button1: button1
    property alias button2: button2
    property alias image1: image1

    Item {
        id: item1
        anchors.fill: parent

        Label {
            id: label1
            x: 131
            y: 315
            width: 138
            height: 16
            text: qsTr("DVD Collection")
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
            source: "../asics-gel-saga-ii-kill-bill-3.jpg"

            MouseArea {
                id: mouseArea1
                x: 91
                y: 37
                visible: true
                anchors.fill: parent
            }
        }
    }

    Item {
        id: item2
        anchors.fill: parent

        MouseArea {
            id: mouseArea2
            anchors.fill: parent
            opacity: 0
        }

        Button {
            id: button2
            x: 122
            y: 355
            text: qsTr("Button")
        }
    }

    ProgressBar {
        id: progressBar1
        x: 100
        y: 339
        opacity: 0
    }

    Button {
        id: button1
        x: 163
        y: 42
        text: qsTr("Button")
        opacity: 0
    }
    states: [
        State {
            name: "State1"

            PropertyChanges {
                target: item1
                visible: false
            }

            PropertyChanges {
                target: progressBar1
                value: 0.5
                opacity: 1
            }

            PropertyChanges {
                target: button1
                text: qsTr("back")
                opacity: 1
            }

            PropertyChanges {
                target: mouseArea2
                opacity: 1
            }
        }
    ]
}

