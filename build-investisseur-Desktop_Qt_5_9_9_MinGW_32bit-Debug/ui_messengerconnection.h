/********************************************************************************
** Form generated from reading UI file 'messengerconnection.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSENGERCONNECTION_H
#define UI_MESSENGERCONNECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_messengerConnection
{
public:
    QGroupBox *ssr;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_4;
    QLineEdit *nickname;
    QTextEdit *textEdit;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_18;
    QLineEdit *message;
    QPushButton *send;
    QPushButton *bind;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *hostname;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *port;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *messengerConnection)
    {
        if (messengerConnection->objectName().isEmpty())
            messengerConnection->setObjectName(QStringLiteral("messengerConnection"));
        messengerConnection->resize(1115, 650);
        ssr = new QGroupBox(messengerConnection);
        ssr->setObjectName(QStringLiteral("ssr"));
        ssr->setGeometry(QRect(100, 20, 941, 571));
        ssr->setStyleSheet(QLatin1String("QGroupBox {\n"
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
        layoutWidget = new QWidget(ssr);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 571, 521));
        verticalLayout_9 = new QVBoxLayout(layoutWidget);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_19->addWidget(label_4);

        nickname = new QLineEdit(layoutWidget);
        nickname->setObjectName(QStringLiteral("nickname"));
        QFont font1;
        font1.setPointSize(12);
        nickname->setFont(font1);
        nickname->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_19->addWidget(nickname);


        verticalLayout_9->addLayout(horizontalLayout_19);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        verticalLayout_9->addWidget(textEdit);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        verticalLayout_9->addWidget(label_5);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        message = new QLineEdit(layoutWidget);
        message->setObjectName(QStringLiteral("message"));
        message->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_18->addWidget(message);

        send = new QPushButton(layoutWidget);
        send->setObjectName(QStringLiteral("send"));

        horizontalLayout_18->addWidget(send);

        bind = new QPushButton(layoutWidget);
        bind->setObjectName(QStringLiteral("bind"));

        horizontalLayout_18->addWidget(bind);


        verticalLayout_9->addLayout(horizontalLayout_18);

        widget = new QWidget(ssr);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(590, 31, 301, 441));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout->addWidget(label_2);

        hostname = new QLineEdit(widget);
        hostname->setObjectName(QStringLiteral("hostname"));
        hostname->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout->addWidget(hostname);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));

        horizontalLayout_2->addWidget(label_3);

        port = new QSpinBox(widget);
        port->setObjectName(QStringLiteral("port"));
        port->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color:#D6DCE0;\n"
""));
        port->setMaximum(3333);

        horizontalLayout_2->addWidget(port);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ok = new QPushButton(widget);
        ok->setObjectName(QStringLiteral("ok"));
        QFont font3;
        font3.setPointSize(16);
        ok->setFont(font3);

        horizontalLayout_3->addWidget(ok);

        cancel = new QPushButton(widget);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setFont(font3);

        horizontalLayout_3->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(messengerConnection);

        QMetaObject::connectSlotsByName(messengerConnection);
    } // setupUi

    void retranslateUi(QDialog *messengerConnection)
    {
        messengerConnection->setWindowTitle(QApplication::translate("messengerConnection", "Dialog", Q_NULLPTR));
        ssr->setTitle(QString());
        label_4->setText(QApplication::translate("messengerConnection", "Nom de l'utilisateur", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("messengerConnection", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("messengerConnection", "Message", Q_NULLPTR));
        send->setText(QApplication::translate("messengerConnection", "envoyer", Q_NULLPTR));
        bind->setText(QApplication::translate("messengerConnection", "connecter", Q_NULLPTR));
        label_2->setText(QApplication::translate("messengerConnection", "Host", Q_NULLPTR));
        label_3->setText(QApplication::translate("messengerConnection", "Port", Q_NULLPTR));
        ok->setText(QApplication::translate("messengerConnection", "accept", Q_NULLPTR));
        cancel->setText(QApplication::translate("messengerConnection", "cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class messengerConnection: public Ui_messengerConnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSENGERCONNECTION_H
