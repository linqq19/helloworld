/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <xlab.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSetting;
    QAction *actionOpenFile;
    QAction *actionNewFile;
    QAction *actionCloseFile;
    QAction *actionSaveFile;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea_GraphSelect;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QPushButton *chart_ellipse;
    QPushButton *chart_roundrect;
    QPushButton *chart_diam;
    QPushButton *chart_rect;
    QPushButton *chart_trapezoid;
    QPushButton *chart_line;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *StylePanel;
    QGridLayout *gridLayout_4;
    QGroupBox *FillColorGroup;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *FillColorButton;
    QGroupBox *LineWidthGroup;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *LineWidthCBox;
    QGroupBox *LineColorGroup;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QPushButton *LineColorButton;
    QGroupBox *LineStartStyleGroup;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *LineStartStyleCBox;
    QSpacerItem *horizontalSpacer;
    QGroupBox *LineEndStyleGroup;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *LineEndStyleCBox;
    QScrollArea *scrollArea_Painter;
    QWidget *scrollAreaWidgetContents_main;
    QGridLayout *gridLayout_2;
    Xlab *flowChart_widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1270, 820);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/MainIco.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSetting = new QAction(MainWindow);
        actionSetting->setObjectName(QString::fromUtf8("actionSetting"));
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("Setting");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(":/img/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSetting->setIcon(icon1);
        actionOpenFile = new QAction(MainWindow);
        actionOpenFile->setObjectName(QString::fromUtf8("actionOpenFile"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/file_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenFile->setIcon(icon2);
        actionNewFile = new QAction(MainWindow);
        actionNewFile->setObjectName(QString::fromUtf8("actionNewFile"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/file_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewFile->setIcon(icon3);
        actionCloseFile = new QAction(MainWindow);
        actionCloseFile->setObjectName(QString::fromUtf8("actionCloseFile"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/file_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloseFile->setIcon(icon4);
        actionSaveFile = new QAction(MainWindow);
        actionSaveFile->setObjectName(QString::fromUtf8("actionSaveFile"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/file_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveFile->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scrollArea_GraphSelect = new QScrollArea(centralWidget);
        scrollArea_GraphSelect->setObjectName(QString::fromUtf8("scrollArea_GraphSelect"));
        scrollArea_GraphSelect->setMinimumSize(QSize(150, 0));
        scrollArea_GraphSelect->setMaximumSize(QSize(150, 16777215));
        scrollArea_GraphSelect->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 148, 721));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(100, 0));
        groupBox->setMaximumSize(QSize(200, 16777215));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        chart_ellipse = new QPushButton(groupBox);
        chart_ellipse->setObjectName(QString::fromUtf8("chart_ellipse"));
        chart_ellipse->setMinimumSize(QSize(34, 34));
        chart_ellipse->setMaximumSize(QSize(34, 34));
        chart_ellipse->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Round.png);"));

        gridLayout_3->addWidget(chart_ellipse, 0, 0, 1, 1);

        chart_roundrect = new QPushButton(groupBox);
        chart_roundrect->setObjectName(QString::fromUtf8("chart_roundrect"));
        chart_roundrect->setMinimumSize(QSize(34, 34));
        chart_roundrect->setMaximumSize(QSize(34, 34));
        chart_roundrect->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Rounded_Rectangle.png);"));

        gridLayout_3->addWidget(chart_roundrect, 2, 0, 1, 1);

        chart_diam = new QPushButton(groupBox);
        chart_diam->setObjectName(QString::fromUtf8("chart_diam"));
        chart_diam->setMinimumSize(QSize(34, 34));
        chart_diam->setMaximumSize(QSize(34, 34));
        chart_diam->setStyleSheet(QString::fromUtf8("background-image: url(:/img/diamond.png);"));

        gridLayout_3->addWidget(chart_diam, 0, 1, 1, 1);

        chart_rect = new QPushButton(groupBox);
        chart_rect->setObjectName(QString::fromUtf8("chart_rect"));
        chart_rect->setMinimumSize(QSize(34, 34));
        chart_rect->setMaximumSize(QSize(34, 34));
        chart_rect->setStyleSheet(QString::fromUtf8("background-image: url(:/img/rectangle.png);"));

        gridLayout_3->addWidget(chart_rect, 2, 1, 1, 1);

        chart_trapezoid = new QPushButton(groupBox);
        chart_trapezoid->setObjectName(QString::fromUtf8("chart_trapezoid"));
        chart_trapezoid->setMinimumSize(QSize(34, 34));
        chart_trapezoid->setMaximumSize(QSize(34, 34));
        chart_trapezoid->setStyleSheet(QString::fromUtf8("background-image: url(:/img/trapezoid.png);"));

        gridLayout_3->addWidget(chart_trapezoid, 3, 0, 1, 1);

        chart_line = new QPushButton(groupBox);
        chart_line->setObjectName(QString::fromUtf8("chart_line"));
        chart_line->setMinimumSize(QSize(34, 34));
        chart_line->setMaximumSize(QSize(34, 34));
        chart_line->setStyleSheet(QString::fromUtf8("background-image: url(:/img/line.png);"));

        gridLayout_3->addWidget(chart_line, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea_GraphSelect->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea_GraphSelect);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        StylePanel = new QWidget(widget_2);
        StylePanel->setObjectName(QString::fromUtf8("StylePanel"));
        gridLayout_4 = new QGridLayout(StylePanel);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        FillColorGroup = new QGroupBox(StylePanel);
        FillColorGroup->setObjectName(QString::fromUtf8("FillColorGroup"));
        FillColorGroup->setEnabled(false);
        horizontalLayout_3 = new QHBoxLayout(FillColorGroup);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(FillColorGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        FillColorButton = new QPushButton(FillColorGroup);
        FillColorButton->setObjectName(QString::fromUtf8("FillColorButton"));
        FillColorButton->setEnabled(false);
        FillColorButton->setMinimumSize(QSize(50, 0));
        FillColorButton->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(FillColorButton);


        gridLayout_4->addWidget(FillColorGroup, 0, 1, 1, 1);

        LineWidthGroup = new QGroupBox(StylePanel);
        LineWidthGroup->setObjectName(QString::fromUtf8("LineWidthGroup"));
        LineWidthGroup->setEnabled(false);
        horizontalLayout_2 = new QHBoxLayout(LineWidthGroup);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(LineWidthGroup);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        LineWidthCBox = new QComboBox(LineWidthGroup);
        LineWidthCBox->addItem(QString());
        LineWidthCBox->addItem(QString());
        LineWidthCBox->addItem(QString());
        LineWidthCBox->addItem(QString());
        LineWidthCBox->addItem(QString());
        LineWidthCBox->addItem(QString());
        LineWidthCBox->addItem(QString());
        LineWidthCBox->addItem(QString());
        LineWidthCBox->addItem(QString());
        LineWidthCBox->addItem(QString());
        LineWidthCBox->setObjectName(QString::fromUtf8("LineWidthCBox"));
        LineWidthCBox->setEnabled(false);
        LineWidthCBox->setMinimumSize(QSize(50, 0));
        LineWidthCBox->setMaximumSize(QSize(50, 16777215));
        LineWidthCBox->setEditable(false);

        horizontalLayout_2->addWidget(LineWidthCBox);


        gridLayout_4->addWidget(LineWidthGroup, 0, 3, 1, 1);

        LineColorGroup = new QGroupBox(StylePanel);
        LineColorGroup->setObjectName(QString::fromUtf8("LineColorGroup"));
        LineColorGroup->setEnabled(false);
        horizontalLayout_4 = new QHBoxLayout(LineColorGroup);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(LineColorGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        LineColorButton = new QPushButton(LineColorGroup);
        LineColorButton->setObjectName(QString::fromUtf8("LineColorButton"));
        LineColorButton->setEnabled(false);
        LineColorButton->setMinimumSize(QSize(50, 0));
        LineColorButton->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(LineColorButton);


        gridLayout_4->addWidget(LineColorGroup, 0, 2, 1, 1);

        LineStartStyleGroup = new QGroupBox(StylePanel);
        LineStartStyleGroup->setObjectName(QString::fromUtf8("LineStartStyleGroup"));
        LineStartStyleGroup->setEnabled(false);
        horizontalLayout_5 = new QHBoxLayout(LineStartStyleGroup);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(LineStartStyleGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        LineStartStyleCBox = new QComboBox(LineStartStyleGroup);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/arrow0.png"), QSize(), QIcon::Normal, QIcon::Off);
        LineStartStyleCBox->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/arrow1.png"), QSize(), QIcon::Normal, QIcon::Off);
        LineStartStyleCBox->addItem(icon7, QString());
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/arrow2.png"), QSize(), QIcon::Normal, QIcon::Off);
        LineStartStyleCBox->addItem(icon8, QString());
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/arrow3.png"), QSize(), QIcon::Normal, QIcon::Off);
        LineStartStyleCBox->addItem(icon9, QString());
        LineStartStyleCBox->setObjectName(QString::fromUtf8("LineStartStyleCBox"));
        LineStartStyleCBox->setEnabled(false);
        LineStartStyleCBox->setMinimumSize(QSize(50, 0));
        LineStartStyleCBox->setMaximumSize(QSize(50, 16777215));
        LineStartStyleCBox->setEditable(false);

        horizontalLayout_5->addWidget(LineStartStyleCBox);


        gridLayout_4->addWidget(LineStartStyleGroup, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 6, 1, 1);

        LineEndStyleGroup = new QGroupBox(StylePanel);
        LineEndStyleGroup->setObjectName(QString::fromUtf8("LineEndStyleGroup"));
        LineEndStyleGroup->setEnabled(false);
        horizontalLayout_6 = new QHBoxLayout(LineEndStyleGroup);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(LineEndStyleGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        LineEndStyleCBox = new QComboBox(LineEndStyleGroup);
        LineEndStyleCBox->addItem(icon6, QString());
        LineEndStyleCBox->addItem(icon7, QString());
        LineEndStyleCBox->addItem(icon8, QString());
        LineEndStyleCBox->addItem(icon9, QString());
        LineEndStyleCBox->setObjectName(QString::fromUtf8("LineEndStyleCBox"));
        LineEndStyleCBox->setEnabled(false);
        LineEndStyleCBox->setMinimumSize(QSize(50, 0));
        LineEndStyleCBox->setMaximumSize(QSize(50, 16777215));
        LineEndStyleCBox->setEditable(false);

        horizontalLayout_6->addWidget(LineEndStyleCBox);


        gridLayout_4->addWidget(LineEndStyleGroup, 0, 5, 1, 1);


        verticalLayout_2->addWidget(StylePanel);

        scrollArea_Painter = new QScrollArea(widget_2);
        scrollArea_Painter->setObjectName(QString::fromUtf8("scrollArea_Painter"));
        scrollArea_Painter->setWidgetResizable(true);
        scrollAreaWidgetContents_main = new QWidget();
        scrollAreaWidgetContents_main->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_main"));
        scrollAreaWidgetContents_main->setGeometry(QRect(0, 0, 2018, 1018));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_main);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        flowChart_widget = new Xlab(scrollAreaWidgetContents_main);
        flowChart_widget->setObjectName(QString::fromUtf8("flowChart_widget"));
        flowChart_widget->setMinimumSize(QSize(2000, 1000));

        gridLayout_2->addWidget(flowChart_widget, 1, 0, 1, 1);

        scrollArea_Painter->setWidget(scrollAreaWidgetContents_main);

        verticalLayout_2->addWidget(scrollArea_Painter);


        horizontalLayout->addWidget(widget_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1270, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionOpenFile);
        mainToolBar->addAction(actionSaveFile);
        mainToolBar->addAction(actionNewFile);
        mainToolBar->addAction(actionSetting);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "XLab - Untitle", nullptr));
        actionSetting->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        actionOpenFile->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpenFile->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpenFile->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionNewFile->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNewFile->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNewFile->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionCloseFile->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\226\207\344\273\266", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCloseFile->setToolTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionCloseFile->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionSaveFile->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveFile->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSaveFile->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\237\272\347\241\200\346\250\241\345\236\213", nullptr));
        chart_ellipse->setText(QString());
        chart_roundrect->setText(QString());
        chart_diam->setText(QString());
        chart_rect->setText(QString());
        chart_trapezoid->setText(QString());
        chart_line->setText(QString());
        FillColorGroup->setTitle(QString());
        label_2->setText(QApplication::translate("MainWindow", "\345\241\253\345\205\205\351\242\234\350\211\262\357\274\232", nullptr));
        FillColorButton->setText(QString());
        LineWidthGroup->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\347\272\277\345\256\275\357\274\232", nullptr));
        LineWidthCBox->setItemText(0, QApplication::translate("MainWindow", "1px", nullptr));
        LineWidthCBox->setItemText(1, QApplication::translate("MainWindow", "2px", nullptr));
        LineWidthCBox->setItemText(2, QApplication::translate("MainWindow", "3px", nullptr));
        LineWidthCBox->setItemText(3, QApplication::translate("MainWindow", "4px", nullptr));
        LineWidthCBox->setItemText(4, QApplication::translate("MainWindow", "5px", nullptr));
        LineWidthCBox->setItemText(5, QApplication::translate("MainWindow", "6px", nullptr));
        LineWidthCBox->setItemText(6, QApplication::translate("MainWindow", "7px", nullptr));
        LineWidthCBox->setItemText(7, QApplication::translate("MainWindow", "8px", nullptr));
        LineWidthCBox->setItemText(8, QApplication::translate("MainWindow", "9px", nullptr));
        LineWidthCBox->setItemText(9, QApplication::translate("MainWindow", "10px", nullptr));

        LineColorGroup->setTitle(QString());
        label_3->setText(QApplication::translate("MainWindow", "\347\272\277\346\235\241\351\242\234\350\211\262\357\274\232", nullptr));
        LineColorButton->setText(QString());
        LineStartStyleGroup->setTitle(QString());
        label_4->setText(QApplication::translate("MainWindow", "\350\265\267\347\202\271\346\240\267\345\274\217\357\274\232", nullptr));
        LineStartStyleCBox->setItemText(0, QString());
        LineStartStyleCBox->setItemText(1, QString());
        LineStartStyleCBox->setItemText(2, QString());
        LineStartStyleCBox->setItemText(3, QString());

        LineEndStyleGroup->setTitle(QString());
        label_5->setText(QApplication::translate("MainWindow", "\347\273\210\347\202\271\346\240\267\345\274\217\357\274\232", nullptr));
        LineEndStyleCBox->setItemText(0, QString());
        LineEndStyleCBox->setItemText(1, QString());
        LineEndStyleCBox->setItemText(2, QString());
        LineEndStyleCBox->setItemText(3, QString());

        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "\346\257\224\345\233\276\345\220\247 - Untitle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
