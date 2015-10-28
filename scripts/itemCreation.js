var elements = [];

function func() {
    var hi = "Hallo";
}

function createButton(x, y)
{
    var code = 'import QtQuick 2.0;import QtQuick.Controls 1.4; Button {id: "button' + elements.length.toString() + '"; ' +
            'width: 50; height: 30; text: "' + elements.length.toString() + '"; ' +
            'x: ' + x + '; y: ' + y + '; onClicked: console.log("' + elements.length.toString() + 'clicked")}';
    elements.push(Qt.createQmlObject(code, form.item2, "dynamicSnippet1"));
}

