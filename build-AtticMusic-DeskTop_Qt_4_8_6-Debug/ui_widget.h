/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QLabel>
#include <QtGui/QSlider>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget
{
public:
    QAction *action_SingleLoopMode;
    QAction *action_SequentialMode;
    QAction *action_LoopMode;
    QAction *action_RandomMode;
    QAction *action_About;
    QAction *action_Quit;
    QAction *action_Config;
    QAction *action_AddFiles;
    QAction *action_AddFileFolder;
    QLabel *label_Totaltime;
    QToolButton *toolButton_open;
    QToolButton *toolButton_List;
    QToolButton *toolButton_stop;
    QLabel *label_palyname;
    QLabel *label_Title;
    QToolButton *toolButton_playpause;
    QTextEdit *textEdit;
    QToolButton *toolButton_lrcD;
    QToolButton *toolButton_next;
    QToolButton *toolButton_previous;
    QSlider *hSlider_Volume;
    QSlider *hSlider_SongProgress;
    QLabel *label_Curtime;
    QToolButton *toolButton_playMode;
    QLabel *label_lrc;
    QToolButton *toolButton_Sound;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_toolstyle;
    QToolButton *toolButton_mintray;
    QToolButton *toolButton_min;
    QToolButton *toolButton_close;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_main;
    QToolButton *toolButton_showfront;
    QToolButton *toolButton_p;
    QToolButton *toolButton_s;
    QTableWidget *tableWidget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QGraphicsView *graphicsView_2;

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(506, 364);
        widget->setAutoFillBackground(false);
        widget->setStyleSheet(QString::fromUtf8(""));
        action_SingleLoopMode = new QAction(widget);
        action_SingleLoopMode->setObjectName(QString::fromUtf8("action_SingleLoopMode"));
        action_SequentialMode = new QAction(widget);
        action_SequentialMode->setObjectName(QString::fromUtf8("action_SequentialMode"));
        action_LoopMode = new QAction(widget);
        action_LoopMode->setObjectName(QString::fromUtf8("action_LoopMode"));
        action_RandomMode = new QAction(widget);
        action_RandomMode->setObjectName(QString::fromUtf8("action_RandomMode"));
        action_About = new QAction(widget);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_Quit = new QAction(widget);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Config = new QAction(widget);
        action_Config->setObjectName(QString::fromUtf8("action_Config"));
        action_AddFiles = new QAction(widget);
        action_AddFiles->setObjectName(QString::fromUtf8("action_AddFiles"));
        action_AddFileFolder = new QAction(widget);
        action_AddFileFolder->setObjectName(QString::fromUtf8("action_AddFileFolder"));
        label_Totaltime = new QLabel(widget);
        label_Totaltime->setObjectName(QString::fromUtf8("label_Totaltime"));
        label_Totaltime->setGeometry(QRect(440, 280, 41, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_Totaltime->setFont(font);
        label_Totaltime->setStyleSheet(QString::fromUtf8("background:rgb(0,0,0,0,)"));
        toolButton_open = new QToolButton(widget);
        toolButton_open->setObjectName(QString::fromUtf8("toolButton_open"));
        toolButton_open->setGeometry(QRect(320, 300, 41, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_open->sizePolicy().hasHeightForWidth());
        toolButton_open->setSizePolicy(sizePolicy);
        toolButton_open->setMinimumSize(QSize(0, 0));
        toolButton_open->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_open->setAutoFillBackground(false);
        toolButton_open->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_open->setIconSize(QSize(41, 41));
        toolButton_open->setAutoRaise(true);
        toolButton_List = new QToolButton(widget);
        toolButton_List->setObjectName(QString::fromUtf8("toolButton_List"));
        toolButton_List->setGeometry(QRect(420, 330, 30, 25));
        toolButton_List->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_List->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_List->setIconSize(QSize(20, 20));
        toolButton_List->setCheckable(true);
        toolButton_List->setAutoRaise(true);
        toolButton_stop = new QToolButton(widget);
        toolButton_stop->setObjectName(QString::fromUtf8("toolButton_stop"));
        toolButton_stop->setGeometry(QRect(270, 300, 41, 41));
        toolButton_stop->setMinimumSize(QSize(34, 28));
        toolButton_stop->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_stop->setAutoFillBackground(false);
        toolButton_stop->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_stop->setIconSize(QSize(41, 41));
        toolButton_stop->setAutoRaise(true);
        label_palyname = new QLabel(widget);
        label_palyname->setObjectName(QString::fromUtf8("label_palyname"));
        label_palyname->setGeometry(QRect(20, 40, 471, 20));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 0, 65));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_palyname->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_palyname->setFont(font1);
        label_palyname->setStyleSheet(QString::fromUtf8("background:rgb(255,255,0,65,)"));
        label_palyname->setAlignment(Qt::AlignCenter);
        label_Title = new QLabel(widget);
        label_Title->setObjectName(QString::fromUtf8("label_Title"));
        label_Title->setGeometry(QRect(220, 0, 81, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_Title->setFont(font2);
        label_Title->setCursor(QCursor(Qt::PointingHandCursor));
        label_Title->setAutoFillBackground(false);
        label_Title->setStyleSheet(QString::fromUtf8("background:rgb(0,0,0,0,)"));
        label_Title->setAlignment(Qt::AlignCenter);
        toolButton_playpause = new QToolButton(widget);
        toolButton_playpause->setObjectName(QString::fromUtf8("toolButton_playpause"));
        toolButton_playpause->setGeometry(QRect(157, 300, 41, 41));
        toolButton_playpause->setMinimumSize(QSize(34, 28));
        toolButton_playpause->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_playpause->setAutoFillBackground(false);
        toolButton_playpause->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_playpause->setIconSize(QSize(46, 46));
        toolButton_playpause->setAutoRaise(true);
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(460, 330, 21, 21));
        textEdit->setAutoFillBackground(true);
        textEdit->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_lrcD = new QToolButton(widget);
        toolButton_lrcD->setObjectName(QString::fromUtf8("toolButton_lrcD"));
        toolButton_lrcD->setGeometry(QRect(30, 310, 21, 21));
        toolButton_lrcD->setFont(font1);
        toolButton_lrcD->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_lrcD->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,100,)"));
        toolButton_lrcD->setIconSize(QSize(20, 20));
        toolButton_lrcD->setCheckable(true);
        toolButton_lrcD->setAutoRaise(true);
        toolButton_next = new QToolButton(widget);
        toolButton_next->setObjectName(QString::fromUtf8("toolButton_next"));
        toolButton_next->setGeometry(QRect(210, 300, 41, 41));
        toolButton_next->setMinimumSize(QSize(34, 28));
        toolButton_next->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_next->setAutoFillBackground(false);
        toolButton_next->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_next->setIconSize(QSize(41, 41));
        toolButton_next->setAutoRaise(true);
        toolButton_previous = new QToolButton(widget);
        toolButton_previous->setObjectName(QString::fromUtf8("toolButton_previous"));
        toolButton_previous->setGeometry(QRect(100, 300, 41, 41));
        toolButton_previous->setMinimumSize(QSize(34, 28));
        toolButton_previous->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_previous->setAutoFillBackground(false);
        toolButton_previous->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_previous->setIconSize(QSize(41, 41));
        toolButton_previous->setAutoRaise(true);
        hSlider_Volume = new QSlider(widget);
        hSlider_Volume->setObjectName(QString::fromUtf8("hSlider_Volume"));
        hSlider_Volume->setGeometry(QRect(400, 310, 81, 16));
        hSlider_Volume->setCursor(QCursor(Qt::PointingHandCursor));
        hSlider_Volume->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {  \n"
"border: 1px solid #bbb;  \n"
"background: white;  \n"
"height: 10px;  \n"
"border-radius: 4px;  \n"
"}  \n"
"  \n"
"QSlider::sub-page:horizontal {  \n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,  \n"
"    stop: 0 #66e, stop: 1 #bbf);  \n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,  \n"
"    stop: 0 #bbf, stop: 1 #55f);  \n"
"border: 1px solid #777;  \n"
"height: 10px;  \n"
"border-radius: 4px;  \n"
"}  \n"
"  \n"
"QSlider::add-page:horizontal {  \n"
"background: #3B3B3B;  \n"
"border: 1px solid #777;  \n"
"height: 10px;  \n"
"border-radius: 4px;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal {  \n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,  \n"
"    stop:0 #eee, stop:1 #ccc);  \n"
"border: 1px solid #777;  \n"
"width: 13px;  \n"
"margin-top: -2px;  \n"
"margin-bottom: -2px;  \n"
"border-radius: 4px;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal:hover {  \n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,  \n"
"    stop:0 #ff"
                        "f, stop:1 #ddd);  \n"
"border: 1px solid #444;  \n"
"border-radius: 4px;  \n"
"}  \n"
"  \n"
"QSlider::sub-page:horizontal:disabled {  \n"
"background: #bbb;  \n"
"border-color: #999;  \n"
"}  \n"
"  \n"
"QSlider::add-page:horizontal:disabled {  \n"
"background: #eee;  \n"
"border-color: #999;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal:disabled {  \n"
"background: #eee;  \n"
"border: 1px solid #aaa;  \n"
"border-radius: 4px;  \n"
"}  "));
        hSlider_Volume->setOrientation(Qt::Horizontal);
        hSlider_SongProgress = new QSlider(widget);
        hSlider_SongProgress->setObjectName(QString::fromUtf8("hSlider_SongProgress"));
        hSlider_SongProgress->setGeometry(QRect(30, 270, 451, 16));
        hSlider_SongProgress->setCursor(QCursor(Qt::PointingHandCursor));
        hSlider_SongProgress->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {  \n"
"border: 1px solid #4A708B;  \n"
"background: #3B3B3B;  \n"
"height: 5px;  \n"
"border-radius: 1px;  \n"
"padding-left:-1px;  \n"
"padding-right:-1px;  \n"
"}  \n"
"  \n"
"QSlider::sub-page:horizontal {  \n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1,   \n"
"    stop:0 #B1B1B1, stop:1 #c4c4c4);  \n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,  \n"
"    stop: 0 #5DCCFF, stop: 1 #1874CD);  \n"
"border: 1px solid #3B3B3B;  \n"
"height: 10px;  \n"
"border-radius: 2px;  \n"
"}  \n"
"  \n"
"QSlider::add-page:horizontal {  \n"
"background: #3B3B3B;  \n"
"border: 0px solid #777;  \n"
"height: 10px;  \n"
"border-radius: 2px;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal   \n"
"{  \n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5,   \n"
"    stop:0.6 #45ADED, stop:0.778409 rgba(255, 255, 255, 255));  \n"
"  \n"
"    width: 11px;  \n"
"    margin-top: -3px;  \n"
"    margin-bottom: -3px;  \n"
"    border-radius: 5px;  \n"
""
                        "}  \n"
"  \n"
"QSlider::handle:horizontal:hover {  \n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.6 #2A8BDA,   \n"
"    stop:0.778409 rgba(255, 255, 255, 255));  \n"
"  \n"
"    width: 11px;  \n"
"    margin-top: -3px;  \n"
"    margin-bottom: -3px;  \n"
"    border-radius: 5px;  \n"
"}  \n"
"  \n"
"QSlider::sub-page:horizontal:disabled {  \n"
"background: #00009C;  \n"
"border-color: #999;  \n"
"}  \n"
"  \n"
"QSlider::add-page:horizontal:disabled {  \n"
"background: #eee;  \n"
"border-color: #999;  \n"
"}  \n"
"  \n"
"QSlider::handle:horizontal:disabled {  \n"
"background: #eee;  \n"
"border: 1px solid #aaa;  \n"
"border-radius: 4px;  \n"
"}  "));
        hSlider_SongProgress->setValue(4);
        hSlider_SongProgress->setSliderPosition(4);
        hSlider_SongProgress->setOrientation(Qt::Horizontal);
        label_Curtime = new QLabel(widget);
        label_Curtime->setObjectName(QString::fromUtf8("label_Curtime"));
        label_Curtime->setGeometry(QRect(30, 280, 41, 21));
        label_Curtime->setFont(font);
        label_Curtime->setStyleSheet(QString::fromUtf8("background:rgb(0,0,0,0,)"));
        toolButton_playMode = new QToolButton(widget);
        toolButton_playMode->setObjectName(QString::fromUtf8("toolButton_playMode"));
        toolButton_playMode->setGeometry(QRect(60, 300, 34, 41));
        toolButton_playMode->setMinimumSize(QSize(34, 28));
        toolButton_playMode->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_playMode->setAutoFillBackground(false);
        toolButton_playMode->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_playMode->setIconSize(QSize(28, 28));
        toolButton_playMode->setAutoRaise(true);
        label_lrc = new QLabel(widget);
        label_lrc->setObjectName(QString::fromUtf8("label_lrc"));
        label_lrc->setGeometry(QRect(20, 240, 471, 21));
        label_lrc->setFont(font2);
        label_lrc->setAutoFillBackground(false);
        label_lrc->setStyleSheet(QString::fromUtf8("background:rgb(190,190,190,55,)"));
        label_lrc->setAlignment(Qt::AlignCenter);
        toolButton_Sound = new QToolButton(widget);
        toolButton_Sound->setObjectName(QString::fromUtf8("toolButton_Sound"));
        toolButton_Sound->setGeometry(QRect(370, 310, 21, 21));
        sizePolicy.setHeightForWidth(toolButton_Sound->sizePolicy().hasHeightForWidth());
        toolButton_Sound->setSizePolicy(sizePolicy);
        toolButton_Sound->setMinimumSize(QSize(0, 0));
        toolButton_Sound->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_Sound->setAutoFillBackground(false);
        toolButton_Sound->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_Sound->setIconSize(QSize(32, 32));
        toolButton_Sound->setAutoRaise(true);
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(430, 0, 71, 21));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_toolstyle = new QToolButton(horizontalLayoutWidget);
        toolButton_toolstyle->setObjectName(QString::fromUtf8("toolButton_toolstyle"));
        toolButton_toolstyle->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_toolstyle->setAutoFillBackground(false);
        toolButton_toolstyle->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_toolstyle->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_toolstyle);

        toolButton_mintray = new QToolButton(horizontalLayoutWidget);
        toolButton_mintray->setObjectName(QString::fromUtf8("toolButton_mintray"));
        toolButton_mintray->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_mintray->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_mintray->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_mintray);

        toolButton_min = new QToolButton(horizontalLayoutWidget);
        toolButton_min->setObjectName(QString::fromUtf8("toolButton_min"));
        toolButton_min->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_min->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_min->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_min);

        toolButton_close = new QToolButton(horizontalLayoutWidget);
        toolButton_close->setObjectName(QString::fromUtf8("toolButton_close"));
        toolButton_close->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_close->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_close->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_close);

        horizontalLayoutWidget_2 = new QWidget(widget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 0, 61, 21));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButton_main = new QToolButton(horizontalLayoutWidget_2);
        toolButton_main->setObjectName(QString::fromUtf8("toolButton_main"));
        toolButton_main->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_main->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_main->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_main);

        toolButton_showfront = new QToolButton(horizontalLayoutWidget_2);
        toolButton_showfront->setObjectName(QString::fromUtf8("toolButton_showfront"));
        toolButton_showfront->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_showfront->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_showfront->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_showfront);

        toolButton_p = new QToolButton(horizontalLayoutWidget_2);
        toolButton_p->setObjectName(QString::fromUtf8("toolButton_p"));
        toolButton_p->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_p->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_p->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_p);

        toolButton_s = new QToolButton(horizontalLayoutWidget_2);
        toolButton_s->setObjectName(QString::fromUtf8("toolButton_s"));
        toolButton_s->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_s->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));
        toolButton_s->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_s);

        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 60, 151, 181));
        tableWidget->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(85, 85, 255);\n"
