#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"investisseurs.h"
#include <QTextEdit>
#include <QDialog>
#include<QTcpSocket>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class QTcpSocket;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_add_clicked();
    void on_pushButton_delete_clicked();
    void on_pb_update_clicked();
    void on_pushButton_sort_clicked();
    void on_GoToDelete_clicked();
    void on_GoToAdd_clicked();
    void on_GoToUpdate_clicked();
    void on_GoToTable_clicked();
    void on_pushButton_export_clicked();
    void on_GotoSearch_clicked();
    void on_pushButton_Chercher_clicked();
    void on_GetStats_clicked();
    void on_GotoStats_clicked();
    void on_pushButton_sendMail_clicked();
    void on_GoToMail_clicked();
    void on_openMessengerConnection_clicked();

private:
    Ui::MainWindow *ui;

    investisseurs Etmp;
};
#endif // MAINWINDOW_H
