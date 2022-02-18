/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_7;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_formula;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *button_s;
    QPushButton *button_q;
    QPushButton *button_and;
    QPushButton *button_delet;
    QPushButton *button_t;
    QPushButton *button_enter;
    QPushButton *button_parenthesesR;
    QPushButton *button_p;
    QPushButton *button_parenthesesL;
    QPushButton *button_r;
    QPushButton *button_or;
    QPushButton *button_deny;
    QPushButton *button_u;
    QPushButton *button_implication;
    QWidget *tab_8;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QLabel *label_result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(311, 398);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(310, 380));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 23, 35);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("border :0"));
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        sizePolicy.setHeightForWidth(tab_7->sizePolicy().hasHeightForWidth());
        tab_7->setSizePolicy(sizePolicy);
        tab_7->setSizeIncrement(QSize(0, 0));
        gridLayout_4 = new QGridLayout(tab_7);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(9, -1, -1, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(tab_7);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(0, 60));
        groupBox_2->setMaximumSize(QSize(16777215, 80));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_formula = new QLabel(groupBox_2);
        label_formula->setObjectName(QString::fromUtf8("label_formula"));
        sizePolicy.setHeightForWidth(label_formula->sizePolicy().hasHeightForWidth());
        label_formula->setSizePolicy(sizePolicy);
        label_formula->setMinimumSize(QSize(0, 60));
        label_formula->setMaximumSize(QSize(16777215, 80));
        label_formula->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(36, 31, 49);\n"
"border-radius: 8px;\n"
"font: 500 10pt \"Noto Sans\";"));
        label_formula->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_formula, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(tab_7);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        button_s = new QPushButton(groupBox);
        button_s->setObjectName(QString::fromUtf8("button_s"));
        sizePolicy.setHeightForWidth(button_s->sizePolicy().hasHeightForWidth());
        button_s->setSizePolicy(sizePolicy);
        button_s->setMaximumSize(QSize(16777215, 16777215));
        button_s->setSizeIncrement(QSize(0, 0));
        button_s->setBaseSize(QSize(0, 0));
        button_s->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;\n"
""));
        button_s->setAutoDefault(false);
        button_s->setFlat(false);

        gridLayout->addWidget(button_s, 3, 0, 1, 1);

        button_q = new QPushButton(groupBox);
        button_q->setObjectName(QString::fromUtf8("button_q"));
        sizePolicy.setHeightForWidth(button_q->sizePolicy().hasHeightForWidth());
        button_q->setSizePolicy(sizePolicy);
        button_q->setMaximumSize(QSize(16777215, 16777215));
        button_q->setSizeIncrement(QSize(0, 0));
        button_q->setBaseSize(QSize(0, 0));
        button_q->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;"));
        button_q->setAutoDefault(false);
        button_q->setFlat(false);

        gridLayout->addWidget(button_q, 2, 1, 1, 1);

        button_and = new QPushButton(groupBox);
        button_and->setObjectName(QString::fromUtf8("button_and"));
        sizePolicy.setHeightForWidth(button_and->sizePolicy().hasHeightForWidth());
        button_and->setSizePolicy(sizePolicy);
        button_and->setMaximumSize(QSize(16777215, 16777215));
        button_and->setSizeIncrement(QSize(0, 0));
        button_and->setBaseSize(QSize(0, 0));
        button_and->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;\n"
""));
        button_and->setAutoDefault(false);
        button_and->setFlat(false);

        gridLayout->addWidget(button_and, 0, 2, 1, 1);

        button_delet = new QPushButton(groupBox);
        button_delet->setObjectName(QString::fromUtf8("button_delet"));
        sizePolicy.setHeightForWidth(button_delet->sizePolicy().hasHeightForWidth());
        button_delet->setSizePolicy(sizePolicy);
        button_delet->setMaximumSize(QSize(16777215, 16777215));
        button_delet->setSizeIncrement(QSize(0, 0));
        button_delet->setBaseSize(QSize(0, 0));
        button_delet->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;\n"
""));
        button_delet->setAutoDefault(false);
        button_delet->setFlat(false);

        gridLayout->addWidget(button_delet, 1, 2, 1, 1);

        button_t = new QPushButton(groupBox);
        button_t->setObjectName(QString::fromUtf8("button_t"));
        sizePolicy.setHeightForWidth(button_t->sizePolicy().hasHeightForWidth());
        button_t->setSizePolicy(sizePolicy);
        button_t->setMaximumSize(QSize(16777215, 16777215));
        button_t->setSizeIncrement(QSize(0, 0));
        button_t->setBaseSize(QSize(0, 0));
        button_t->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;\n"
