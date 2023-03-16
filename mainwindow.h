#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Equipements.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
     void on_pushButton_ajouter_clicked();

    void on_pushButton_supprimer_clicked();

    void on_pb_modifier_clicked();
    void on_pushButtonPDF_clicked();

private:
    Ui::MainWindow *ui;
    Equipements Etmp;
};

#endif // MAINWINDOW_H
