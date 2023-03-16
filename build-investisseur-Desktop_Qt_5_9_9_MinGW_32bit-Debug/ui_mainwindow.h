/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *nom_gestion;
    QGroupBox *afficher;
    QLabel *afficher_label;
    QTableView *tableInvest;
    QPushButton *pdf;
    QPushButton *ajouter_5;
    QGroupBox *Delete;
    QLabel *supprimer;
    QLabel *id_label_2;
    QLabel *nom_label_2;
    QLineEdit *DeleteName;
    QPushButton *pushButton_delete;
    QDateEdit *DeleteDate;
    QLabel *nom_label_8;
    QCheckBox *confirm;
    QGroupBox *Add;
    QDateEdit *date_Invest;
    QLabel *dateLbael;
    QLabel *descLabel;
    QLabel *Ajouter;
    QLineEdit *nom_Inv;
    QLabel *id_label;
    QPushButton *pushButton_add;
    QLabel *budgetLabel;
    QLineEdit *budget_Invest;
    QLineEdit *desc_Invest;
    QGroupBox *Modifier;
    QLabel *Modifier_2;
    QLineEdit *searchID;
    QLabel *id_label_4;
    QPushButton *pushButton_search;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(2029, 1287);
        MainWindow->setStyleSheet(QStringLiteral("background-color:purple;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 60, 1181, 1101));
        nom_gestion = new QLabel(groupBox);
        nom_gestion->setObjectName(QStringLiteral("nom_gestion"));
        nom_gestion->setGeometry(QRect(450, 50, 271, 61));
        QFont font;
        font.setFamily(QStringLiteral("Cambria"));
        font.setPointSize(28);
        font.setBold(false);
        font.setWeight(50);
        nom_gestion->setFont(font);
        nom_gestion->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        afficher = new QGroupBox(groupBox);
        afficher->setObjectName(QStringLiteral("afficher"));
        afficher->setGeometry(QRect(730, 130, 411, 441));
        afficher->setStyleSheet(QLatin1String("QGroupBox {\n"
"    font: 12px;\n"
" background-color:#be7fbe;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: rgb(58, 195, 197);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLineEdit:focus, QPushButton:focus {\n"
"    border: 2px solid #4CAF50;\n"
"}\n"
"\n"
"QLabel {\n"
"    font-weight: bold;\n"
"    padding: 1px;\n"
"}"));
        afficher_label = new QLabel(afficher);
        afficher_label->setObjectName(QStringLiteral("afficher_label"));
        afficher_label->setGeometry(QRect(50, 10, 291, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Cambria"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        afficher_label->setFont(font1);
        afficher_label->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        tableInvest = new QTableView(afficher);
        tableInvest->setObjectName(QStringLiteral("tableInvest"));
        tableInvest->setGeometry(QRect(10, 90, 391, 301));
        tableInvest->setStyleSheet(QLatin1String("QTableWidget{\n"
"border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
"\n"
"}"));
        pdf = new QPushButton(afficher);
        pdf->setObjectName(QStringLiteral("pdf"));
        pdf->setGeometry(QRect(270, 50, 131, 31));
        pdf->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    background-color: rgb(58, 195, 197);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLineEdit:focus, QPushButton:focus {\n"
"    border: 2px solid #4CAF50;\n"
"}\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icones/Icones/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pdf->setIcon(icon);
        pdf->setIconSize(QSize(30, 40));
        ajouter_5 = new QPushButton(afficher);
        ajouter_5->setObjectName(QStringLiteral("ajouter_5"));
        ajouter_5->setGeometry(QRect(20, 50, 101, 31));
        ajouter_5->setMaximumSize(QSize(101, 31));
        ajouter_5->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icones/Icones/ajouter.png"), QSize(), QIcon::Normal, QIcon::Off);
        ajouter_5->setIcon(icon1);
        ajouter_5->setIconSize(QSize(20, 20));
        afficher_label->raise();
        pdf->raise();
        ajouter_5->raise();
        tableInvest->raise();
        Delete = new QGroupBox(groupBox);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setGeometry(QRect(370, 140, 321, 431));
        Delete->setStyleSheet(QLatin1String("QGroupBox {\n"
"    font: 12px;\n"
" background-color:#be7fbe;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: rgb(58, 195, 197);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLineEdit:focus, QPushButton:focus {\n"
"    border: 2px solid #4CAF50;\n"
"}\n"
"\n"
"QLabel {\n"
"    font-weight: bold;\n"
"    padding: 1px;\n"
"}"));
        supprimer = new QLabel(Delete);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(30, 10, 251, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Cambria"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        supprimer->setFont(font2);
        supprimer->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        id_label_2 = new QLabel(Delete);
        id_label_2->setObjectName(QStringLiteral("id_label_2"));
        id_label_2->setGeometry(QRect(50, 130, 61, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("Cambria"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        id_label_2->setFont(font3);
        id_label_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        nom_label_2 = new QLabel(Delete);
        nom_label_2->setObjectName(QStringLiteral("nom_label_2"));
        nom_label_2->setGeometry(QRect(50, 60, 61, 21));
        nom_label_2->setFont(font3);
        nom_label_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        DeleteName = new QLineEdit(Delete);
        DeleteName->setObjectName(QStringLiteral("DeleteName"));
        DeleteName->setGeometry(QRect(160, 60, 113, 22));
        DeleteName->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        pushButton_delete = new QPushButton(Delete);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(110, 310, 101, 31));
        pushButton_delete->setMaximumSize(QSize(101, 31));
        pushButton_delete->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icones/Icones/supprimer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_delete->setIcon(icon2);
        pushButton_delete->setIconSize(QSize(20, 20));
        DeleteDate = new QDateEdit(Delete);
        DeleteDate->setObjectName(QStringLiteral("DeleteDate"));
        DeleteDate->setGeometry(QRect(160, 130, 110, 22));
        DeleteDate->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        nom_label_8 = new QLabel(Delete);
        nom_label_8->setObjectName(QStringLiteral("nom_label_8"));
        nom_label_8->setGeometry(QRect(0, 190, 321, 51));
        QFont font4;
        font4.setFamily(QStringLiteral("Cambria"));
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        nom_label_8->setFont(font4);
        nom_label_8->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        confirm = new QCheckBox(Delete);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(110, 270, 91, 31));
        confirm->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#ffc778;;\n"
""));
        Add = new QGroupBox(groupBox);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setGeometry(QRect(10, 140, 331, 431));
        Add->setStyleSheet(QLatin1String("QGroupBox {\n"
"    font: 12px;\n"
" background-color:#be7fbe;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: rgb(58, 195, 197);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLineEdit:focus, QPushButton:focus {\n"
"    border: 2px solid #4CAF50;\n"
"}\n"
"\n"
"QLabel {\n"
"    font-weight: bold;\n"
"    padding: 1px;\n"
"}"));
        date_Invest = new QDateEdit(Add);
        date_Invest->setObjectName(QStringLiteral("date_Invest"));
        date_Invest->setGeometry(QRect(120, 160, 110, 22));
        date_Invest->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        dateLbael = new QLabel(Add);
        dateLbael->setObjectName(QStringLiteral("dateLbael"));
        dateLbael->setGeometry(QRect(70, 130, 191, 21));
        QFont font5;
        font5.setFamily(QStringLiteral("Cambria"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        dateLbael->setFont(font5);
        dateLbael->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        descLabel = new QLabel(Add);
        descLabel->setObjectName(QStringLiteral("descLabel"));
        descLabel->setGeometry(QRect(50, 280, 231, 21));
        QFont font6;
        font6.setFamily(QStringLiteral("Cambria"));
        font6.setPointSize(9);
        font6.setBold(true);
        font6.setWeight(75);
        descLabel->setFont(font6);
        descLabel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        Ajouter = new QLabel(Add);
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        Ajouter->setGeometry(QRect(60, 10, 221, 31));
        Ajouter->setFont(font2);
        Ajouter->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        nom_Inv = new QLineEdit(Add);
        nom_Inv->setObjectName(QStringLiteral("nom_Inv"));
        nom_Inv->setGeometry(QRect(110, 80, 131, 41));
        nom_Inv->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        id_label = new QLabel(Add);
        id_label->setObjectName(QStringLiteral("id_label"));
        id_label->setGeometry(QRect(90, 50, 151, 21));
        QFont font7;
        font7.setPointSize(9);
        font7.setBold(true);
        font7.setWeight(75);
        id_label->setFont(font7);
        id_label->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        pushButton_add = new QPushButton(Add);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(110, 400, 101, 31));
        pushButton_add->setMaximumSize(QSize(101, 31));
        pushButton_add->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
""));
        pushButton_add->setIcon(icon1);
        pushButton_add->setIconSize(QSize(20, 20));
        budgetLabel = new QLabel(Add);
        budgetLabel->setObjectName(QStringLiteral("budgetLabel"));
        budgetLabel->setGeometry(QRect(60, 200, 201, 21));
        budgetLabel->setFont(font5);
        budgetLabel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        budget_Invest = new QLineEdit(Add);
        budget_Invest->setObjectName(QStringLiteral("budget_Invest"));
        budget_Invest->setGeometry(QRect(90, 230, 141, 41));
        budget_Invest->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        desc_Invest = new QLineEdit(Add);
        desc_Invest->setObjectName(QStringLiteral("desc_Invest"));
        desc_Invest->setGeometry(QRect(10, 310, 311, 71));
        desc_Invest->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        Modifier = new QGroupBox(groupBox);
        Modifier->setObjectName(QStringLiteral("Modifier"));
        Modifier->setGeometry(QRect(30, 610, 331, 431));
        Modifier->setStyleSheet(QLatin1String("QGroupBox {\n"
"    font: 12px;\n"
" background-color:#be7fbe;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: rgb(58, 195, 197);\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLineEdit:focus, QPushButton:focus {\n"
"    border: 2px solid #4CAF50;\n"
"}\n"
"\n"
"QLabel {\n"
"    font-weight: bold;\n"
"    padding: 1px;\n"
"}"));
        Modifier_2 = new QLabel(Modifier);
        Modifier_2->setObjectName(QStringLiteral("Modifier_2"));
        Modifier_2->setGeometry(QRect(60, 10, 221, 31));
        Modifier_2->setFont(font2);
        Modifier_2->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        searchID = new QLineEdit(Modifier);
        searchID->setObjectName(QStringLiteral("searchID"));
        searchID->setGeometry(QRect(90, 100, 161, 41));
        searchID->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        id_label_4 = new QLabel(Modifier);
        id_label_4->setObjectName(QStringLiteral("id_label_4"));
        id_label_4->setGeometry(QRect(90, 50, 171, 21));
        id_label_4->setFont(font7);
        id_label_4->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        pushButton_search = new QPushButton(Modifier);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        pushButton_search->setGeometry(QRect(110, 220, 101, 31));
        pushButton_search->setMaximumSize(QSize(101, 31));
        pushButton_search->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
""));
        pushButton_search->setIcon(icon1);
        pushButton_search->setIconSize(QSize(20, 20));
        afficher->raise();
        nom_gestion->raise();
        Delete->raise();
        Add->raise();
        Modifier->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 2029, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Gestion des investisseurs", Q_NULLPTR));
        nom_gestion->setText(QApplication::translate("MainWindow", "Investisseurs", Q_NULLPTR));
        afficher->setTitle(QString());
        afficher_label->setText(QApplication::translate("MainWindow", "Liste des investissements", Q_NULLPTR));
        pdf->setText(QApplication::translate("MainWindow", "Export PDF", Q_NULLPTR));
        ajouter_5->setText(QApplication::translate("MainWindow", "TRI par date", Q_NULLPTR));
        Delete->setTitle(QString());
        supprimer->setText(QApplication::translate("MainWindow", "Supprimer un investissement", Q_NULLPTR));
        id_label_2->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        nom_label_2->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        nom_label_8->setText(QApplication::translate("MainWindow", "Voulez-vous vraiment supprimer cet investissement?", Q_NULLPTR));
        confirm->setText(QApplication::translate("MainWindow", "Confirmer", Q_NULLPTR));
        Add->setTitle(QString());
        dateLbael->setText(QApplication::translate("MainWindow", "Date d'investissement", Q_NULLPTR));
        descLabel->setText(QApplication::translate("MainWindow", "Description de l'investissement", Q_NULLPTR));
        Ajouter->setText(QApplication::translate("MainWindow", "Ajouter un investissement", Q_NULLPTR));
        id_label->setText(QApplication::translate("MainWindow", "Nom d'invetisseur", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        budgetLabel->setText(QApplication::translate("MainWindow", "Budget d'investissement", Q_NULLPTR));
        Modifier->setTitle(QString());
        Modifier_2->setText(QApplication::translate("MainWindow", "Modifier un investissement", Q_NULLPTR));
        id_label_4->setText(QApplication::translate("MainWindow", "Id de l'investissement", Q_NULLPTR));
        pushButton_search->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
