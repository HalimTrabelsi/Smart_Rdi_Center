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
#include <QtWidgets/QStackedWidget>
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
    QStackedWidget *stackedWidget;
    QWidget *page;
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
    QWidget *page_2;
    QGroupBox *Delete;
    QLabel *supprimer;
    QLabel *nom_label_2;
    QLineEdit *DeleteName;
    QPushButton *pushButton_delete;
    QLabel *nom_label_8;
    QCheckBox *ConfirmDeleteCheckBox;
    QWidget *page_3;
    QGroupBox *Modifier;
    QLabel *Modifier_2;
    QPushButton *pb_update;
    QLineEdit *newNom;
    QLineEdit *newDescription;
    QLabel *descLabel_2;
    QLabel *id_label_2;
    QDateEdit *newDate;
    QLabel *dateLbael_2;
    QLineEdit *newBudget;
    QLabel *budgetLabel_2;
    QWidget *page_4;
    QGroupBox *afficher;
    QLabel *afficher_label;
    QTableView *tableInvest;
    QPushButton *pushButton_export;
    QPushButton *pushButton_sort;
    QPushButton *GotoSearch;
    QWidget *page_5;
    QGroupBox *Delete_2;
    QLabel *supprimer_2;
    QLabel *nom_label_3;
    QLineEdit *searchName;
    QTableView *tableSearch;
    QPushButton *pushButton_Chercher;
    QWidget *page_6;
    QGroupBox *Delete_3;
    QLabel *supprimer_3;
    QLabel *MailLabel;
    QLineEdit *recipientEdit;
    QPushButton *pushButton_Mail;
    QLineEdit *subjectEdit;
    QLabel *MailLabel_2;
    QLabel *MailLabel_3;
    QLineEdit *messageEdit;
    QPushButton *GoToDelete;
    QPushButton *GoToAdd;
    QPushButton *GoToUpdate;
    QPushButton *GoToTable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1159, 771);
        MainWindow->setStyleSheet(QStringLiteral("background-color:purple;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(-90, -40, 1691, 831));
        nom_gestion = new QLabel(groupBox);
        nom_gestion->setObjectName(QStringLiteral("nom_gestion"));
        nom_gestion->setGeometry(QRect(370, 30, 461, 71));
        QFont font;
        font.setFamily(QStringLiteral("Tw Cen MT"));
        font.setPointSize(28);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        nom_gestion->setFont(font);
        nom_gestion->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(160, 170, 1031, 581));
        QFont font1;
        font1.setFamily(QStringLiteral("Tw Cen MT Condensed"));
        font1.setPointSize(12);
        stackedWidget->setFont(font1);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        Add = new QGroupBox(page);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setGeometry(QRect(40, 10, 701, 541));
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
        date_Invest->setGeometry(QRect(430, 170, 181, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Tw Cen MT"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        date_Invest->setFont(font2);
        date_Invest->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        dateLbael = new QLabel(Add);
        dateLbael->setObjectName(QStringLiteral("dateLbael"));
        dateLbael->setGeometry(QRect(40, 170, 211, 61));
        dateLbael->setFont(font2);
        dateLbael->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        descLabel = new QLabel(Add);
        descLabel->setObjectName(QStringLiteral("descLabel"));
        descLabel->setGeometry(QRect(40, 370, 311, 71));
        QFont font3;
        font3.setFamily(QStringLiteral("Tw Cen MT"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        descLabel->setFont(font3);
        descLabel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        Ajouter = new QLabel(Add);
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        Ajouter->setGeometry(QRect(160, 10, 421, 51));
        QFont font4;
        font4.setFamily(QStringLiteral("Tw Cen MT"));
        font4.setPointSize(22);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        Ajouter->setFont(font4);
        Ajouter->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        nom_Inv = new QLineEdit(Add);
        nom_Inv->setObjectName(QStringLiteral("nom_Inv"));
        nom_Inv->setGeometry(QRect(430, 90, 181, 51));
        QFont font5;
        font5.setFamily(QStringLiteral("Tw Cen MT"));
        font5.setPointSize(12);
        nom_Inv->setFont(font5);
        nom_Inv->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        id_label = new QLabel(Add);
        id_label->setObjectName(QStringLiteral("id_label"));
        id_label->setGeometry(QRect(40, 90, 201, 61));
        id_label->setFont(font2);
        id_label->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        pushButton_add = new QPushButton(Add);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(300, 490, 101, 31));
        pushButton_add->setMaximumSize(QSize(101, 31));
        pushButton_add->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icones/Icones/ajouter.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_add->setIcon(icon);
        pushButton_add->setIconSize(QSize(20, 20));
        budgetLabel = new QLabel(Add);
        budgetLabel->setObjectName(QStringLiteral("budgetLabel"));
        budgetLabel->setGeometry(QRect(40, 250, 261, 91));
        budgetLabel->setFont(font3);
        budgetLabel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        budget_Invest = new QLineEdit(Add);
        budget_Invest->setObjectName(QStringLiteral("budget_Invest"));
        budget_Invest->setGeometry(QRect(420, 260, 201, 61));
        budget_Invest->setFont(font5);
        budget_Invest->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        desc_Invest = new QLineEdit(Add);
        desc_Invest->setObjectName(QStringLiteral("desc_Invest"));
        desc_Invest->setGeometry(QRect(390, 350, 281, 111));
        QFont font6;
        font6.setFamily(QStringLiteral("Tw Cen MT"));
        font6.setPointSize(10);
        desc_Invest->setFont(font6);
        desc_Invest->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        Delete = new QGroupBox(page_2);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setGeometry(QRect(180, 20, 531, 541));
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
        supprimer->setGeometry(QRect(10, 20, 511, 111));
        QFont font7;
        font7.setFamily(QStringLiteral("Tw Cen MT"));
        font7.setPointSize(24);
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        supprimer->setFont(font7);
        supprimer->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        nom_label_2 = new QLabel(Delete);
        nom_label_2->setObjectName(QStringLiteral("nom_label_2"));
        nom_label_2->setGeometry(QRect(110, 150, 321, 71));
        QFont font8;
        font8.setFamily(QStringLiteral("Tw Cen MT"));
        font8.setPointSize(18);
        font8.setBold(true);
        font8.setWeight(75);
        nom_label_2->setFont(font8);
        nom_label_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        DeleteName = new QLineEdit(Delete);
        DeleteName->setObjectName(QStringLiteral("DeleteName"));
        DeleteName->setGeometry(QRect(160, 230, 231, 61));
        QFont font9;
        font9.setFamily(QStringLiteral("Tw Cen MT Condensed"));
        font9.setPointSize(14);
        DeleteName->setFont(font9);
        DeleteName->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        pushButton_delete = new QPushButton(Delete);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(220, 480, 101, 31));
        pushButton_delete->setMaximumSize(QSize(101, 31));
        pushButton_delete->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icones/Icones/supprimer.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_delete->setIcon(icon1);
        pushButton_delete->setIconSize(QSize(20, 20));
        nom_label_8 = new QLabel(Delete);
        nom_label_8->setObjectName(QStringLiteral("nom_label_8"));
        nom_label_8->setGeometry(QRect(20, 310, 501, 71));
        nom_label_8->setFont(font3);
        nom_label_8->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        ConfirmDeleteCheckBox = new QCheckBox(Delete);
        ConfirmDeleteCheckBox->setObjectName(QStringLiteral("ConfirmDeleteCheckBox"));
        ConfirmDeleteCheckBox->setGeometry(QRect(140, 400, 251, 61));
        QFont font10;
        font10.setPointSize(12);
        ConfirmDeleteCheckBox->setFont(font10);
        ConfirmDeleteCheckBox->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#ffc778;;\n"
""));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        Modifier = new QGroupBox(page_3);
        Modifier->setObjectName(QStringLiteral("Modifier"));
        Modifier->setGeometry(QRect(190, 20, 551, 531));
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
        Modifier_2->setGeometry(QRect(60, 10, 441, 51));
        Modifier_2->setFont(font4);
        Modifier_2->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        pb_update = new QPushButton(Modifier);
        pb_update->setObjectName(QStringLiteral("pb_update"));
        pb_update->setGeometry(QRect(230, 490, 101, 31));
        pb_update->setMaximumSize(QSize(101, 31));
        pb_update->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
""));
        pb_update->setIcon(icon);
        pb_update->setIconSize(QSize(20, 20));
        newNom = new QLineEdit(Modifier);
        newNom->setObjectName(QStringLiteral("newNom"));
        newNom->setGeometry(QRect(300, 160, 221, 61));
        QFont font11;
        font11.setFamily(QStringLiteral("Tw Cen MT"));
        font11.setPointSize(14);
        newNom->setFont(font11);
        newNom->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        newDescription = new QLineEdit(Modifier);
        newDescription->setObjectName(QStringLiteral("newDescription"));
        newDescription->setGeometry(QRect(340, 400, 201, 71));
        newDescription->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        descLabel_2 = new QLabel(Modifier);
        descLabel_2->setObjectName(QStringLiteral("descLabel_2"));
        descLabel_2->setGeometry(QRect(10, 410, 311, 61));
        descLabel_2->setFont(font3);
        descLabel_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        id_label_2 = new QLabel(Modifier);
        id_label_2->setObjectName(QStringLiteral("id_label_2"));
        id_label_2->setGeometry(QRect(20, 150, 231, 71));
        QFont font12;
        font12.setFamily(QStringLiteral("Tw Cen MT"));
        font12.setPointSize(16);
        font12.setBold(true);
        font12.setItalic(false);
        font12.setWeight(75);
        id_label_2->setFont(font12);
        id_label_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        newDate = new QDateEdit(Modifier);
        newDate->setObjectName(QStringLiteral("newDate"));
        newDate->setGeometry(QRect(330, 260, 181, 31));
        QFont font13;
        font13.setFamily(QStringLiteral("Tw Cen MT"));
        font13.setPointSize(15);
        newDate->setFont(font13);
        newDate->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        dateLbael_2 = new QLabel(Modifier);
        dateLbael_2->setObjectName(QStringLiteral("dateLbael_2"));
        dateLbael_2->setGeometry(QRect(20, 240, 261, 51));
        QFont font14;
        font14.setFamily(QStringLiteral("Tw Cen MT"));
        font14.setPointSize(16);
        font14.setBold(true);
        font14.setItalic(true);
        font14.setWeight(75);
        dateLbael_2->setFont(font14);
        dateLbael_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        newBudget = new QLineEdit(Modifier);
        newBudget->setObjectName(QStringLiteral("newBudget"));
        newBudget->setGeometry(QRect(320, 310, 211, 61));
        newBudget->setFont(font11);
        newBudget->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        budgetLabel_2 = new QLabel(Modifier);
        budgetLabel_2->setObjectName(QStringLiteral("budgetLabel_2"));
        budgetLabel_2->setGeometry(QRect(20, 310, 261, 61));
        budgetLabel_2->setFont(font14);
        budgetLabel_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        afficher = new QGroupBox(page_4);
        afficher->setObjectName(QStringLiteral("afficher"));
        afficher->setGeometry(QRect(50, -10, 881, 581));
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
        afficher_label->setGeometry(QRect(210, 20, 391, 61));
        QFont font15;
        font15.setFamily(QStringLiteral("Tw Cen MT Condensed"));
        font15.setPointSize(24);
        font15.setBold(true);
        font15.setItalic(false);
        font15.setWeight(75);
        afficher_label->setFont(font15);
        afficher_label->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        tableInvest = new QTableView(afficher);
        tableInvest->setObjectName(QStringLiteral("tableInvest"));
        tableInvest->setGeometry(QRect(110, 150, 651, 361));
        QFont font16;
        font16.setFamily(QStringLiteral("Tw Cen MT Condensed"));
        font16.setPointSize(12);
        font16.setBold(true);
        font16.setUnderline(true);
        font16.setWeight(75);
        tableInvest->setFont(font16);
        tableInvest->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        pushButton_export = new QPushButton(afficher);
        pushButton_export->setObjectName(QStringLiteral("pushButton_export"));
        pushButton_export->setGeometry(QRect(650, 100, 131, 31));
        pushButton_export->setStyleSheet(QLatin1String("\n"
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icones/Icones/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_export->setIcon(icon2);
        pushButton_export->setIconSize(QSize(30, 40));
        pushButton_sort = new QPushButton(afficher);
        pushButton_sort->setObjectName(QStringLiteral("pushButton_sort"));
        pushButton_sort->setGeometry(QRect(20, 100, 101, 31));
        pushButton_sort->setMaximumSize(QSize(101, 31));
        pushButton_sort->setStyleSheet(QLatin1String("\n"
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
        pushButton_sort->setIcon(icon);
        pushButton_sort->setIconSize(QSize(20, 20));
        GotoSearch = new QPushButton(afficher);
        GotoSearch->setObjectName(QStringLiteral("GotoSearch"));
        GotoSearch->setGeometry(QRect(350, 100, 141, 31));
        afficher_label->raise();
        pushButton_export->raise();
        pushButton_sort->raise();
        tableInvest->raise();
        GotoSearch->raise();
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        Delete_2 = new QGroupBox(page_5);
        Delete_2->setObjectName(QStringLiteral("Delete_2"));
        Delete_2->setGeometry(QRect(120, 10, 691, 541));
        Delete_2->setStyleSheet(QLatin1String("QGroupBox {\n"
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
        supprimer_2 = new QLabel(Delete_2);
        supprimer_2->setObjectName(QStringLiteral("supprimer_2"));
        supprimer_2->setGeometry(QRect(110, 30, 481, 111));
        supprimer_2->setFont(font7);
        supprimer_2->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        nom_label_3 = new QLabel(Delete_2);
        nom_label_3->setObjectName(QStringLiteral("nom_label_3"));
        nom_label_3->setGeometry(QRect(80, 160, 91, 71));
        nom_label_3->setFont(font8);
        nom_label_3->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        searchName = new QLineEdit(Delete_2);
        searchName->setObjectName(QStringLiteral("searchName"));
        searchName->setGeometry(QRect(210, 160, 301, 61));
        searchName->setFont(font9);
        searchName->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        tableSearch = new QTableView(Delete_2);
        tableSearch->setObjectName(QStringLiteral("tableSearch"));
        tableSearch->setGeometry(QRect(30, 260, 631, 192));
        tableSearch->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
"font-family: sans-serif;\n"
""));
        pushButton_Chercher = new QPushButton(Delete_2);
        pushButton_Chercher->setObjectName(QStringLiteral("pushButton_Chercher"));
        pushButton_Chercher->setGeometry(QRect(310, 490, 101, 31));
        pushButton_Chercher->setMaximumSize(QSize(101, 31));
        pushButton_Chercher->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
""));
        pushButton_Chercher->setIcon(icon);
        pushButton_Chercher->setIconSize(QSize(20, 20));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        Delete_3 = new QGroupBox(page_6);
        Delete_3->setObjectName(QStringLiteral("Delete_3"));
        Delete_3->setGeometry(QRect(160, 20, 691, 541));
        Delete_3->setStyleSheet(QLatin1String("QGroupBox {\n"
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
        supprimer_3 = new QLabel(Delete_3);
        supprimer_3->setObjectName(QStringLiteral("supprimer_3"));
        supprimer_3->setGeometry(QRect(40, 10, 621, 111));
        supprimer_3->setFont(font4);
        supprimer_3->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        MailLabel = new QLabel(Delete_3);
        MailLabel->setObjectName(QStringLiteral("MailLabel"));
        MailLabel->setGeometry(QRect(60, 130, 181, 71));
        MailLabel->setFont(font8);
        MailLabel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        recipientEdit = new QLineEdit(Delete_3);
        recipientEdit->setObjectName(QStringLiteral("recipientEdit"));
        recipientEdit->setGeometry(QRect(350, 130, 301, 61));
        recipientEdit->setFont(font9);
        recipientEdit->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        pushButton_Mail = new QPushButton(Delete_3);
        pushButton_Mail->setObjectName(QStringLiteral("pushButton_Mail"));
        pushButton_Mail->setGeometry(QRect(310, 490, 101, 31));
        pushButton_Mail->setMaximumSize(QSize(101, 31));
        pushButton_Mail->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
""));
        pushButton_Mail->setIcon(icon);
        pushButton_Mail->setIconSize(QSize(20, 20));
        subjectEdit = new QLineEdit(Delete_3);
        subjectEdit->setObjectName(QStringLiteral("subjectEdit"));
        subjectEdit->setGeometry(QRect(350, 240, 301, 61));
        subjectEdit->setFont(font9);
        subjectEdit->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        MailLabel_2 = new QLabel(Delete_3);
        MailLabel_2->setObjectName(QStringLiteral("MailLabel_2"));
        MailLabel_2->setGeometry(QRect(60, 230, 181, 71));
        MailLabel_2->setFont(font8);
        MailLabel_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        MailLabel_3 = new QLabel(Delete_3);
        MailLabel_3->setObjectName(QStringLiteral("MailLabel_3"));
        MailLabel_3->setGeometry(QRect(60, 330, 181, 71));
        MailLabel_3->setFont(font8);
        MailLabel_3->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        messageEdit = new QLineEdit(Delete_3);
        messageEdit->setObjectName(QStringLiteral("messageEdit"));
        messageEdit->setGeometry(QRect(340, 340, 301, 61));
        messageEdit->setFont(font9);
        messageEdit->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        stackedWidget->addWidget(page_6);
        GoToDelete = new QPushButton(groupBox);
        GoToDelete->setObjectName(QStringLiteral("GoToDelete"));
        GoToDelete->setGeometry(QRect(640, 110, 181, 41));
        QFont font17;
        font17.setFamily(QStringLiteral("Tw Cen MT"));
        font17.setPointSize(20);
        font17.setBold(true);
        font17.setItalic(true);
        font17.setWeight(75);
        GoToDelete->setFont(font17);
        GoToDelete->setStyleSheet(QLatin1String("\n"
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
        GoToAdd = new QPushButton(groupBox);
        GoToAdd->setObjectName(QStringLiteral("GoToAdd"));
        GoToAdd->setGeometry(QRect(150, 110, 211, 41));
        GoToAdd->setFont(font17);
        GoToAdd->setStyleSheet(QLatin1String("\n"
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
        GoToUpdate = new QPushButton(groupBox);
        GoToUpdate->setObjectName(QStringLiteral("GoToUpdate"));
        GoToUpdate->setGeometry(QRect(390, 110, 201, 41));
        GoToUpdate->setFont(font17);
        GoToUpdate->setStyleSheet(QLatin1String("\n"
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
        GoToTable = new QPushButton(groupBox);
        GoToTable->setObjectName(QStringLiteral("GoToTable"));
        GoToTable->setGeometry(QRect(840, 110, 231, 41));
        GoToTable->setFont(font2);
        GoToTable->setStyleSheet(QLatin1String("\n"
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1159, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Gestion des investisseurs", Q_NULLPTR));
        nom_gestion->setText(QApplication::translate("MainWindow", "Gestion des Investisseurs", Q_NULLPTR));
        Add->setTitle(QString());
        dateLbael->setText(QApplication::translate("MainWindow", "Date d'investissement", Q_NULLPTR));
        descLabel->setText(QApplication::translate("MainWindow", "Description de l'investissement", Q_NULLPTR));
        Ajouter->setText(QApplication::translate("MainWindow", "Ajouter un investissement", Q_NULLPTR));
        id_label->setText(QApplication::translate("MainWindow", "Nom d'invetisseur", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        budgetLabel->setText(QApplication::translate("MainWindow", "Budget d'investissement", Q_NULLPTR));
        Delete->setTitle(QString());
        supprimer->setText(QApplication::translate("MainWindow", "Supprimer un investissement", Q_NULLPTR));
        nom_label_2->setText(QApplication::translate("MainWindow", "Nom de l'investissement", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        nom_label_8->setText(QApplication::translate("MainWindow", "Voulez-vous vraiment supprimer cet investissement?", Q_NULLPTR));
        ConfirmDeleteCheckBox->setText(QApplication::translate("MainWindow", "Confirmer la suppression", Q_NULLPTR));
        Modifier->setTitle(QString());
        Modifier_2->setText(QApplication::translate("MainWindow", "Modifier un investissement", Q_NULLPTR));
        pb_update->setText(QApplication::translate("MainWindow", "Update", Q_NULLPTR));
        descLabel_2->setText(QApplication::translate("MainWindow", "Description de l'investissement", Q_NULLPTR));
        id_label_2->setText(QApplication::translate("MainWindow", "Nouveau nom", Q_NULLPTR));
        dateLbael_2->setText(QApplication::translate("MainWindow", "Date d'investissement", Q_NULLPTR));
        budgetLabel_2->setText(QApplication::translate("MainWindow", "Budget d'investissement", Q_NULLPTR));
        afficher->setTitle(QString());
        afficher_label->setText(QApplication::translate("MainWindow", "Liste des investissements", Q_NULLPTR));
        pushButton_export->setText(QApplication::translate("MainWindow", "Export PDF", Q_NULLPTR));
        pushButton_sort->setText(QApplication::translate("MainWindow", "TRI par date", Q_NULLPTR));
        GotoSearch->setText(QApplication::translate("MainWindow", "search", Q_NULLPTR));
        Delete_2->setTitle(QString());
        supprimer_2->setText(QApplication::translate("MainWindow", "Chercher un Investissement", Q_NULLPTR));
        nom_label_3->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        pushButton_Chercher->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        Delete_3->setTitle(QString());
        supprimer_3->setText(QApplication::translate("MainWindow", "Envoi d'une demande d'investissement", Q_NULLPTR));
        MailLabel->setText(QApplication::translate("MainWindow", "Mail Adresse", Q_NULLPTR));
        pushButton_Mail->setText(QApplication::translate("MainWindow", "Mail", Q_NULLPTR));
        MailLabel_2->setText(QApplication::translate("MainWindow", "   Object", Q_NULLPTR));
        MailLabel_3->setText(QApplication::translate("MainWindow", "   Message", Q_NULLPTR));
        GoToDelete->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        GoToAdd->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        GoToUpdate->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        GoToTable->setText(QApplication::translate("MainWindow", "Tableu d'investissements", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
