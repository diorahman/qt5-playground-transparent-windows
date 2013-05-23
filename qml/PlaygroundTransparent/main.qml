import QtQuick 2.0


Rectangle {
    id: root
  width: 1280
  height: 720
  color: "transparent"

  Rectangle {
      anchors.right: parent.right
      anchors.top: parent.top
      width: 100
      height: 100

      MouseArea{
          anchors.fill: parent
          onClicked: {
              Qt.quit()
          }
      }
  }

  property bool played: false

  Rectangle {
    anchors.centerIn: parent
    width: 100
    height: 100
    color: "blue"

    SequentialAnimation on rotation{
        id: animate
        loops: Animation.Infinite
        running: false
        NumberAnimation { from: 0; to: 360; duration: 1000}
    }

    MouseArea{
        anchors.fill: parent
        onClicked: {
            animate.start()
        }
    }
  }

  Component.onCompleted: {
  }
}
