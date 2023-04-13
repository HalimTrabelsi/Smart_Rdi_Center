#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Projets.h"
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
    void on_triBudgetCroissant_clicked();
    void on_recherche_projet_textChanged(const QString );
    void on_ButtonPDF_clicked();
    void on_pushButton_stat_clicked();
    void on_rechercherParObjet_clicked();

private:
    Ui::MainWindow *ui;
    Projets Etmp;
};

#endif // MAINWINDOW_H
