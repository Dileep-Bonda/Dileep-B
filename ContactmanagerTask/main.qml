import QtQuick
import QtQuick.Controls
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Contact Manager")
    Rectangle{
        width: parent.width
        height: parent.height
        clip: true
        Rectangle{
            id:header
            width:parent.width;
            height: 30
            color: "#8EE2FE"
            border{color: "#9EDDF2"; width: 4}
            Text {
                anchors.centerIn: parent
                text: "Contact List"
                font.bold: text
                font.pixelSize: 24
            }
        }
        Rectangle{
            id:firstrect
            anchors.top: header.bottom
            width: parent.width
            height: 20
            color: "#b0dfb0"
            Text {
                anchors.centerIn: parent
                text: "Starting"
                font.pixelSize: 12

            }
        }
        Rectangle{
            id:secondrect
            width: parent.width
            height: 20
            color: "#b0dfb0"
            anchors.bottom: parent.bottom
            Text {
                anchors.centerIn: parent
                text: "Ending"
                font.pixelSize: 12

            }
        }

        ListModel{
            id:contactinformation
            ListElement{name:"dileep"
                        mobilenumber:"1234567890"
                        address:"benguluru,india"
                        emailid:"dileep@gmail.com"
                        expanded:false
            }
            ListElement{name:"manoj"
                        mobilenumber:"1234567890"
                        address:"hyderabad,india"
                        emailid:"manoj@gmail.com"
                        expanded:false
            }
            ListElement{name:"naveen"
                        mobilenumber:"1234567890"
                        address:"vizag,india"
                        emailid:"naveen@gmail.com"
                        expanded:false
            }
            ListElement{name:"yaswanth"
                        mobilenumber:"1234567890"
                        address:"hyderabad,india"
                        emailid:"yash@gmail.com"
                        expanded:false
            }

        }
        ListView{
            anchors.top:firstrect.bottom
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: secondrect.top

            width: parent.width
            height: 600

            model:contactinformation
            spacing:6
            delegate: Rectangle {
                id: delegaterect
                width: parent.width
                height: model.expanded ? 180 : 40
                color: model.expanded ? "#f1faff" : "#ffffff"
                border.color: "#ccc"
                radius: 5

                Column {
                    anchors.fill: parent
                    anchors.margins: 10
                    spacing: 6

                    // visible name only
                    MouseArea {
                        anchors.left: parent.left
                        anchors.right: parent.right
                        height: 24
                        cursorShape: Qt.PointingHandCursor
                        onClicked: {
                            contactinformation.set(index, {
                                name: name,
                                mobilenumber: mobilenumber,
                                address: address,
                                emailid: emailid,
                                expanded: !model.expanded
                            })
                        }
                        Row{
                            spacing: 10
                            Image {
                                id: contacticon
                                source: "qrc:/new/image/Image/contact-img.png"
                                width: 20
                                height: 20
                                visible: true
                                fillMode: Image.PreserveAspectFit
                            }
                            Text {
                                text: name
                                font.pixelSize: 18
                                font.bold: true
                                color: "blue"
                            }

                        }

                    }

                    // when click on name it showing the information
                    Column {
                        visible: model.expanded
                        spacing: 4

                        Row {
                            spacing: 10
                            Text { text: "Fullname:"; width: 100; font.bold: true }
                            Text { text: name }
                        }
                        Row {
                            spacing: 10
                            Text { text: "Mobilenumber:"; width: 100; font.bold: true }
                            Text { text: mobilenumber }
                        }
                        Row {
                            spacing: 10
                            Text { text: "Address:"; width: 100; font.bold: true }
                            Text { text: address }
                        }
                        Row {
                            spacing: 10
                            Text { text: "Emailid:"; width: 100; font.bold: true }
                            Text { text: emailid }
                        }

                        Button {
                            text: "Delete"
                            onClicked: contactinformation.remove(index)
                        }
                        Button{
                            text: "Edit"
                            onClicked: {
                                contactdialog.item.editindex=index
                                contactdialog.item.editname=name
                                contactdialog.item.editmobilenumber=mobilenumber
                                contactdialog.item.editaddress=address
                                contactdialog.item.editemailid=emailid
                                contactdialog.item.visible=true
                            }
                        }
                    }
                }
            }

            Adddata{
                anchors.fill: parent
                onAddButtonClicked: {
                        contactdialog.item.visible = true
                    }
            }
            Loader{
                id: contactdialog
                    anchors.centerIn:parent
                    source: "CreateDialog.qml"
                    visible: false
                    onLoaded: {
                        contactdialog.item.contactModel = contactinformation
                    }
            }
        }
    }
}
