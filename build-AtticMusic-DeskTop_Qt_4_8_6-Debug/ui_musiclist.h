/********************************************************************************
** Form generated from reading UI file 'musiclist.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICLIST_H
#define UI_MUSICLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_musicList
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *musicList)
    {
        if (musicList->objectName().isEmpty())
            musicList->setObjectName(QStringLiteral("musicList"));
        musicList->resize(298, 388);
        gridLayout = new QGridLayout(musicList);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(musicList);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(298, 0));
        tableWidget->setMaximumSize(QSize(298, 16777215));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        tableWidget->setPalette(palette);
        tableWidget->setAcceptDrops(true);
        tableWidget->setAutoFillBackground(true);
        tableWidget->setStyleSheet(QLatin1String("<span style=\"font-size:14px;\"> pal = palette();  \n"
" pal.setColor(QPalette::background, QColor(0x00,0xff,0x00,0x00));  \n"
" setPalette(pal);</span>  "));
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(false);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        retranslateUi(musicList);

        QMetaObject::connectSlotsByName(musicList);
    } // setupUi

    void retranslateUi(QWidget *musicList)
    {
        musicList->setWindowTitle(QApplication::translate("musicList", "\346\222\255\346\224\276\345\210\227\350\241\250", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("musicList", "\346\255\214\346\233\262", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("musicList", "\350\267\257\345\276\204", 0));
#ifndef QT_NO_TOOLTIP
        tableWidget->setToolTip(QApplication::translate("musicList", "\346\222\255\346\224\276\345\210\227\350\241\250", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class musicList: public Ui_musicList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICLIST_H
