import QtQuick
import QtQuick.Controls

Dialog{
    id:contactdialog
    modal: true
    title: "New Contact"
    standardButtons: Dialog.Ok|Dialog.Cancel
    visible: false
    property var contactModel
    property int editindex: index
    property int editmode: -1
    property string editname: ""
    property string editmobilenumber: ""
    property string editaddress: ""
    property string editemailid: ""

    Column {
            spacing: 10
            padding: 10

            TextField { id: nameField; placeholderText: "Full Name" }
            TextField { id: mobilenumberField; placeholderText: "Mobile Number" }
            TextField { id: addressField; placeholderText: "Address" }
            TextField { id: emailidField; placeholderText: "Email ID" }
        }
    onAccepted: {
        if (contactModel) {
            contactModel.append({
                name: nameField.text,
                mobilenumber: mobilenumberField.text,
                address: addressField.text,
                emailid: emailidField.text,
                expanded: false
            })
        }
        namefeild.text=""
        mobilenumberfeild.text=""
        addressfeild.text=""
        emailidfeild.text=""

        if(contactModel){
            if(editmode && editindex >=0){
                    contactModel.set(editindex,{
                        name: nameField.text,
                        mobilenumber: mobilenumberField.text,
                        address: addressField.text,
                        emailid: emailidField.text,
                        expanded: false

                    })
            }

        namefeild.text=""
        mobilenumberfeild.text=""
        addressfeild.text=""
        emailidfeild.text=""

        editmode=false
        editindex=-1
        visible=false
        }
    }
}
