var elements = [];

function func() {
    var hi = "Hallo";
}

function createButton(x, y)
{
    var code = 'import QtQuick 2.0;import QtQuick.Controls 1.4; Button {width: 20; height: 20; text: "'
            + elements.length.toString() + '"; x: ' + x + '; y: ' + y + '}';
    console.log(code + x + y);
    elements.push(Qt.createQmlObject(code, form.item2, "dynamicSnippet1"));
}

