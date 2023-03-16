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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionIcon1;
    QAction *actionIcon2;
    QAction *actionicon3;
    QAction *actionicon4;
    QAction *actionicon5;
    QAction *actionlogo;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_7;
    QTextEdit *textEdit_2;
    QTabWidget *tabWidget;
    QWidget *general;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_Objet;
    QLineEdit *le_Desc;
    QLineEdit *le_Budget;
    QPushButton *pushButton_ajouter;
    QLabel *label_8;
    QLineEdit *le_ID;
    QPushButton *pb_modifier;
    QLineEdit *le_find;
    QLabel *label_12;
    QGroupBox *groupBox_6;
    QTableView *tab_etudiant;
    QGroupBox *groupBox_7;
    QPushButton *pushButton_supprimer;
    QLineEdit *le_IDS;
    QLabel *label_10;
    QWidget *calendar;
    QCalendarWidget *calendarWidget;
    QLabel *label_7;
    QWidget *tab;
    QWidget *tab_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(871, 640);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionIcon1 = new QAction(MainWindow);
        actionIcon1->setObjectName(QStringLiteral("actionIcon1"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/xxxxxxxxx-01.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIcon1->setIcon(icon);
        actionIcon2 = new QAction(MainWindow);
        actionIcon2->setObjectName(QStringLiteral("actionIcon2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/Untitled-1-01.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIcon2->setIcon(icon1);
        actionicon3 = new QAction(MainWindow);
        actionicon3->setObjectName(QStringLiteral("actionicon3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/sdf1-01.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionicon3->setIcon(icon2);
        actionicon4 = new QAction(MainWindow);
        actionicon4->setObjectName(QStringLiteral("actionicon4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/xxxxxxccccccccccccc-01.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionicon4->setIcon(icon3);
        actionicon5 = new QAction(MainWindow);
        actionicon5->setObjectName(QStringLiteral("actionicon5"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/qsdfg-01.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionicon5->setIcon(icon4);
        actionlogo = new QAction(MainWindow);
        actionlogo->setObjectName(QStringLiteral("actionlogo"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/image/logo application.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionlogo->setIcon(icon5);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(-150, 0, 1021, 631));
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(96, 195, 244);"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(170, 350, 311, 121));
        groupBox_3->setStyleSheet(QStringLiteral("background-color: rgb(133, 214, 255);"));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 27, 261, 31));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(32, 77, 261, 31));
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(170, 480, 311, 81));
        groupBox_4->setStyleSheet(QStringLiteral("background-color: rgb(133, 214, 255);"));
        pushButton_6 = new QPushButton(groupBox_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 27, 261, 31));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(510, 370, 311, 181));
        groupBox_5->setStyleSheet(QStringLiteral("background-color: rgb(133, 214, 255);"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 101, 21));
        lineEdit_4 = new QLineEdit(groupBox_5);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(80, 30, 151, 22));
        lineEdit_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(groupBox_5);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(250, 20, 41, 31));
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textEdit_2 = new QTextEdit(groupBox_5);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 60, 261, 111));
        textEdit_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(146, 10, 781, 601));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Poppins"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        tabWidget->setFont(font);
        general = new QWidget();
        general->setObjectName(QStringLiteral("general"));
        groupBox_2 = new QGroupBox(general);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 311, 481));
        groupBox_2->setStyleSheet(QStringLiteral("background-color: rgb(133, 214, 255);"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 81, 21));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 110, 61, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 150, 71, 21));
        le_Objet = new QLineEdit(groupBox_2);
        le_Objet->setObjectName(QStringLiteral("le_Objet"));
        le_Objet->setGeometry(QRect(100, 70, 113, 22));
        le_Objet->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_Desc = new QLineEdit(groupBox_2);
        le_Desc->setObjectName(QStringLiteral("le_Desc"));
        le_Desc->setGeometry(QRect(100, 110, 113, 22));
        le_Desc->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_Budget = new QLineEdit(groupBox_2);
        le_Budget->setObjectName(QStringLiteral("le_Budget"));
        le_Budget->setGeometry(QRect(100, 150, 113, 22));
        le_Budget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_ajouter = new QPushButton(groupBox_2);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(210, 340, 93, 28));
        pushButton_ajouter->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 30, 71, 16));
        le_ID = new QLineEdit(groupBox_2);
        le_ID->setObjectName(QStringLiteral("le_ID"));
        le_ID->setGeometry(QRect(100, 30, 113, 22));
        le_ID->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pb_modifier = new QPushButton(groupBox_2);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(210, 440, 93, 28));
        pb_modifier->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_find = new QLineEdit(groupBox_2);
        le_find->setObjectName(QStringLiteral("le_find"));
        le_find->setGeometry(QRect(92, 400, 201, 22));
        le_find->setStyleSheet(QStringLiteral("background-color: rgb(223, 223, 223);"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 400, 41, 20));
        groupBox_6 = new QGroupBox(general);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(340, 10, 431, 301));
        groupBox_6->setStyleSheet(QStringLiteral("background-color: rgb(133, 214, 255);"));
        tab_etudiant = new QTableView(groupBox_6);
        tab_etudiant->setObjectName(QStringLiteral("tab_etudiant"));
        tab_etudiant->setGeometry(QRect(20, 30, 401, 241));
        tab_etudiant->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        groupBox_7 = new QGroupBox(general);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(340, 330, 431, 201));
        groupBox_7->setStyleSheet(QStringLiteral("background-color: rgb(133, 214, 255);"));
        pushButton_supprimer = new QPushButton(groupBox_7);
        pushButton_supprimer->setObjectName(QStringLiteral("pushButton_supprimer"));
        pushButton_supprimer->setGeometry(QRect(270, 150, 93, 28));
        pushButton_supprimer->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_IDS = new QLineEdit(groupBox_7);
        le_IDS->setObjectName(QStringLiteral("le_IDS"));
        le_IDS->setGeometry(QRect(90, 70, 171, 22));
        le_IDS->setStyleSheet(QStringLiteral("background-color: rgb(223, 223, 223);"));
        label_10 = new QLabel(groupBox_7);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 70, 41, 20));
        tabWidget->addTab(general, QString());
        calendar = new QWidget();
        calendar->setObjectName(QStringLiteral("calendar"));
        calendarWidget = new QCalendarWidget(calendar);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(113, 100, 581, 381));
        calendarWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_7 = new QLabel(calendar);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(330, 40, 100, 31));
        tabWidget->addTab(calendar, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setStyleSheet(QStringLiteral("background-color: rgb(133, 214, 255);"));
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(75, 93));
        toolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);

        toolBar->addAction(actionlogo);
        toolBar->addAction(actionIcon1);
        toolBar->addAction(actionIcon2);
        toolBar->addAction(actionicon3);
        toolBar->addAction(actionicon4);
        toolBar->addAction(actionicon5);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionIcon1->setText(QApplication::translate("MainWindow", "Icon1", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionIcon1->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionIcon2->setText(QApplication::translate("MainWindow", "Icon2", Q_NULLPTR));
        actionicon3->setText(QApplication::translate("MainWindow", "icon3", Q_NULLPTR));
        actionicon4->setText(QApplication::translate("MainWindow", "icon4", Q_NULLPTR));
        actionicon5->setText(QApplication::translate("MainWindow", "icon5", Q_NULLPTR));
        actionlogo->setText(QApplication::translate("MainWindow", "logo", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "The APP", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Create PDF", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Stats", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Show stats", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Write here", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Create", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Objet", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Budget", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("MainWindow", "Modify", Q_NULLPTR));
        le_find->setText(QApplication::translate("MainWindow", "Type here the id to modify", Q_NULLPTR));
        le_find->setPlaceholderText(QString());
        label_12->setText(QApplication::translate("MainWindow", "ID ", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Read", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        pushButton_supprimer->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        le_IDS->setText(QApplication::translate("MainWindow", "Type the ID to delete", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(general), QApplication::translate("MainWindow", "General", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Calendar</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(calendar), QApplication::translate("MainWindow", "Calendar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Modify", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Page", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
