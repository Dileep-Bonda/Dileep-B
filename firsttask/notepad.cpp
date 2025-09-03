#include "notepad.h"
#include "ui_notepad.h"

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QTextCursor>
#include <QMessageBox>
#include <QFontDialog>
#include <QTextCharFormat>
#include <QColorDialog>
#include <QTextTableCell>
#include <QTableWidget>
#include <QVBoxLayout>


NotePad::NotePad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NotePad)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);// this will set overall window size
}

NotePad::~NotePad()
{
    delete ui;
}


void NotePad::on_action_New_triggered()
{
    // new action performed
    ui->textEdit->setText(QString());
}


void NotePad::on_action_Open_triggered()
{
    //open action performed

    QString filename= QFileDialog::getOpenFileName(this,"open the file");
    QFile file(filename);
    filepath=filename;
    if(!file.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::information(this,"open","this file is already opened..!"); //checking file and pass warning
        return;
    }
    QTextStream in(&file);
    QString text=in.readAll();
    ui->textEdit->setText(text);
    file.close();
}


void NotePad::on_action_Save_triggered()
{
    //save action performed

    QString filename= QFileDialog::getSaveFileName(this,"save the file");
    QFile file(filename);
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::information(this,"save","this file is already saved..!");//checking file and pass error
        return;
    }
    QTextStream out(&file);
    QString text=ui->textEdit->toPlainText();
    out<<text;
    file.close();
}


void NotePad::on_action_Saveas_triggered()
{
    //save-as action performed

    QString filename= QFileDialog::getSaveFileName(this,"save-as the file");
    QFile file(filename);
    filepath=filename;
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::information(this,"save-as","this file is already saved..!");//checking file and pass warning
        return;
    }
    QTextStream out(&file);
    QString text=ui->textEdit->toPlainText();
    out<<text;
    file.close();
}


void NotePad::on_action_Undo_triggered()
{
    //undo action performed
    ui->textEdit->undo();
}


void NotePad::on_action_Cut_triggered()
{
    //cut action performed
    ui->textEdit->cut();
}


void NotePad::on_action_Copy_triggered()
{
    // copy action performed
    ui->textEdit->copy();
}


void NotePad::on_action_Paste_triggered()
{
    // paste action performed
    ui->textEdit->paste();

}


void NotePad::on_action_REdo_triggered()
{
    //redo action performed
    ui->textEdit->redo();
}


void NotePad::on_action_Delete_triggered()
{
    //delete action performed
    QTextCursor cursor=ui->textEdit->textCursor();
    if(cursor.hasSelection())
        cursor.removeSelectedText();
    else
        QMessageBox::information(this,"remove","please select the text..!");

}


void NotePad::on_action_About_triggered()
{
    //about action performed
    QMessageBox::about(this,"About-NotePad","welcome to notepad application..!");

}


void NotePad::on_action_Exit_triggered()
{
    //exit action performed
    QApplication::quit();
}


void NotePad::on_action_Style_triggered()
{
    // changing the font style

    bool fontselected;
    QFont font=QFontDialog::getFont(&fontselected,this);
    if(fontselected){
        QTextCursor cursor=ui->textEdit->textCursor();
        QTextCharFormat format;
        format.setFont(font);
        if(cursor.hasSelection())
            cursor.mergeCharFormat(format);
        else
            ui->textEdit->mergeCurrentCharFormat(format);
    }
}


void NotePad::on_action_Fontcolor_triggered()
{
    // changing the font color

    QColor color=QColorDialog::getColor(Qt::black,this,"set color to font");
    if(color.isValid()){
        QTextCursor cursor=ui->textEdit->textCursor();
        QTextCharFormat format;
        format.setForeground(color);// foreground means the color which the text is shown
        if(cursor.hasSelection())
            cursor.mergeCharFormat(format);
        else
            ui->textEdit->mergeCurrentCharFormat(format);
    }
}

void NotePad::on_action_New_window_triggered()
{
    // another window will open
    NotePad *newwindow=new NotePad();
    newwindow->show();
}


void NotePad::on_action_table_triggered()
{
    // data converted into table format

    QString selectedText = ui->textEdit->textCursor().selectedText();

    if (selectedText.isEmpty()) {
        QMessageBox::information(this, "No Selection", "Please select some text");
        return;
    }

    QStringList lines = selectedText.split(QChar::ParagraphSeparator, Qt::SkipEmptyParts);

    // Header parsing ->sequence of tokens into grametical structure
    QString headerLine = lines.takeFirst();
    headerLine.replace(":", ""); //colons will be removed

    QStringList headers = headerLine.split(QRegularExpression(" "), Qt::SkipEmptyParts);

    // Start HTML table
    QString htmlTable = "<table border='1' cellspacing='0' cellpadding='10' "
                        "style='min-width:600px; width:100%; border-collapse: collapse;'>";

    // Add header row
    htmlTable += "<tr>";
    for (const QString &header : headers) {
        htmlTable += "<th>" + header.trimmed() + "</th>";
    }
    htmlTable += "</tr>";

    // Add data rows
    for (const QString &line : lines) {
        QStringList cells = line.split(QRegularExpression(" "), Qt::SkipEmptyParts);
        if (cells.size() != headers.size()) continue;
        htmlTable += "<tr>";
        for (const QString &cell : cells) {
            htmlTable += "<td>" + cell.trimmed() + "</td>";
        }
        htmlTable += "</tr>";
    }

    htmlTable += "</table>";

    // Display table
    QTextCursor cursor=ui->textEdit->textCursor();
    cursor.insertHtml(htmlTable);

}



void NotePad::on_action_stickpad_triggered()
{
    //stickpad operation will perform
    NotePad *newwindow=new NotePad();
    newwindow->setWindowTitle("STICK_PAD");
    newwindow->setFixedSize(300,200);
    newwindow->show();
}

