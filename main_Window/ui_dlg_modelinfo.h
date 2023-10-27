/********************************************************************************
** Form generated from reading UI file 'dlg_modelinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_MODELINFO_H
#define UI_DLG_MODELINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlg_modelinfo
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QWidget *dlg_modelinfo)
    {
        if (dlg_modelinfo->objectName().isEmpty())
            dlg_modelinfo->setObjectName(QString::fromUtf8("dlg_modelinfo"));
        dlg_modelinfo->resize(400, 300);
        widget = new QWidget(dlg_modelinfo);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 240, 291, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(dlg_modelinfo);

        QMetaObject::connectSlotsByName(dlg_modelinfo);
    } // setupUi

    void retranslateUi(QWidget *dlg_modelinfo)
    {
        dlg_modelinfo->setWindowTitle(QApplication::translate("dlg_modelinfo", "dlg_modelinfo", nullptr));
        pushButton->setText(QApplication::translate("dlg_modelinfo", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("dlg_modelinfo", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_modelinfo: public Ui_dlg_modelinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_MODELINFO_H
