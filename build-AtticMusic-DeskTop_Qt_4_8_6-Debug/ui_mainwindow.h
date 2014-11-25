/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *action_SongList;
    QAction *action_Previous;
    QAction *action_Next;
    QAction *action_Play;
    QAction *action_Stop;
    QAction *action_About;
    QAction *action_Support;
    QAction *action_ImportSong;
    QAction *action_ImportSongFile;
    QAction *action_SoundPlus;
    QAction *action_SoundReduce;
    QAction *action_Mode1;
    QAction *action_Mode2;
    QAction *action_Mode3;
    QAction *action_Mode4;
    QWidget *centralWidget;
    QPushButton *btn_Play_Pause;
    QPushButton *btn_Next;
    QPushButton *btn_Previous;
    QPushButton *btn_Stop;
    QPushButton *btn_Volume;
    QSlider *slider_Volume;
    QSlider *slider_Song_Progress;
    QLabel *label_SongPlaytime;
    QLabel *label_SongTime;
    QPushButton *btn_PlayList;
    QPushButton *btn_ShowLyric;
    QPushButton *btn_OpenFile;
    QPushButton *btn_PlayModel;
    QPushButton *btn_Close;
    QPushButton *btn_Min;
    QPushButton *btn_Tray;
    QPushButton *btn_Surface;
    QPushButton *btn_PutUp;
    QPushButton *btn_Option;
    QLabel *label_Title;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(512, 346);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_SongList = new QAction(MainWindow);
        action_SongList->setObjectName(QString::fromUtf8("action_SongList"));
        action_Previous = new QAction(MainWindow);
        action_Previous->setObjectName(QString::fromUtf8("action_Previous"));
        action_Next = new QAction(MainWindow);
        action_Next->setObjectName(QString::fromUtf8("action_Next"));
        action_Play = new QAction(MainWindow);
        action_Play->setObjectName(QString::fromUtf8("action_Play"));
        action_Stop = new QAction(MainWindow);
        action_Stop->setObjectName(QString::fromUtf8("action_Stop"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_Support = new QAction(MainWindow);
        action_Support->setObjectName(QString::fromUtf8("action_Support"));
        action_ImportSong = new QAction(MainWindow);
        action_ImportSong->setObjectName(QString::fromUtf8("action_ImportSong"));
        action_ImportSongFile = new QAction(MainWindow);
        action_ImportSongFile->setObjectName(QString::fromUtf8("action_ImportSongFile"));
        action_SoundPlus = new QAction(MainWindow);
        action_SoundPlus->setObjectName(QString::fromUtf8("action_SoundPlus"));
        action_SoundReduce = new QAction(MainWindow);
        action_SoundReduce->setObjectName(QString::fromUtf8("action_SoundReduce"));
        action_Mode1 = new QAction(MainWindow);
        action_Mode1->setObjectName(QString::fromUtf8("action_Mode1"));
        action_Mode2 = new QAction(MainWindow);
        action_Mode2->setObjectName(QString::fromUtf8("action_Mode2"));
        action_Mode3 = new QAction(MainWindow);
        action_Mode3->setObjectName(QString::fromUtf8("action_Mode3"));
        action_Mode4 = new QAction(MainWindow);
        action_Mode4->setObjectName(QString::fromUtf8("action_Mode4"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btn_Play_Pause = new QPushButton(centralWidget);
        btn_Play_Pause->setObjectName(QString::fromUtf8("btn_Play_Pause"));
        btn_Play_Pause->setGeometry(QRect(110, 290, 51, 31));
        btn_Next = new QPushButton(centralWidget);
        btn_Next->setObjectName(QString::fromUtf8("btn_Next"));
        btn_Next->setGeometry(QRect(170, 290, 41, 31));
        btn_Previous = new QPushButton(centralWidget);
        btn_Previous->setObjectName(QString::fromUtf8("btn_Previous"));
        btn_Previous->setGeometry(QRect(60, 290, 41, 31));
        btn_Stop = new QPushButton(centralWidget);
        btn_Stop->setObjectName(QString::fromUtf8("btn_Stop"));
        btn_Stop->setGeometry(QRect(220, 290, 51, 31));
        btn_Volume = new QPushButton(centralWidget);
        btn_Volume->setObjectName(QString::fromUtf8("btn_Volume"));
        btn_Volume->setGeometry(QRect(280, 290, 51, 31));
        slider_Volume = new QSlider(centralWidget);
        slider_Volume->setObjectName(QString::fromUtf8("slider_Volume"));
        slider_Volume->setGeometry(QRect(340, 300, 141, 19));
        slider_Volume->setOrientation(Qt::Horizontal);
        slider_Song_Progress = new QSlider(centralWidget);
        slider_Song_Progress->setObjectName(QString::fromUtf8("slider_Song_Progress"));
        slider_Song_Progress->setGeometry(QRect(60, 250, 421, 19));
        slider_Song_Progress->setOrientation(Qt::Horizontal);
        label_SongPlaytime = new QLabel(centralWidget);
        label_SongPlaytime->setObjectName(QString::fromUtf8("label_SongPlaytime"));
        label_SongPlaytime->setGeometry(QRect(60, 230, 54, 12));
        label_SongTime = new QLabel(centralWidget);
        label_SongTime->setObjectName(QString::fromUtf8("label_SongTime"));
        label_SongTime->setGeometry(QRect(450, 230, 41, 16));
        btn_PlayList = new QPushButton(centralWidget);
        btn_PlayList->setObjectName(QString::fromUtf8("btn_PlayList"));
        btn_PlayList->setGeometry(QRect(350, 190, 61, 23));
        btn_ShowLyric = new QPushButton(centralWidget);
        btn_ShowLyric->setObjectName(QString::fromUtf8("btn_ShowLyric"));
        btn_ShowLyric->setGeometry(QRect(420, 190, 71, 23));
        btn_OpenFile = new QPushButton(centralWidget);
        btn_OpenFile->setObjectName(QString::fromUtf8("btn_OpenFile"));
        btn_OpenFile->setGeometry(QRect(350, 90, 61, 23));
        btn_PlayModel = new QPushButton(centralWidget);
        btn_PlayModel->setObjectName(QString::fromUtf8("btn_PlayModel"));
        btn_PlayModel->setGeometry(QRect(420, 90, 71, 23));
        btn_Close = new QPushButton(centralWidget);
        btn_Close->setObjectName(QString::fromUtf8("btn_Close"));
        btn_Close->setGeometry(QRect(490, 0, 21, 23));
        btn_Min = new QPushButton(centralWidget);
        btn_Min->setObjectName(QString::fromUtf8("btn_Min"));
        btn_Min->setGeometry(QRect(470, 0, 21, 23));
        btn_Tray = new QPushButton(centralWidget);
        btn_Tray->setObjectName(QString::fromUtf8("btn_Tray"));
        btn_Tray->setGeometry(QRect(450, 0, 21, 23));
        btn_Surface = new QPushButton(centralWidget);
        btn_Surface->setObjectName(QString::fromUtf8("btn_Surface"));
        btn_Surface->setGeometry(QRect(40, 0, 21, 23));
        btn_PutUp = new QPushButton(centralWidget);
        btn_PutUp->setObjectName(QString::fromUtf8("btn_PutUp"));
        btn_PutUp->setGeometry(QRect(20, 0, 21, 23));
        btn_Option = new QPushButton(centralWidget);
        btn_Option->setObjectName(QString::fromUtf8("btn_Option"));
        btn_Option->setGeometry(QRect(0, 0, 21, 23));
        label_Title = new QLabel(centralWidget);
        label_Title->setObjectName(QString::fromUtf8("label_Title"));
        label_Title->setGeometry(QRect(210, 0, 71, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_Title->setFont(font);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(btn_Close, SIGNAL(clicked()), btn_Close, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Quit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_SongList->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272/\351\232\220\350\227\217\346\222\255\346\224\276\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_SongList->setToolTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272/\351\232\220\350\227\217\346\222\255\346\224\276\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Previous->setText(QApplication::translate("MainWindow", "\344\270\212\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Previous->setToolTip(QApplication::translate("MainWindow", "\344\270\212\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Previous->setShortcut(QApplication::translate("MainWindow", "Ctrl+Left", 0, QApplication::UnicodeUTF8));
        action_Next->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Next->setToolTip(QApplication::translate("MainWindow", "\344\270\213\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Next->setShortcut(QApplication::translate("MainWindow", "Ctrl+Right", 0, QApplication::UnicodeUTF8));
        action_Play->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Play->setToolTip(QApplication::translate("MainWindow", "\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Play->setShortcut(QApplication::translate("MainWindow", "Ctrl+F5", 0, QApplication::UnicodeUTF8));
        action_Stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Stop->setToolTip(QApplication::translate("MainWindow", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Stop->setShortcut(QApplication::translate("MainWindow", "Ctrl+F2", 0, QApplication::UnicodeUTF8));
        action_About->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\346\210\221\344\273\254", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_About->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216\346\210\221\344\273\254", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_About->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        action_Support->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\351\230\201\346\245\274\351\237\263\344\271\220", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Support->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216\351\230\201\346\245\274\351\237\263\344\271\220", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Support->setShortcut(QApplication::translate("MainWindow", "Ctrl+F1", 0, QApplication::UnicodeUTF8));
        action_ImportSong->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\346\234\254\345\234\260\346\255\214\346\233\262", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_ImportSong->setToolTip(QApplication::translate("MainWindow", "\345\257\274\345\205\245\346\234\254\345\234\260\346\255\214\346\233\262", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_ImportSong->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        action_ImportSongFile->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\346\234\254\345\234\260\346\255\214\346\233\262\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_ImportSongFile->setToolTip(QApplication::translate("MainWindow", "\345\257\274\345\205\245\346\234\254\345\234\260\346\255\214\346\233\262\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_SoundPlus->setText(QApplication::translate("MainWindow", "\351\237\263\351\207\217+(20%)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_SoundPlus->setToolTip(QApplication::translate("MainWindow", "\351\237\263\351\207\217+(20%)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_SoundPlus->setShortcut(QApplication::translate("MainWindow", "Ctrl+Up", 0, QApplication::UnicodeUTF8));
        action_SoundReduce->setText(QApplication::translate("MainWindow", "\351\237\263\351\207\217-(20%)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_SoundReduce->setToolTip(QApplication::translate("MainWindow", "\351\237\263\351\207\217-(20%)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_SoundReduce->setShortcut(QApplication::translate("MainWindow", "Ctrl+Down", 0, QApplication::UnicodeUTF8));
        action_Mode1->setText(QApplication::translate("MainWindow", "\345\210\227\350\241\250\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Mode1->setToolTip(QApplication::translate("MainWindow", "\345\210\227\350\241\250\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Mode1->setShortcut(QApplication::translate("MainWindow", "Alt+1", 0, QApplication::UnicodeUTF8));
        action_Mode2->setText(QApplication::translate("MainWindow", "\351\232\217\346\234\272\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Mode2->setToolTip(QApplication::translate("MainWindow", "\351\232\217\346\234\272\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Mode2->setShortcut(QApplication::translate("MainWindow", "Alt+2", 0, QApplication::UnicodeUTF8));
        action_Mode3->setText(QApplication::translate("MainWindow", "\345\215\225\346\233\262\345\276\252\347\216\257", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Mode3->setToolTip(QApplication::translate("MainWindow", "\345\215\225\346\233\262\345\276\252\347\216\257", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Mode3->setShortcut(QApplication::translate("MainWindow", "Alt+3", 0, QApplication::UnicodeUTF8));
        action_Mode4->setText(QApplication::translate("MainWindow", "\351\241\272\345\272\217\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Mode4->setToolTip(QApplication::translate("MainWindow", "\351\241\272\345\272\217\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Mode4->setShortcut(QApplication::translate("MainWindow", "Alt+4", 0, QApplication::UnicodeUTF8));
        btn_Play_Pause->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
        btn_Next->setText(QApplication::translate("MainWindow", ">", 0, QApplication::UnicodeUTF8));
        btn_Previous->setText(QApplication::translate("MainWindow", "<", 0, QApplication::UnicodeUTF8));
        btn_Stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        btn_Volume->setText(QApplication::translate("MainWindow", "\351\237\263\351\207\217", 0, QApplication::UnicodeUTF8));
        label_SongPlaytime->setText(QApplication::translate("MainWindow", "00:00", 0, QApplication::UnicodeUTF8));
        label_SongTime->setText(QApplication::translate("MainWindow", "00:00", 0, QApplication::UnicodeUTF8));
        btn_PlayList->setText(QApplication::translate("MainWindow", "PlayList", 0, QApplication::UnicodeUTF8));
        btn_ShowLyric->setText(QApplication::translate("MainWindow", "ShowLyric", 0, QApplication::UnicodeUTF8));
        btn_OpenFile->setText(QApplication::translate("MainWindow", "OpenFile", 0, QApplication::UnicodeUTF8));
        btn_PlayModel->setText(QApplication::translate("MainWindow", "PlayModel", 0, QApplication::UnicodeUTF8));
        btn_Close->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        btn_Min->setText(QApplication::translate("MainWindow", "_", 0, QApplication::UnicodeUTF8));
        btn_Tray->setText(QApplication::translate("MainWindow", "\343\200\201", 0, QApplication::UnicodeUTF8));
        btn_Surface->setText(QApplication::translate("MainWindow", "S", 0, QApplication::UnicodeUTF8));
        btn_PutUp->setText(QApplication::translate("MainWindow", "P", 0, QApplication::UnicodeUTF8));
        btn_Option->setText(QApplication::translate("MainWindow", "^", 0, QApplication::UnicodeUTF8));
        label_Title->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0389ff;\">\351\230\201\346\245\274\351\237\263\344\271\220</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