""));
        button_t->setAutoDefault(false);
        button_t->setFlat(false);

        gridLayout->addWidget(button_t, 3, 1, 1, 1);

        button_enter = new QPushButton(groupBox);
        button_enter->setObjectName(QString::fromUtf8("button_enter"));
        sizePolicy.setHeightForWidth(button_enter->sizePolicy().hasHeightForWidth());
        button_enter->setSizePolicy(sizePolicy);
        button_enter->setMaximumSize(QSize(16777215, 16777215));
        button_enter->setSizeIncrement(QSize(0, 0));
        button_enter->setBaseSize(QSize(0, 0));
        button_enter->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;"));
        button_enter->setAutoDefault(false);
        button_enter->setFlat(false);

        gridLayout->addWidget(button_enter, 1, 3, 3, 1);

        button_parenthesesR = new QPushButton(groupBox);
        button_parenthesesR->setObjectName(QString::fromUtf8("button_parenthesesR"));
        button_parenthesesR->setEnabled(true);
        sizePolicy.setHeightForWidth(button_parenthesesR->sizePolicy().hasHeightForWidth());
        button_parenthesesR->setSizePolicy(sizePolicy);
        button_parenthesesR->setMinimumSize(QSize(0, 0));
        button_parenthesesR->setMaximumSize(QSize(16777215, 16777215));
        button_parenthesesR->setSizeIncrement(QSize(0, 0));
        button_parenthesesR->setBaseSize(QSize(0, 0));
        button_parenthesesR->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;\n"
""));
        button_parenthesesR->setInputMethodHints(Qt::ImhNone);
        button_parenthesesR->setAutoDefault(false);
        button_parenthesesR->setFlat(false);

        gridLayout->addWidget(button_parenthesesR, 0, 1, 1, 1);

        button_p = new QPushButton(groupBox);
        button_p->setObjectName(QString::fromUtf8("button_p"));
        sizePolicy.setHeightForWidth(button_p->sizePolicy().hasHeightForWidth());
        button_p->setSizePolicy(sizePolicy);
        button_p->setMaximumSize(QSize(16777215, 16777215));
        button_p->setSizeIncrement(QSize(0, 0));
        button_p->setBaseSize(QSize(0, 0));
        button_p->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;\n"
""));
        button_p->setAutoDefault(false);
        button_p->setFlat(false);

        gridLayout->addWidget(button_p, 2, 0, 1, 1);

        button_parenthesesL = new QPushButton(groupBox);
        button_parenthesesL->setObjectName(QString::fromUtf8("button_parenthesesL"));
        button_parenthesesL->setEnabled(true);
        sizePolicy.setHeightForWidth(button_parenthesesL->sizePolicy().hasHeightForWidth());
        button_parenthesesL->setSizePolicy(sizePolicy);
        button_parenthesesL->setMinimumSize(QSize(0, 0));
        button_parenthesesL->setMaximumSize(QSize(16777215, 16777215));
        button_parenthesesL->setSizeIncrement(QSize(0, 0));
        button_parenthesesL->setBaseSize(QSize(0, 0));
        button_parenthesesL->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;\n"
"\n"
""));
        button_parenthesesL->setInputMethodHints(Qt::ImhNone);
        button_parenthesesL->setAutoDefault(false);
        button_parenthesesL->setFlat(false);

        gridLayout->addWidget(button_parenthesesL, 0, 0, 1, 1);

        button_r = new QPushButton(groupBox);
        button_r->setObjectName(QString::fromUtf8("button_r"));
        sizePolicy.setHeightForWidth(button_r->sizePolicy().hasHeightForWidth());
        button_r->setSizePolicy(sizePolicy);
        button_r->setMaximumSize(QSize(16777215, 16777215));
        button_r->setSizeIncrement(QSize(0, 0));
        button_r->setBaseSize(QSize(0, 0));
        button_r->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;"));
        button_r->setAutoDefault(false);
        button_r->setFlat(false);

        gridLayout->addWidget(button_r, 2, 2, 1, 1);

        button_or = new QPushButton(groupBox);
        button_or->setObjectName(QString::fromUtf8("button_or"));
        sizePolicy.setHeightForWidth(button_or->sizePolicy().hasHeightForWidth());
        button_or->setSizePolicy(sizePolicy);
        button_or->setMaximumSize(QSize(16777215, 16777215));
        button_or->setSizeIncrement(QSize(0, 0));
        button_or->setBaseSize(QSize(0, 0));
        button_or->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;\n"
