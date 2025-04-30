/********************************************************************************
** Form generated from reading UI file 'cell_main.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_MAIN_H
#define UI_CELL_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicPlay
{
public:
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *total_lab;
    QLabel *cur_lab;
    QSlider *progress;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *file_btn;
    QPushButton *list_btn;
    QPushButton *refund_btn;
    QPushButton *start_btn;
    QPushButton *up_btn;
    QPushButton *volume_btn;
    QSlider *volume;

    void setupUi(QWidget *MusicPlay)
    {
        if (MusicPlay->objectName().isEmpty())
            MusicPlay->setObjectName("MusicPlay");
        MusicPlay->resize(396, 479);
        MusicPlay->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/play.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MusicPlay->setWindowIcon(icon);
        MusicPlay->setStyleSheet(QString::fromUtf8("QPushButton:hover\n"
"{\n"
"	background-color: rgb(198, 237, 255);\n"
"	\n"
"}"));
        gridLayout_2 = new QGridLayout(MusicPlay);
        gridLayout_2->setObjectName("gridLayout_2");
        listWidget = new QListWidget(MusicPlay);
        listWidget->setObjectName("listWidget");

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 2);

        widget_2 = new QWidget(MusicPlay);
        widget_2->setObjectName("widget_2");
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        total_lab = new QLabel(widget_2);
        total_lab->setObjectName("total_lab");

        gridLayout->addWidget(total_lab, 0, 2, 1, 1);

        cur_lab = new QLabel(widget_2);
        cur_lab->setObjectName("cur_lab");

        gridLayout->addWidget(cur_lab, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 2, 2);

        progress = new QSlider(MusicPlay);
        progress->setObjectName("progress");
        progress->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(progress, 2, 1, 1, 1);

        widget = new QWidget(MusicPlay);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 64));
        widget->setMaximumSize(QSize(16777215, 64));
        widget->setSizeIncrement(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        file_btn = new QPushButton(widget);
        file_btn->setObjectName("file_btn");
        file_btn->setMinimumSize(QSize(32, 32));
        file_btn->setMaximumSize(QSize(32, 32));
        file_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/img/folder.svg);"));

        horizontalLayout->addWidget(file_btn);

        list_btn = new QPushButton(widget);
        list_btn->setObjectName("list_btn");
        list_btn->setMinimumSize(QSize(32, 32));
        list_btn->setMaximumSize(QSize(32, 32));
        list_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/img/options.svg);"));

        horizontalLayout->addWidget(list_btn);

        refund_btn = new QPushButton(widget);
        refund_btn->setObjectName("refund_btn");
        refund_btn->setMinimumSize(QSize(32, 32));
        refund_btn->setMaximumSize(QSize(32, 32));
        refund_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/img/backward.svg);"));

        horizontalLayout->addWidget(refund_btn);

        start_btn = new QPushButton(widget);
        start_btn->setObjectName("start_btn");
        start_btn->setMinimumSize(QSize(32, 32));
        start_btn->setMaximumSize(QSize(32, 32));
        start_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/img/start.svg);"));

        horizontalLayout->addWidget(start_btn);

        up_btn = new QPushButton(widget);
        up_btn->setObjectName("up_btn");
        up_btn->setMinimumSize(QSize(32, 32));
        up_btn->setMaximumSize(QSize(32, 32));
        up_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/img/forward.svg);"));

        horizontalLayout->addWidget(up_btn);

        volume_btn = new QPushButton(widget);
        volume_btn->setObjectName("volume_btn");
        volume_btn->setMinimumSize(QSize(32, 32));
        volume_btn->setMaximumSize(QSize(32, 32));
        volume_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/img/voice.svg);"));

        horizontalLayout->addWidget(volume_btn);

        volume = new QSlider(widget);
        volume->setObjectName("volume");
        volume->setMaximumSize(QSize(50, 16777215));
        volume->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout->addWidget(volume);


        gridLayout_2->addWidget(widget, 3, 0, 1, 2);


        retranslateUi(MusicPlay);

        QMetaObject::connectSlotsByName(MusicPlay);
    } // setupUi

    void retranslateUi(QWidget *MusicPlay)
    {
        MusicPlay->setWindowTitle(QCoreApplication::translate("MusicPlay", "MusicPlay", nullptr));
        total_lab->setText(QCoreApplication::translate("MusicPlay", "00:00", nullptr));
        cur_lab->setText(QCoreApplication::translate("MusicPlay", "00:00", nullptr));
        file_btn->setText(QString());
        list_btn->setText(QString());
        refund_btn->setText(QString());
        start_btn->setText(QString());
        up_btn->setText(QString());
        volume_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MusicPlay: public Ui_MusicPlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_MAIN_H
