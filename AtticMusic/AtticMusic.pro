#-------------------------------------------------
#
# Project created by QtCreator 2014-11-06T18:56:53
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia
QT       += multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AtticMusic
TEMPLATE = app


SOURCES += main.cpp\
    lrcwindow.cpp \
    widget.cpp \
    musiclist.cpp

HEADERS  += \
    lrcwindow.h \
    widget.h \
    musiclist.h

FORMS    += \
    widget.ui \
    musiclist.ui

RC_FILE += myIcon.rc

OTHER_FILES += \
    images/myIcon.ico \
    myIcon.rc \
    images/background.png \
    images/btn_next0.png \
    images/btn_next1.png \
    images/btn_openFile0.png \
    images/btn_openFile1.png \
    images/btn_plause0.png \
    images/btn_plause1.png \
    images/btn_play0.png \
    images/btn_play1.png \
    images/btn_pre0.png \
    images/btn_pre1.png \
    images/btn_sound0.png \
    images/btn_sound1.png \
    images/btn_stop0.png \
    images/btn_stop1.png \
    images/btn_soundkill0.png \
    images/btn_soundkill1.png \
    images/loop.PNG \
    images/random.PNG \
    images/seqtional.PNG \
    images/single.PNG \
    images/loop1.png \
    images/random1.png \
    images/seqtional1.png \
    images/single1.png \
    images/close.png \
    images/main.png \
    images/min.png \
    images/mintray.png \
    images/putup.png \
    images/showfront.png \
    images/spin.png \
    images/toolstyle.png \
    images/heart.png \
    images/playList.png

RESOURCES += \
    Resource.qrc
