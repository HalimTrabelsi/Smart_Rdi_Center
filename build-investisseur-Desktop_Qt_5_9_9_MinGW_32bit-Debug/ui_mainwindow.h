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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
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
    QLabel *Ajouter;
    QPushButton *pushButton_add;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *id_label;
    QLineEdit *nom_Inv;
    QHBoxLayout *horizontalLayout_12;
    QLabel *dateLbael;
    QDateEdit *date_Invest;
    QHBoxLayout *horizontalLayout_13;
    QLabel *budgetLabel;
    QLineEdit *budget_Invest;
    QHBoxLayout *horizontalLayout_14;
    QLabel *descLabel;
    QLineEdit *desc_Invest;
    QWidget *page_2;
    QGroupBox *Delete;
    QLabel *supprimer;
    QPushButton *pushButton_delete;
    QLabel *nom_label_8;
    QCheckBox *ConfirmDeleteCheckBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QLabel *nom_label_2;
    QLineEdit *DeleteName;
    QWidget *page_3;
    QGroupBox *Modifier;
    QLabel *Modifier_2;
    QPushButton *pb_update;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *id_label_2;
    QLineEdit *newNom;
    QHBoxLayout *horizontalLayout_9;
    QLabel *dateLbael_2;
    QDateEdit *newDate;
    QHBoxLayout *horizontalLayout_10;
    QLabel *budgetLabel_2;
    QLineEdit *newBudget;
    QVBoxLayout *verticalLayout_4;
    QLabel *descLabel_2;
    QLineEdit *newDescription;
    QWidget *page_4;
    QGroupBox *afficher;
    QLabel *afficher_label;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *GotoStats;
    QPushButton *pushButton_export;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_sort;
    QPushButton *GotoSearch;
    QTableView *tableInvest;
    QWidget *page_5;
    QGroupBox *Delete_2;
    QPushButton *pushButton_Chercher;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_2;
    QLabel *supprimer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *nom_label_3;
    QLineEdit *searchName;
    QTableView *tableSearch;
    QWidget *page_6;
    QGroupBox *Delete_3;
    QPushButton *pushButton_sendMail;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout;
    QLabel *supprimer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *MailLabel;
    QLineEdit *recipientEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *ObjectLabel;
    QLineEdit *objectEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *MessageLabel;
    QLineEdit *bodyEdit;
    QWidget *page_7;
    QLabel *label;
    QPushButton *GetStats;
    QLabel *statsLabel;
    QWidget *page_8;
    QWidget *page_9;
    QPushButton *GoToMail;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *GoToAdd;
    QPushButton *GoToUpdate;
    QPushButton *GoToDelete;
    QPushButton *GoToTable;
    QPushButton *openMessengerConnection;
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
        nom_gestion->setGeometry(QRect(420, 40, 461, 71));
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
        stackedWidget->setGeometry(QRect(200, 170, 931, 591));
        QFont font1;
        font1.setFamily(QStringLiteral("Tw Cen MT Condensed"));
        font1.setPointSize(12);
        stackedWidget->setFont(font1);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        Add = new QGroupBox(page);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setGeometry(QRect(110, 10, 701, 541));
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
        Ajouter = new QLabel(Add);
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        Ajouter->setGeometry(QRect(160, 10, 421, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Tw Cen MT"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        Ajouter->setFont(font2);
        Ajouter->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
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
        layoutWidget = new QWidget(Add);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 90, 621, 361));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        id_label = new QLabel(layoutWidget);
        id_label->setObjectName(QStringLiteral("id_label"));
        QFont font3;
        font3.setFamily(QStringLiteral("Tw Cen MT"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        id_label->setFont(font3);
        id_label->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_11->addWidget(id_label);

        nom_Inv = new QLineEdit(layoutWidget);
        nom_Inv->setObjectName(QStringLiteral("nom_Inv"));
        QFont font4;
        font4.setFamily(QStringLiteral("Tw Cen MT"));
        font4.setPointSize(12);
        nom_Inv->setFont(font4);
        nom_Inv->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_11->addWidget(nom_Inv);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        dateLbael = new QLabel(layoutWidget);
        dateLbael->setObjectName(QStringLiteral("dateLbael"));
        dateLbael->setFont(font3);
        dateLbael->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_12->addWidget(dateLbael);

        date_Invest = new QDateEdit(layoutWidget);
        date_Invest->setObjectName(QStringLiteral("date_Invest"));
        date_Invest->setFont(font3);
        date_Invest->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_12->addWidget(date_Invest);


        verticalLayout_7->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        budgetLabel = new QLabel(layoutWidget);
        budgetLabel->setObjectName(QStringLiteral("budgetLabel"));
        QFont font5;
        font5.setFamily(QStringLiteral("Tw Cen MT"));
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        budgetLabel->setFont(font5);
        budgetLabel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_13->addWidget(budgetLabel);

        budget_Invest = new QLineEdit(layoutWidget);
        budget_Invest->setObjectName(QStringLiteral("budget_Invest"));
        budget_Invest->setFont(font4);
        budget_Invest->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_13->addWidget(budget_Invest);


        verticalLayout_7->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        descLabel = new QLabel(layoutWidget);
        descLabel->setObjectName(QStringLiteral("descLabel"));
        descLabel->setFont(font5);
        descLabel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_14->addWidget(descLabel);

        desc_Invest = new QLineEdit(layoutWidget);
        desc_Invest->setObjectName(QStringLiteral("desc_Invest"));
        QFont font6;
        font6.setFamily(QStringLiteral("Tw Cen MT"));
        font6.setPointSize(10);
        desc_Invest->setFont(font6);
        desc_Invest->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_14->addWidget(desc_Invest);


        verticalLayout_7->addLayout(horizontalLayout_14);

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
        nom_label_8->setGeometry(QRect(10, 260, 501, 71));
        nom_label_8->setFont(font5);
        nom_label_8->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        ConfirmDeleteCheckBox = new QCheckBox(Delete);
        ConfirmDeleteCheckBox->setObjectName(QStringLiteral("ConfirmDeleteCheckBox"));
        ConfirmDeleteCheckBox->setGeometry(QRect(140, 350, 251, 61));
        QFont font8;
        font8.setPointSize(12);
        ConfirmDeleteCheckBox->setFont(font8);
        ConfirmDeleteCheckBox->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#ffc778;;\n"
""));
        layoutWidget1 = new QWidget(Delete);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 150, 326, 94));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        nom_label_2 = new QLabel(layoutWidget1);
        nom_label_2->setObjectName(QStringLiteral("nom_label_2"));
        QFont font9;
        font9.setFamily(QStringLiteral("Tw Cen MT"));
        font9.setPointSize(18);
        font9.setBold(true);
        font9.setWeight(75);
        nom_label_2->setFont(font9);
        nom_label_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        verticalLayout_6->addWidget(nom_label_2);

        DeleteName = new QLineEdit(layoutWidget1);
        DeleteName->setObjectName(QStringLiteral("DeleteName"));
        QFont font10;
        font10.setFamily(QStringLiteral("Tw Cen MT Condensed"));
        font10.setPointSize(14);
        DeleteName->setFont(font10);
        DeleteName->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        verticalLayout_6->addWidget(DeleteName);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        Modifier = new QGroupBox(page_3);
        Modifier->setObjectName(QStringLiteral("Modifier"));
        Modifier->setGeometry(QRect(190, 40, 661, 531));
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
        Modifier_2->setGeometry(QRect(120, 10, 441, 51));
        Modifier_2->setFont(font2);
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
        layoutWidget2 = new QWidget(Modifier);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 70, 648, 331));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        id_label_2 = new QLabel(layoutWidget2);
        id_label_2->setObjectName(QStringLiteral("id_label_2"));
        QFont font11;
        font11.setFamily(QStringLiteral("Tw Cen MT"));
        font11.setPointSize(16);
        font11.setBold(true);
        font11.setItalic(false);
        font11.setWeight(75);
        id_label_2->setFont(font11);
        id_label_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_8->addWidget(id_label_2);

        newNom = new QLineEdit(layoutWidget2);
        newNom->setObjectName(QStringLiteral("newNom"));
        QFont font12;
        font12.setFamily(QStringLiteral("Tw Cen MT"));
        font12.setPointSize(14);
        newNom->setFont(font12);
        newNom->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_8->addWidget(newNom);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        dateLbael_2 = new QLabel(layoutWidget2);
        dateLbael_2->setObjectName(QStringLiteral("dateLbael_2"));
        QFont font13;
        font13.setFamily(QStringLiteral("Tw Cen MT"));
        font13.setPointSize(16);
        font13.setBold(true);
        font13.setItalic(true);
        font13.setWeight(75);
        dateLbael_2->setFont(font13);
        dateLbael_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_9->addWidget(dateLbael_2);

        newDate = new QDateEdit(layoutWidget2);
        newDate->setObjectName(QStringLiteral("newDate"));
        QFont font14;
        font14.setFamily(QStringLiteral("Tw Cen MT"));
        font14.setPointSize(15);
        newDate->setFont(font14);
        newDate->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_9->addWidget(newDate);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        budgetLabel_2 = new QLabel(layoutWidget2);
        budgetLabel_2->setObjectName(QStringLiteral("budgetLabel_2"));
        budgetLabel_2->setFont(font13);
        budgetLabel_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_10->addWidget(budgetLabel_2);

        newBudget = new QLineEdit(layoutWidget2);
        newBudget->setObjectName(QStringLiteral("newBudget"));
        newBudget->setFont(font12);
        newBudget->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_10->addWidget(newBudget);


        verticalLayout_5->addLayout(horizontalLayout_10);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        descLabel_2 = new QLabel(layoutWidget2);
        descLabel_2->setObjectName(QStringLiteral("descLabel_2"));
        descLabel_2->setFont(font5);
        descLabel_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        verticalLayout_4->addWidget(descLabel_2);

        newDescription = new QLineEdit(layoutWidget2);
        newDescription->setObjectName(QStringLiteral("newDescription"));
        newDescription->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        verticalLayout_4->addWidget(newDescription);


        verticalLayout_5->addLayout(verticalLayout_4);

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
        afficher_label->setGeometry(QRect(250, 10, 391, 61));
        QFont font15;
        font15.setFamily(QStringLiteral("Tw Cen MT Condensed"));
        font15.setPointSize(24);
        font15.setBold(true);
        font15.setItalic(false);
        font15.setWeight(75);
        afficher_label->setFont(font15);
        afficher_label->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));
        layoutWidget3 = new QWidget(afficher);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 90, 821, 481));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        GotoStats = new QPushButton(layoutWidget3);
        GotoStats->setObjectName(QStringLiteral("GotoStats"));
        QFont font16;
        font16.setPointSize(16);
        GotoStats->setFont(font16);
        GotoStats->setStyleSheet(QLatin1String("\n"
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
        GotoStats->setIcon(icon2);
        GotoStats->setIconSize(QSize(30, 40));

        horizontalLayout_5->addWidget(GotoStats);

        pushButton_export = new QPushButton(layoutWidget3);
        pushButton_export->setObjectName(QStringLiteral("pushButton_export"));
        pushButton_export->setFont(font16);
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
        pushButton_export->setIcon(icon2);
        pushButton_export->setIconSize(QSize(30, 40));

        horizontalLayout_5->addWidget(pushButton_export);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_sort = new QPushButton(layoutWidget3);
        pushButton_sort->setObjectName(QStringLiteral("pushButton_sort"));
        pushButton_sort->setMaximumSize(QSize(101, 31));
        pushButton_sort->setFont(font8);
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

        horizontalLayout_6->addWidget(pushButton_sort);

        GotoSearch = new QPushButton(layoutWidget3);
        GotoSearch->setObjectName(QStringLiteral("GotoSearch"));
        GotoSearch->setFont(font16);

        horizontalLayout_6->addWidget(GotoSearch);


        verticalLayout_3->addLayout(horizontalLayout_6);

        tableInvest = new QTableView(layoutWidget3);
        tableInvest->setObjectName(QStringLiteral("tableInvest"));
        QFont font17;
        font17.setFamily(QStringLiteral("Tw Cen MT Condensed"));
        font17.setPointSize(12);
        font17.setBold(true);
        font17.setUnderline(true);
        font17.setWeight(75);
        tableInvest->setFont(font17);
        tableInvest->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        verticalLayout_3->addWidget(tableInvest);

        layoutWidget->raise();
        afficher_label->raise();
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
        pushButton_Chercher = new QPushButton(Delete_2);
        pushButton_Chercher->setObjectName(QStringLiteral("pushButton_Chercher"));
        pushButton_Chercher->setGeometry(QRect(300, 430, 101, 31));
        pushButton_Chercher->setMaximumSize(QSize(101, 31));
        pushButton_Chercher->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
""));
        pushButton_Chercher->setIcon(icon);
        pushButton_Chercher->setIconSize(QSize(20, 20));
        layoutWidget4 = new QWidget(Delete_2);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(30, 30, 641, 371));
        verticalLayout_2 = new QVBoxLayout(layoutWidget4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        supprimer_2 = new QLabel(layoutWidget4);
        supprimer_2->setObjectName(QStringLiteral("supprimer_2"));
        supprimer_2->setFont(font7);
        supprimer_2->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));

        verticalLayout_2->addWidget(supprimer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        nom_label_3 = new QLabel(layoutWidget4);
        nom_label_3->setObjectName(QStringLiteral("nom_label_3"));
        nom_label_3->setFont(font9);
        nom_label_3->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_4->addWidget(nom_label_3);

        searchName = new QLineEdit(layoutWidget4);
        searchName->setObjectName(QStringLiteral("searchName"));
        searchName->setFont(font10);
        searchName->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_4->addWidget(searchName);


        verticalLayout_2->addLayout(horizontalLayout_4);

        tableSearch = new QTableView(layoutWidget4);
        tableSearch->setObjectName(QStringLiteral("tableSearch"));
        tableSearch->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
"font-family: sans-serif;\n"
""));

        verticalLayout_2->addWidget(tableSearch);

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
        pushButton_sendMail = new QPushButton(Delete_3);
        pushButton_sendMail->setObjectName(QStringLiteral("pushButton_sendMail"));
        pushButton_sendMail->setGeometry(QRect(290, 479, 101, 31));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_sendMail->sizePolicy().hasHeightForWidth());
        pushButton_sendMail->setSizePolicy(sizePolicy);
        pushButton_sendMail->setMaximumSize(QSize(101, 31));
        pushButton_sendMail->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
