/********************************************************************************
** Form generated from reading UI file 'dlg_list.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_LIST_H
#define UI_DLG_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dlg_list
{
public:
    QListWidget *listWidget;
    QPushButton *file_btn;

    void setupUi(QDialog *dlg_list)
    {
        if (dlg_list->objectName().isEmpty())
            dlg_list->setObjectName("dlg_list");
        dlg_list->resize(440, 373);
        listWidget = new QListWidget(dlg_list);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 0, 441, 301));
        file_btn = new QPushButton(dlg_list);
        file_btn->setObjectName("file_btn");
        file_btn->setGeometry(QRect(190, 320, 32, 32));
        file_btn->setMinimumSize(QSize(32, 32));
        file_btn->setMaximumSize(QSize(32, 32));
        file_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/img/folder.svg);"));

        retranslateUi(dlg_list);

        QMetaObject::connectSlotsByName(dlg_list);
    } // setupUi

    void retranslateUi(QDialog *dlg_list)
    {
        dlg_list->setWindowTitle(QCoreApplication::translate("dlg_list", "Dialog", nullptr));
        file_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dlg_list: public Ui_dlg_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_LIST_H