"border-image: url(:/images/playList.png);\n"
"color: rgb(0, 200, 0);\n"
"selection-color: rgb(255, 255, 127);"));
        tableWidget->setFrameShape(QFrame::Box);
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTextElideMode(Qt::ElideRight);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::NoPen);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(20);
        tableWidget->verticalHeader()->setMinimumSectionSize(15);
        graphicsView = new QGraphicsView(widget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(175, 60, 161, 181));
        graphicsView->setAutoFillBackground(true);
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/images/heart.png);"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 100, 141, 61));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 255,0);\n"
"font: 75 12pt \"\346\245\267\344\275\223\";"));
        graphicsView_2 = new QGraphicsView(widget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(340, 60, 151, 181));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,0,)"));

        retranslateUi(widget);

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QWidget *widget)
    {
        widget->setWindowTitle(QString());
        action_SingleLoopMode->setText(QApplication::translate("widget", "\345\215\225\346\233\262\345\276\252\347\216\257", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_SingleLoopMode->setToolTip(QApplication::translate("widget", "\345\215\225\346\233\262\345\276\252\347\216\257", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_SequentialMode->setText(QApplication::translate("widget", "\351\241\272\345\272\217\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_SequentialMode->setToolTip(QApplication::translate("widget", "\351\241\272\345\272\217\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_LoopMode->setText(QApplication::translate("widget", "\345\210\227\350\241\250\345\276\252\347\216\257", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_LoopMode->setToolTip(QApplication::translate("widget", "\345\210\227\350\241\250\345\276\252\347\216\257", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_RandomMode->setText(QApplication::translate("widget", "\351\232\217\346\234\272\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_RandomMode->setToolTip(QApplication::translate("widget", "\351\232\217\346\234\272\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_About->setText(QApplication::translate("widget", "\345\205\263\344\272\216\351\230\201\346\245\274\351\237\263\344\271\220", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_About->setToolTip(QApplication::translate("widget", "\345\205\263\344\272\216\351\230\201\346\245\274\351\237\263\344\271\220", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Quit->setText(QApplication::translate("widget", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Quit->setToolTip(QApplication::translate("widget", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Config->setText(QApplication::translate("widget", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Config->setToolTip(QApplication::translate("widget", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_AddFiles->setText(QApplication::translate("widget", "\346\267\273\345\212\240\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_AddFiles->setToolTip(QApplication::translate("widget", "\346\267\273\345\212\240\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_AddFileFolder->setText(QApplication::translate("widget", "\346\267\273\345\212\240\346\226\207\344\273\266\345\244\271", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_AddFileFolder->setToolTip(QApplication::translate("widget", "\346\267\273\345\212\240\346\226\207\344\273\266\345\244\271", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_Totaltime->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_Totaltime->setText(QApplication::translate("widget", "00:00", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_open->setToolTip(QApplication::translate("widget", "\346\211\223\345\274\200\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_open->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_List->setToolTip(QApplication::translate("widget", "\346\222\255\346\224\276\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_List->setText(QApplication::translate("widget", "->", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_stop->setToolTip(QApplication::translate("widget", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_stop->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_palyname->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_palyname->setWhatsThis(QApplication::translate("widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_palyname->setText(QApplication::translate("widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:14pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_Title->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_Title->setWhatsThis(QApplication::translate("widget", "<html><head/><body><p align=\"center\"><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_Title->setText(QApplication::translate("widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#ffff00;\">\351\230\201\346\245\274\351\237\263\344\271\220</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_playpause->setToolTip(QApplication::translate("widget", "\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_playpause->setText(QString());
        textEdit->setHtml(QApplication::translate("widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_lrcD->setToolTip(QApplication::translate("widget", "\346\241\214\351\235\242\346\255\214\350\257\215", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_lrcD->setText(QApplication::translate("widget", "\350\257\215", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_next->setToolTip(QApplication::translate("widget", "\344\270\213\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_next->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_previous->setToolTip(QApplication::translate("widget", "\344\270\212\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_previous->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_Curtime->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_Curtime->setText(QApplication::translate("widget", "00:00", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_playMode->setToolTip(QApplication::translate("widget", "\346\222\255\346\224\276\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_playMode->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_lrc->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label_lrc->setWhatsThis(QApplication::translate("widget", "<html><head/><body><p align=\"center\"><span style=\" color:#55ffff;\"><br/></span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_lrc->setText(QApplication::translate("widget", "<html><head/><body><p align=\"center\"><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_Sound->setToolTip(QApplication::translate("widget", "\351\235\231\351\237\263", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_Sound->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_toolstyle->setToolTip(QApplication::translate("widget", "\345\267\245\345\205\267\346\240\267\345\274\217", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_toolstyle->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_mintray->setToolTip(QApplication::translate("widget", "\346\234\200\345\260\217\345\214\226\345\210\260\346\211\230\347\233\230", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_mintray->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_min->setToolTip(QApplication::translate("widget", "\346\234\200\345\260\217\345\214\226", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_min->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_close->setToolTip(QApplication::translate("widget", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_close->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_main->setToolTip(QApplication::translate("widget", "\350\217\234\345\215\225", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_main->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_showfront->setToolTip(QApplication::translate("widget", "\346\200\273\345\234\250\346\234\200\345\211\215\351\235\242", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_showfront->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_p->setToolTip(QApplication::translate("widget", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_p->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_s->setToolTip(QApplication::translate("widget", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_s->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("widget", "\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("widget", "\346\255\214\346\233\262", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("widget", "\350\267\257\345\276\204", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        label->setWhatsThis(QApplication::translate("widget", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#55ffff;\">sdg</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("widget", "For MyLove \350\265\265\344\272\232\347\224\267\n"
"    By \345\274\240\344\272\232\350\266\205", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class widget: public Ui_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
