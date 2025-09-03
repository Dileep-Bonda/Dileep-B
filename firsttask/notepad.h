#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class NotePad; }
QT_END_NAMESPACE

class NotePad : public QMainWindow
{
    Q_OBJECT

public:
    NotePad(QWidget *parent = nullptr);
    ~NotePad();

private slots:
    // defines the method names we have used

    void on_action_New_triggered();

    void on_action_Open_triggered();

    void on_action_Save_triggered();

    void on_action_Saveas_triggered();

    void on_action_Undo_triggered();

    void on_action_Cut_triggered();

    void on_action_Copy_triggered();

    void on_action_Paste_triggered();

    void on_action_REdo_triggered();

    void on_action_Delete_triggered();

    void on_action_About_triggered();

    void on_action_Exit_triggered();

    void on_action_Style_triggered();

    void on_action_Fontcolor_triggered();

    void on_action_New_window_triggered();

    void on_action_table_triggered();

    void on_action_stickpad_triggered();

private:
    Ui::NotePad *ui;
    QString filepath;
};
#endif // NOTEPAD_H