""));
        pushButton_sendMail->setIcon(icon);
        pushButton_sendMail->setIconSize(QSize(20, 20));
        layoutWidget5 = new QWidget(Delete_3);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(40, 10, 624, 461));
        verticalLayout = new QVBoxLayout(layoutWidget5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        supprimer_3 = new QLabel(layoutWidget5);
        supprimer_3->setObjectName(QStringLiteral("supprimer_3"));
        supprimer_3->setFont(font2);
        supprimer_3->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
"border-radius: 10px;"));

        verticalLayout->addWidget(supprimer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        MailLabel = new QLabel(layoutWidget5);
        MailLabel->setObjectName(QStringLiteral("MailLabel"));
        MailLabel->setFont(font9);
        MailLabel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_2->addWidget(MailLabel);

        recipientEdit = new QLineEdit(layoutWidget5);
        recipientEdit->setObjectName(QStringLiteral("recipientEdit"));
        recipientEdit->setFont(font10);
        recipientEdit->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_2->addWidget(recipientEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ObjectLabel = new QLabel(layoutWidget5);
        ObjectLabel->setObjectName(QStringLiteral("ObjectLabel"));
        ObjectLabel->setFont(font9);
        ObjectLabel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout->addWidget(ObjectLabel);

        objectEdit = new QLineEdit(layoutWidget5);
        objectEdit->setObjectName(QStringLiteral("objectEdit"));
        objectEdit->setFont(font10);
        objectEdit->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout->addWidget(objectEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        MessageLabel = new QLabel(layoutWidget5);
        MessageLabel->setObjectName(QStringLiteral("MessageLabel"));
        MessageLabel->setFont(font9);
        MessageLabel->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_3->addWidget(MessageLabel);

        bodyEdit = new QLineEdit(layoutWidget5);
        bodyEdit->setObjectName(QStringLiteral("bodyEdit"));
        bodyEdit->setFont(font10);
        bodyEdit->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_3->addWidget(bodyEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label = new QLabel(page_7);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 70, 56, 16));
        GetStats = new QPushButton(page_7);
        GetStats->setObjectName(QStringLiteral("GetStats"));
        GetStats->setGeometry(QRect(370, 50, 301, 81));
        QFont font18;
        font18.setFamily(QStringLiteral("Tw Cen MT Condensed"));
        font18.setPointSize(28);
        font18.setBold(true);
        font18.setWeight(75);
        GetStats->setFont(font18);
        GetStats->setStyleSheet(QLatin1String("background-color:#ffc778;\n"
""));
        GetStats->setIcon(icon2);
        GetStats->setIconSize(QSize(30, 40));
        statsLabel = new QLabel(page_7);
        statsLabel->setObjectName(QStringLiteral("statsLabel"));
        statsLabel->setGeometry(QRect(280, 150, 491, 241));
        statsLabel->setStyleSheet(QLatin1String("QLabel {\n"
"    font-family: \"Tw Cen MT Condensed\";\n"
"    font-size: 28px;\n"
"    border: none;\n"
"    padding: 0;\n"
"    margin: 0;\n"
"    text-align: center;\n"
"    qproperty-alignment: AlignCenter;\n"
"	background-color:#ffc778;\n"
"	border-radius: 10px;\n"
"\n"
"}\n"
""));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        stackedWidget->addWidget(page_9);
        GoToMail = new QPushButton(groupBox);
        GoToMail->setObjectName(QStringLiteral("GoToMail"));
        GoToMail->setGeometry(QRect(970, 120, 106, 46));
        QFont font19;
        font19.setFamily(QStringLiteral("Tw Cen MT"));
        font19.setPointSize(20);
        font19.setBold(true);
        font19.setItalic(true);
        font19.setWeight(75);
        GoToMail->setFont(font19);
        GoToMail->setStyleSheet(QLatin1String("\n"
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
        layoutWidget6 = new QWidget(groupBox);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(360, 120, 603, 48));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        GoToAdd = new QPushButton(layoutWidget6);
        GoToAdd->setObjectName(QStringLiteral("GoToAdd"));
        GoToAdd->setFont(font19);
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

        horizontalLayout_7->addWidget(GoToAdd);

        GoToUpdate = new QPushButton(layoutWidget6);
        GoToUpdate->setObjectName(QStringLiteral("GoToUpdate"));
        GoToUpdate->setFont(font19);
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

        horizontalLayout_7->addWidget(GoToUpdate);

        GoToDelete = new QPushButton(layoutWidget6);
        GoToDelete->setObjectName(QStringLiteral("GoToDelete"));
        GoToDelete->setFont(font19);
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

        horizontalLayout_7->addWidget(GoToDelete);

        GoToTable = new QPushButton(layoutWidget6);
        GoToTable->setObjectName(QStringLiteral("GoToTable"));
        GoToTable->setFont(font3);
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

        horizontalLayout_7->addWidget(GoToTable);

        openMessengerConnection = new QPushButton(groupBox);
        openMessengerConnection->setObjectName(QStringLiteral("openMessengerConnection"));
        openMessengerConnection->setGeometry(QRect(250, 120, 106, 46));
        openMessengerConnection->setFont(font19);
        openMessengerConnection->setStyleSheet(QLatin1String("\n"
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

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Gestion des investisseurs", Q_NULLPTR));
        nom_gestion->setText(QApplication::translate("MainWindow", "Gestion des Investisseurs", Q_NULLPTR));
        Add->setTitle(QString());
        Ajouter->setText(QApplication::translate("MainWindow", "Ajouter un investissement", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        id_label->setText(QApplication::translate("MainWindow", "Nom d'invetisseur", Q_NULLPTR));
        dateLbael->setText(QApplication::translate("MainWindow", "Date d'investissement", Q_NULLPTR));
        budgetLabel->setText(QApplication::translate("MainWindow", "Budget d'investissement", Q_NULLPTR));
        descLabel->setText(QApplication::translate("MainWindow", "Description de l'investissement", Q_NULLPTR));
        Delete->setTitle(QString());
        supprimer->setText(QApplication::translate("MainWindow", "Supprimer un investissement", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        nom_label_8->setText(QApplication::translate("MainWindow", "Voulez-vous vraiment supprimer cet investissement?", Q_NULLPTR));
        ConfirmDeleteCheckBox->setText(QApplication::translate("MainWindow", "Confirmer la suppression", Q_NULLPTR));
        nom_label_2->setText(QApplication::translate("MainWindow", "Nom de l'investissement", Q_NULLPTR));
        Modifier->setTitle(QString());
        Modifier_2->setText(QApplication::translate("MainWindow", "Modifier un investissement", Q_NULLPTR));
        pb_update->setText(QApplication::translate("MainWindow", "Update", Q_NULLPTR));
        id_label_2->setText(QApplication::translate("MainWindow", "Nouveau nom", Q_NULLPTR));
        dateLbael_2->setText(QApplication::translate("MainWindow", "Date d'investissement", Q_NULLPTR));
        budgetLabel_2->setText(QApplication::translate("MainWindow", "Budget d'investissement", Q_NULLPTR));
        descLabel_2->setText(QApplication::translate("MainWindow", "Description de l'investissement", Q_NULLPTR));
        afficher->setTitle(QString());
        afficher_label->setText(QApplication::translate("MainWindow", "Liste des investissements", Q_NULLPTR));
        GotoStats->setText(QApplication::translate("MainWindow", "Stats", Q_NULLPTR));
        pushButton_export->setText(QApplication::translate("MainWindow", "Export PDF", Q_NULLPTR));
        pushButton_sort->setText(QApplication::translate("MainWindow", "TRI par date", Q_NULLPTR));
        GotoSearch->setText(QApplication::translate("MainWindow", "search", Q_NULLPTR));
        Delete_2->setTitle(QString());
        pushButton_Chercher->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        supprimer_2->setText(QApplication::translate("MainWindow", "       Chercher un Investissement", Q_NULLPTR));
        nom_label_3->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        Delete_3->setTitle(QString());
        pushButton_sendMail->setText(QApplication::translate("MainWindow", "Mail", Q_NULLPTR));
        supprimer_3->setText(QApplication::translate("MainWindow", "Envoi d'une demande d'investissement", Q_NULLPTR));
        MailLabel->setText(QApplication::translate("MainWindow", "Mail Adresse", Q_NULLPTR));
        ObjectLabel->setText(QApplication::translate("MainWindow", "Object", Q_NULLPTR));
        MessageLabel->setText(QApplication::translate("MainWindow", "Votre message", Q_NULLPTR));
        label->setText(QString());
        GetStats->setText(QApplication::translate("MainWindow", "Stats", Q_NULLPTR));
        statsLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        GoToMail->setText(QApplication::translate("MainWindow", "Mail", Q_NULLPTR));
        GoToAdd->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        GoToUpdate->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        GoToDelete->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        GoToTable->setText(QApplication::translate("MainWindow", "Tableu d'investissements", Q_NULLPTR));
        openMessengerConnection->setText(QApplication::translate("MainWindow", "Chat", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