""));
        button_or->setAutoDefault(false);
        button_or->setFlat(false);

        gridLayout->addWidget(button_or, 0, 3, 1, 1);

        button_deny = new QPushButton(groupBox);
        button_deny->setObjectName(QString::fromUtf8("button_deny"));
        sizePolicy.setHeightForWidth(button_deny->sizePolicy().hasHeightForWidth());
        button_deny->setSizePolicy(sizePolicy);
        button_deny->setMaximumSize(QSize(16777215, 16777215));
        button_deny->setSizeIncrement(QSize(0, 0));
        button_deny->setBaseSize(QSize(0, 0));
        button_deny->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;\n"
""));
        button_deny->setAutoDefault(false);
        button_deny->setFlat(false);

        gridLayout->addWidget(button_deny, 1, 1, 1, 1);

        button_u = new QPushButton(groupBox);
        button_u->setObjectName(QString::fromUtf8("button_u"));
        sizePolicy.setHeightForWidth(button_u->sizePolicy().hasHeightForWidth());
        button_u->setSizePolicy(sizePolicy);
        button_u->setMaximumSize(QSize(16777215, 16777215));
        button_u->setSizeIncrement(QSize(0, 0));
        button_u->setBaseSize(QSize(0, 0));
        button_u->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;"));
        button_u->setAutoDefault(false);
        button_u->setFlat(false);

        gridLayout->addWidget(button_u, 3, 2, 1, 1);

        button_implication = new QPushButton(groupBox);
        button_implication->setObjectName(QString::fromUtf8("button_implication"));
        sizePolicy.setHeightForWidth(button_implication->sizePolicy().hasHeightForWidth());
        button_implication->setSizePolicy(sizePolicy);
        button_implication->setMaximumSize(QSize(16777215, 16777215));
        button_implication->setSizeIncrement(QSize(0, 0));
        button_implication->setBaseSize(QSize(0, 0));
        button_implication->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 67, 94);\n"
"background-color: rgb(36, 31, 49);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 11px;\n"
""));
        button_implication->setAutoDefault(false);
        button_implication->setFlat(false);

        gridLayout->addWidget(button_implication, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        sizePolicy.setHeightForWidth(tab_8->sizePolicy().hasHeightForWidth());
        tab_8->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(tab_8);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_3 = new QGroupBox(tab_8);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setEnabled(true);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setStyleSheet(QString::fromUtf8(""));
        groupBox_3->setFlat(false);
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_result = new QLabel(groupBox_3);
        label_result->setObjectName(QString::fromUtf8("label_result"));
        label_result->setEnabled(true);
        sizePolicy.setHeightForWidth(label_result->sizePolicy().hasHeightForWidth());
        label_result->setSizePolicy(sizePolicy);
        label_result->setAutoFillBackground(false);
        label_result->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_result->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_6->addWidget(label_result, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_8, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 311, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        button_s->setDefault(false);
        button_q->setDefault(false);
        button_and->setDefault(false);
        button_delet->setDefault(false);
        button_t->setDefault(false);
        button_enter->setDefault(false);
        button_parenthesesR->setDefault(false);
        button_p->setDefault(false);
        button_parenthesesL->setDefault(false);
        button_r->setDefault(false);
        button_or->setDefault(false);
        button_deny->setDefault(false);
        button_u->setDefault(false);
        button_implication->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "L\303\263gica", nullptr));
        groupBox_2->setTitle(QString());
        label_formula->setText(QString());
        groupBox->setTitle(QString());
        button_s->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        button_q->setText(QCoreApplication::translate("MainWindow", "Q", nullptr));
        button_and->setText(QCoreApplication::translate("MainWindow", "\342\210\247", nullptr));
        button_delet->setText(QCoreApplication::translate("MainWindow", "DEL", nullptr));
        button_t->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        button_enter->setText(QCoreApplication::translate("MainWindow", "\342\206\265 Enter", nullptr));
        button_parenthesesR->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        button_p->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        button_parenthesesL->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        button_r->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        button_or->setText(QCoreApplication::translate("MainWindow", "\342\210\250", nullptr));
        button_deny->setText(QCoreApplication::translate("MainWindow", "\302\254", nullptr));
        button_u->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        button_implication->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Calc", nullptr));
#if QT_CONFIG(tooltip)
        tab_8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox_3->setTitle(QString());
        label_result->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
