/********************************************************************************
** Form generated from reading UI file 'fitnessinctructor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FITNESSINCTRUCTOR_H
#define UI_FITNESSINCTRUCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FitnessInctructor
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *startPage;
    QWidget *tab;
    QLabel *startImg;
    QLabel *label;
    QPushButton *startButton;
    QWidget *tab_2;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QPushButton *nextButton;
    QWidget *tab_3;
    QTabWidget *mainScrean;
    QWidget *tab_4;
    QTabWidget *plan;
    QWidget *tab_6;
    QLabel *label_7;
    QPushButton *day2;
    QPushButton *day1;
    QPushButton *d3Complete;
    QPushButton *d4Complete;
    QPushButton *d6Complete;
    QPushButton *day5;
    QPushButton *d1Complete;
    QPushButton *d2Complete;
    QPushButton *day6;
    QPushButton *d5Complete;
    QPushButton *day3;
    QPushButton *day7;
    QPushButton *d7Complete;
    QPushButton *day4;
    QWidget *tab_7;
    QLabel *label_8;
    QPushButton *back1;
    QPushButton *d1Click;
    QWidget *tab_8;
    QPushButton *back2;
    QLabel *label_9;
    QPushButton *d2Click;
    QWidget *tab_9;
    QPushButton *back3;
    QLabel *label_10;
    QPushButton *d3Click;
    QWidget *tab_10;
    QPushButton *back4;
    QLabel *label_11;
    QPushButton *d4Click;
    QWidget *tab_11;
    QPushButton *back5;
    QLabel *label_12;
    QPushButton *d5Click;
    QWidget *tab_12;
    QLabel *label_13;
    QPushButton *back6;
    QPushButton *d6Click;
    QWidget *tab_13;
    QLabel *label_14;
    QPushButton *back7;
    QPushButton *d7Click;
    QWidget *tab_5;
    QToolBox *list;
    QWidget *page;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *nameLable;
    QLabel *name;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *heightLable;
    QLabel *height;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *weightLable;
    QLabel *weight;
    QWidget *page_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QPushButton *reset;

    void setupUi(QMainWindow *FitnessInctructor)
    {
        if (FitnessInctructor->objectName().isEmpty())
            FitnessInctructor->setObjectName(QString::fromUtf8("FitnessInctructor"));
        FitnessInctructor->resize(500, 644);
        FitnessInctructor->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #E6E6FA, stop:1 #F0F8FF);"));
        centralwidget = new QWidget(FitnessInctructor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        startPage = new QTabWidget(centralwidget);
        startPage->setObjectName(QString::fromUtf8("startPage"));
        startPage->setEnabled(true);
        startPage->setTabPosition(QTabWidget::North);
        startPage->setTabShape(QTabWidget::Rounded);
        startPage->setIconSize(QSize(16, 16));
        startPage->setElideMode(Qt::ElideLeft);
        startPage->setDocumentMode(false);
        startPage->setTabsClosable(false);
        startPage->setMovable(false);
        startPage->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        startImg = new QLabel(tab);
        startImg->setObjectName(QString::fromUtf8("startImg"));
        startImg->setGeometry(QRect(140, 180, 221, 221));
        startImg->setStyleSheet(QString::fromUtf8("border: 0.5px solid white; border-radius: 10px"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 90, 461, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 250, 250, 0.3), stop:1 rgba(248, 248, 255, 0.3)); border-radius: 20px solid white}"));
        startButton = new QPushButton(tab);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(120, 440, 261, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Cambria Math"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        startButton->setFont(font);
        startButton->setMouseTracking(false);
        startButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F0FFF0, stop:1 #F0FFFF); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #F0FFFF)}\n"
""));
        startPage->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 461, 61));
        label_2->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 250, 250, 0.3), stop:1 rgba(248, 248, 255, 0.3)); border-radius: 20px solid white}"));
        verticalLayoutWidget = new QWidget(tab_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 180, 401, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_4->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_4);

        nextButton = new QPushButton(tab_2);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(120, 440, 261, 71));
        nextButton->setFont(font);
        nextButton->setMouseTracking(false);
        nextButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F0FFF0, stop:1 #F0FFFF); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #F0FFFF)}\n"
""));
        startPage->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        mainScrean = new QTabWidget(tab_3);
        mainScrean->setObjectName(QString::fromUtf8("mainScrean"));
        mainScrean->setGeometry(QRect(0, -40, 511, 641));
        mainScrean->setTabPosition(QTabWidget::South);
        mainScrean->setTabShape(QTabWidget::Triangular);
        mainScrean->setIconSize(QSize(16, 16));
        mainScrean->setElideMode(Qt::ElideNone);
        mainScrean->setTabBarAutoHide(false);
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        plan = new QTabWidget(tab_4);
        plan->setObjectName(QString::fromUtf8("plan"));
        plan->setGeometry(QRect(0, 40, 511, 581));
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        label_7 = new QLabel(tab_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 0, 461, 41));
        label_7->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 250, 250, 0.3), stop:1 rgba(248, 248, 255, 0.3)); border-radius: 20px solid white}"));
        day2 = new QPushButton(tab_6);
        day2->setObjectName(QString::fromUtf8("day2"));
        day2->setGeometry(QRect(10, 130, 140, 60));
        day2->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #E0FFFF, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        day1 = new QPushButton(tab_6);
        day1->setObjectName(QString::fromUtf8("day1"));
        day1->setGeometry(QRect(10, 62, 140, 60));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(day1->sizePolicy().hasHeightForWidth());
        day1->setSizePolicy(sizePolicy);
        day1->setMinimumSize(QSize(0, 0));
        day1->setMaximumSize(QSize(16777215, 16777215));
        day1->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #E0FFFF, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        d3Complete = new QPushButton(tab_6);
        d3Complete->setObjectName(QString::fromUtf8("d3Complete"));
        d3Complete->setGeometry(QRect(160, 196, 300, 60));
        d3Complete->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}\n"
""));
        d4Complete = new QPushButton(tab_6);
        d4Complete->setObjectName(QString::fromUtf8("d4Complete"));
        d4Complete->setGeometry(QRect(160, 262, 300, 60));
        d4Complete->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}\n"
""));
        d6Complete = new QPushButton(tab_6);
        d6Complete->setObjectName(QString::fromUtf8("d6Complete"));
        d6Complete->setGeometry(QRect(160, 394, 300, 60));
        d6Complete->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}\n"
""));
        day5 = new QPushButton(tab_6);
        day5->setObjectName(QString::fromUtf8("day5"));
        day5->setGeometry(QRect(10, 328, 140, 60));
        day5->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #E0FFFF, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        d1Complete = new QPushButton(tab_6);
        d1Complete->setObjectName(QString::fromUtf8("d1Complete"));
        d1Complete->setGeometry(QRect(160, 62, 300, 60));
        d1Complete->setMaximumSize(QSize(16777215, 16777215));
        d1Complete->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}\n"
""));
        d2Complete = new QPushButton(tab_6);
        d2Complete->setObjectName(QString::fromUtf8("d2Complete"));
        d2Complete->setGeometry(QRect(160, 130, 300, 60));
        d2Complete->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}\n"
""));
        day6 = new QPushButton(tab_6);
        day6->setObjectName(QString::fromUtf8("day6"));
        day6->setGeometry(QRect(10, 394, 140, 60));
        day6->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #E0FFFF, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        d5Complete = new QPushButton(tab_6);
        d5Complete->setObjectName(QString::fromUtf8("d5Complete"));
        d5Complete->setGeometry(QRect(160, 328, 300, 60));
        d5Complete->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}\n"
""));
        day3 = new QPushButton(tab_6);
        day3->setObjectName(QString::fromUtf8("day3"));
        day3->setGeometry(QRect(10, 196, 140, 60));
        day3->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #E0FFFF, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        day7 = new QPushButton(tab_6);
        day7->setObjectName(QString::fromUtf8("day7"));
        day7->setGeometry(QRect(10, 460, 140, 60));
        day7->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #E0FFFF, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        d7Complete = new QPushButton(tab_6);
        d7Complete->setObjectName(QString::fromUtf8("d7Complete"));
        d7Complete->setGeometry(QRect(160, 460, 300, 60));
        d7Complete->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}\n"
""));
        day4 = new QPushButton(tab_6);
        day4->setObjectName(QString::fromUtf8("day4"));
        day4->setGeometry(QRect(10, 262, 140, 60));
        day4->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #E0FFFF, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        plan->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        label_8 = new QLabel(tab_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 0, 380, 50));
        label_8->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 250, 250, 0.3), stop:1 rgba(248, 248, 255, 0.3)); border-radius: 20px solid white}"));
        back1 = new QPushButton(tab_7);
        back1->setObjectName(QString::fromUtf8("back1"));
        back1->setGeometry(QRect(10, 0, 75, 50));
        back1->setMaximumSize(QSize(16777215, 16777215));
        back1->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA)}\n"
""));
        d1Click = new QPushButton(tab_7);
        d1Click->setObjectName(QString::fromUtf8("d1Click"));
        d1Click->setGeometry(QRect(90, 490, 300, 60));
        d1Click->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cambria Math"));
        font1.setPointSize(11);
        d1Click->setFont(font1);
        d1Click->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        plan->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        back2 = new QPushButton(tab_8);
        back2->setObjectName(QString::fromUtf8("back2"));
        back2->setGeometry(QRect(10, 0, 75, 50));
        back2->setMaximumSize(QSize(16777215, 16777215));
        back2->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA)}\n"
""));
        label_9 = new QLabel(tab_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(90, 0, 380, 50));
        label_9->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 250, 250, 0.3), stop:1 rgba(248, 248, 255, 0.3)); border-radius: 20px solid white}"));
        d2Click = new QPushButton(tab_8);
        d2Click->setObjectName(QString::fromUtf8("d2Click"));
        d2Click->setGeometry(QRect(90, 490, 300, 60));
        d2Click->setMaximumSize(QSize(16777215, 16777215));
        d2Click->setFont(font1);
        d2Click->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        plan->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        back3 = new QPushButton(tab_9);
        back3->setObjectName(QString::fromUtf8("back3"));
        back3->setGeometry(QRect(10, 0, 75, 50));
        back3->setMaximumSize(QSize(16777215, 16777215));
        back3->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA)}\n"
""));
        label_10 = new QLabel(tab_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(90, 0, 380, 50));
        label_10->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 250, 250, 0.3), stop:1 rgba(248, 248, 255, 0.3)); border-radius: 20px solid white}"));
        d3Click = new QPushButton(tab_9);
        d3Click->setObjectName(QString::fromUtf8("d3Click"));
        d3Click->setGeometry(QRect(90, 490, 300, 60));
        d3Click->setMaximumSize(QSize(16777215, 16777215));
        d3Click->setFont(font1);
        d3Click->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        plan->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        back4 = new QPushButton(tab_10);
        back4->setObjectName(QString::fromUtf8("back4"));
        back4->setGeometry(QRect(10, 0, 75, 50));
        back4->setMaximumSize(QSize(16777215, 16777215));
        back4->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA)}\n"
""));
        label_11 = new QLabel(tab_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(90, 0, 380, 50));
        label_11->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 250, 250, 0.3), stop:1 rgba(248, 248, 255, 0.3)); border-radius: 20px solid white}"));
        d4Click = new QPushButton(tab_10);
        d4Click->setObjectName(QString::fromUtf8("d4Click"));
        d4Click->setGeometry(QRect(90, 490, 300, 60));
        d4Click->setMaximumSize(QSize(16777215, 16777215));
        d4Click->setFont(font1);
        d4Click->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        plan->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        back5 = new QPushButton(tab_11);
        back5->setObjectName(QString::fromUtf8("back5"));
        back5->setGeometry(QRect(10, 0, 75, 50));
        back5->setMaximumSize(QSize(16777215, 16777215));
        back5->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA)}\n"
""));
        label_12 = new QLabel(tab_11);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(90, 0, 380, 50));
        label_12->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 250, 250, 0.3), stop:1 rgba(248, 248, 255, 0.3)); border-radius: 20px solid white}"));
        d5Click = new QPushButton(tab_11);
        d5Click->setObjectName(QString::fromUtf8("d5Click"));
        d5Click->setGeometry(QRect(90, 490, 300, 60));
        d5Click->setMaximumSize(QSize(16777215, 16777215));
        d5Click->setFont(font1);
        d5Click->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}\n"
""));
        plan->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        label_13 = new QLabel(tab_12);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(90, 0, 380, 50));
        label_13->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 250, 250, 0.3), stop:1 rgba(248, 248, 255, 0.3)); border-radius: 20px solid white}"));
        back6 = new QPushButton(tab_12);
        back6->setObjectName(QString::fromUtf8("back6"));
        back6->setGeometry(QRect(10, 0, 75, 50));
        back6->setMaximumSize(QSize(16777215, 16777215));
        back6->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA)}\n"
""));
        d6Click = new QPushButton(tab_12);
        d6Click->setObjectName(QString::fromUtf8("d6Click"));
        d6Click->setGeometry(QRect(90, 490, 300, 60));
        d6Click->setMaximumSize(QSize(16777215, 16777215));
        d6Click->setFont(font1);
        d6Click->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        plan->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QString::fromUtf8("tab_13"));
        label_14 = new QLabel(tab_13);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(90, 0, 380, 50));
        label_14->setStyleSheet(QString::fromUtf8("QLabel { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 250, 250, 0.3), stop:1 rgba(248, 248, 255, 0.3)); border-radius: 20px solid white}"));
        back7 = new QPushButton(tab_13);
        back7->setObjectName(QString::fromUtf8("back7"));
        back7->setGeometry(QRect(10, 0, 75, 50));
        back7->setMaximumSize(QSize(16777215, 16777215));
        back7->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA)}\n"
""));
        d7Click = new QPushButton(tab_13);
        d7Click->setObjectName(QString::fromUtf8("d7Click"));
        d7Click->setGeometry(QRect(90, 490, 300, 60));
        d7Click->setMaximumSize(QSize(16777215, 16777215));
        d7Click->setFont(font1);
        d7Click->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));
        plan->addTab(tab_13, QString());
        mainScrean->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        list = new QToolBox(tab_5);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(20, 90, 441, 401));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 441, 341));
        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 441, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nameLable = new QLabel(horizontalLayoutWidget);
        nameLable->setObjectName(QString::fromUtf8("nameLable"));

        horizontalLayout->addWidget(nameLable);

        name = new QLabel(horizontalLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout->addWidget(name);

        horizontalLayoutWidget_2 = new QWidget(page);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 60, 441, 61));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        heightLable = new QLabel(horizontalLayoutWidget_2);
        heightLable->setObjectName(QString::fromUtf8("heightLable"));

        horizontalLayout_10->addWidget(heightLable);

        height = new QLabel(horizontalLayoutWidget_2);
        height->setObjectName(QString::fromUtf8("height"));

        horizontalLayout_10->addWidget(height);

        horizontalLayoutWidget_3 = new QWidget(page);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 130, 441, 51));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        weightLable = new QLabel(horizontalLayoutWidget_3);
        weightLable->setObjectName(QString::fromUtf8("weightLable"));

        horizontalLayout_11->addWidget(weightLable);

        weight = new QLabel(horizontalLayoutWidget_3);
        weight->setObjectName(QString::fromUtf8("weight"));

        horizontalLayout_11->addWidget(weight);

        list->addItem(page, QString::fromUtf8("\320\233\320\270\321\207\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 441, 341));
        verticalLayoutWidget_2 = new QWidget(page_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 30, 441, 171));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        progressBar = new QProgressBar(verticalLayoutWidget_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {border: 2px solid white; border-radius: 5px;background-color:#FFFFFF;}\n"
"QProgressBar::chunk {background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #F0FFF0, stop:1 #7FFFD4);}\n"
""));
        progressBar->setValue(0);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_6->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        reset = new QPushButton(verticalLayoutWidget_2);
        reset->setObjectName(QString::fromUtf8("reset"));
        sizePolicy.setHeightForWidth(reset->sizePolicy().hasHeightForWidth());
        reset->setSizePolicy(sizePolicy);
        reset->setMinimumSize(QSize(0, 0));
        reset->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Broadway"));
        font2.setPointSize(10);
        font2.setKerning(true);
        reset->setFont(font2);
        reset->setStyleSheet(QString::fromUtf8("QPushButton {background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #E0FFFF, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px}\n"
"QPushButton:hover { background-color: #F8F8FF }\n"
"QPushButton:pressed { background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F8F8FF, stop:1 #E6E6FA)}"));

        verticalLayout_6->addWidget(reset);

        list->addItem(page_2, QString::fromUtf8("\320\237\321\200\320\276\320\263\321\200\320\265\321\201\321\201"));
        mainScrean->addTab(tab_5, QString());
        startPage->addTab(tab_3, QString());

        verticalLayout_3->addWidget(startPage);

        FitnessInctructor->setCentralWidget(centralwidget);

        retranslateUi(FitnessInctructor);

        startPage->setCurrentIndex(2);
        mainScrean->setCurrentIndex(0);
        plan->setCurrentIndex(0);
        list->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FitnessInctructor);
    } // setupUi

    void retranslateUi(QMainWindow *FitnessInctructor)
    {
        FitnessInctructor->setWindowTitle(QCoreApplication::translate("FitnessInctructor", "FitnessInctructor", nullptr));
        startImg->setText(QString());
        label->setText(QCoreApplication::translate("FitnessInctructor", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262 &quot;\320\244\320\270\321\202\320\275\320\265\321\201\321\201 \320\230\320\275\321\201\321\202\321\200\321\203\320\272\321\202\320\276\321\200&quot;!</span></p><p align=\"center\"><span style=\" font-size:10pt;\">\320\234\321\213 \320\277\320\276\320\274\320\276\320\266\320\265\320\274 \320\262\320\260\320\274 \320\264\320\276\320\261\320\270\321\202\321\214\321\201\321\217 \320\266\320\265\320\273\320\260\320\265\320\274\321\213\321\205 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\276\320\262! ^_^</span></p></body></html>", nullptr));
        startButton->setText(QCoreApplication::translate("FitnessInctructor", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        startPage->setTabText(startPage->indexOf(tab), QCoreApplication::translate("FitnessInctructor", "\320\235\320\260\321\207\320\260\320\273\320\276", nullptr));
        label_2->setText(QCoreApplication::translate("FitnessInctructor", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\320\237\320\276\320\266\320\260\320\273\321\203\320\271\321\201\321\202\320\260, \320\276\321\202\320\262\320\265\321\202\321\214\321\202\320\265 \320\275\320\260 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\276 \320\262\320\276\320\277\321\200\320\276\321\201\320\276\320\262, \321\207\321\202\320\276\320\261\321\213</span></p><p align=\"center\"><span style=\" font-size:10pt;\">\320\274\321\213 \320\274\320\276\320\263\320\273\320\270 \320\277\320\276\320\264\320\276\320\261\321\200\320\260\321\202\321\214 \320\277\320\273\320\260\320\275 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("FitnessInctructor", "\320\222\320\260\321\210\320\265 \320\270\320\274\321\217:", nullptr));
        label_3->setText(QCoreApplication::translate("FitnessInctructor", "\320\222\320\260\321\210 \321\200\320\276\321\201\321\202:", nullptr));
        label_5->setText(QCoreApplication::translate("FitnessInctructor", "\320\222\320\260\321\210 \320\262\320\265\321\201:", nullptr));
        nextButton->setText(QCoreApplication::translate("FitnessInctructor", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        startPage->setTabText(startPage->indexOf(tab_2), QCoreApplication::translate("FitnessInctructor", "\320\222\320\276\320\277\321\200\320\276\321\201\321\213", nullptr));
        label_7->setText(QCoreApplication::translate("FitnessInctructor", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">7-\320\270 \320\264\320\275\320\265\320\262\320\275\321\213\320\271 \320\277\320\273\320\260\320\275 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272</span></p></body></html>", nullptr));
        day2->setText(QCoreApplication::translate("FitnessInctructor", "\320\224\320\265\320\275\321\214 2", nullptr));
        day1->setText(QCoreApplication::translate("FitnessInctructor", "\320\224\320\265\320\275\321\214 1", nullptr));
        d3Complete->setText(QCoreApplication::translate("FitnessInctructor", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276", nullptr));
        d4Complete->setText(QCoreApplication::translate("FitnessInctructor", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276", nullptr));
        d6Complete->setText(QCoreApplication::translate("FitnessInctructor", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276", nullptr));
        day5->setText(QCoreApplication::translate("FitnessInctructor", "\320\224\320\265\320\275\321\214 5", nullptr));
        d1Complete->setText(QCoreApplication::translate("FitnessInctructor", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276", nullptr));
        d2Complete->setText(QCoreApplication::translate("FitnessInctructor", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276", nullptr));
        day6->setText(QCoreApplication::translate("FitnessInctructor", "\320\224\320\265\320\275\321\214 6", nullptr));
        d5Complete->setText(QCoreApplication::translate("FitnessInctructor", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276", nullptr));
        day3->setText(QCoreApplication::translate("FitnessInctructor", "\320\224\320\265\320\275\321\214 3", nullptr));
        day7->setText(QCoreApplication::translate("FitnessInctructor", "\320\224\320\265\320\275\321\214 7", nullptr));
        d7Complete->setText(QCoreApplication::translate("FitnessInctructor", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276", nullptr));
        day4->setText(QCoreApplication::translate("FitnessInctructor", "\320\224\320\265\320\275\321\214 4", nullptr));
        plan->setTabText(plan->indexOf(tab_6), QCoreApplication::translate("FitnessInctructor", "\320\237\320\273\320\260\320\275", nullptr));
        label_8->setText(QCoreApplication::translate("FitnessInctructor", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\320\224\320\265\320\275\321\214 1</span></p></body></html>", nullptr));
        back1->setText(QCoreApplication::translate("FitnessInctructor", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        d1Click->setText(QCoreApplication::translate("FitnessInctructor", "\320\236\321\202\320\274\320\265\321\202\320\270\321\202\321\214 \320\272\320\260\320\272 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\276\320\265", nullptr));
        plan->setTabText(plan->indexOf(tab_7), QCoreApplication::translate("FitnessInctructor", "1", nullptr));
        back2->setText(QCoreApplication::translate("FitnessInctructor", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_9->setText(QCoreApplication::translate("FitnessInctructor", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\320\224\320\265\320\275\321\214 2</span></p></body></html>", nullptr));
        d2Click->setText(QCoreApplication::translate("FitnessInctructor", "\320\236\321\202\320\274\320\265\321\202\320\270\321\202\321\214 \320\272\320\260\320\272 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\276\320\265", nullptr));
        plan->setTabText(plan->indexOf(tab_8), QCoreApplication::translate("FitnessInctructor", "2", nullptr));
        back3->setText(QCoreApplication::translate("FitnessInctructor", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_10->setText(QCoreApplication::translate("FitnessInctructor", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\320\224\320\265\320\275\321\214 3</span></p></body></html>", nullptr));
        d3Click->setText(QCoreApplication::translate("FitnessInctructor", "\320\236\321\202\320\274\320\265\321\202\320\270\321\202\321\214 \320\272\320\260\320\272 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\276\320\265", nullptr));
        plan->setTabText(plan->indexOf(tab_9), QCoreApplication::translate("FitnessInctructor", "3", nullptr));
        back4->setText(QCoreApplication::translate("FitnessInctructor", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_11->setText(QCoreApplication::translate("FitnessInctructor", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\320\224\320\265\320\275\321\214 4</span></p></body></html>", nullptr));
        d4Click->setText(QCoreApplication::translate("FitnessInctructor", "\320\236\321\202\320\274\320\265\321\202\320\270\321\202\321\214 \320\272\320\260\320\272 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\276\320\265", nullptr));
        plan->setTabText(plan->indexOf(tab_10), QCoreApplication::translate("FitnessInctructor", "4", nullptr));
        back5->setText(QCoreApplication::translate("FitnessInctructor", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_12->setText(QCoreApplication::translate("FitnessInctructor", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\320\224\320\265\320\275\321\214 5</span></p></body></html>", nullptr));
        d5Click->setText(QCoreApplication::translate("FitnessInctructor", "\320\236\321\202\320\274\320\265\321\202\320\270\321\202\321\214 \320\272\320\260\320\272 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\276\320\265", nullptr));
        plan->setTabText(plan->indexOf(tab_11), QCoreApplication::translate("FitnessInctructor", "5", nullptr));
        label_13->setText(QCoreApplication::translate("FitnessInctructor", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\320\224\320\265\320\275\321\214 6</span></p></body></html>", nullptr));
        back6->setText(QCoreApplication::translate("FitnessInctructor", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        d6Click->setText(QCoreApplication::translate("FitnessInctructor", "\320\236\321\202\320\274\320\265\321\202\320\270\321\202\321\214 \320\272\320\260\320\272 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\276\320\265", nullptr));
        plan->setTabText(plan->indexOf(tab_12), QCoreApplication::translate("FitnessInctructor", "6", nullptr));
        label_14->setText(QCoreApplication::translate("FitnessInctructor", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\320\224\320\265\320\275\321\214 7</span></p></body></html>", nullptr));
        back7->setText(QCoreApplication::translate("FitnessInctructor", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        d7Click->setText(QCoreApplication::translate("FitnessInctructor", "\320\236\321\202\320\274\320\265\321\202\320\270\321\202\321\214 \320\272\320\260\320\272 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\276\320\265", nullptr));
        plan->setTabText(plan->indexOf(tab_13), QCoreApplication::translate("FitnessInctructor", "7", nullptr));
        mainScrean->setTabText(mainScrean->indexOf(tab_4), QCoreApplication::translate("FitnessInctructor", "\320\237\320\273\320\260\320\275", nullptr));
        nameLable->setText(QCoreApplication::translate("FitnessInctructor", "\320\230\320\274\321\217: ", nullptr));
        name->setText(QString());
        heightLable->setText(QCoreApplication::translate("FitnessInctructor", "\320\240\320\276\321\201\321\202: ", nullptr));
        height->setText(QString());
        weightLable->setText(QCoreApplication::translate("FitnessInctructor", "\320\222\320\265\321\201: ", nullptr));
        weight->setText(QString());
        list->setItemText(list->indexOf(page), QCoreApplication::translate("FitnessInctructor", "\320\233\320\270\321\207\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("FitnessInctructor", "\320\222\320\260\321\210 \320\277\321\200\320\276\320\263\321\200\320\265\321\201\321\201 \321\201\320\276\321\201\321\202\320\260\320\262\320\273\321\217\320\265\321\202:", nullptr));
        reset->setText(QCoreApplication::translate("FitnessInctructor", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        list->setItemText(list->indexOf(page_2), QCoreApplication::translate("FitnessInctructor", "\320\237\321\200\320\276\320\263\321\200\320\265\321\201\321\201", nullptr));
        mainScrean->setTabText(mainScrean->indexOf(tab_5), QCoreApplication::translate("FitnessInctructor", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        startPage->setTabText(startPage->indexOf(tab_3), QCoreApplication::translate("FitnessInctructor", "\320\237\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FitnessInctructor: public Ui_FitnessInctructor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FITNESSINCTRUCTOR_H
