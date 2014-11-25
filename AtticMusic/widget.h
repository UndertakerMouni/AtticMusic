#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QTextEdit>

#include <lrcwindow.h>
#include <musiclist.h>

namespace Ui {
class widget;
}

class QAction;
class QMenu;
class QMediaPlayer;
class QMediaPlaylist;
class QSystemTrayIcon;


class widget : public QWidget
{
    Q_OBJECT

public:
    explicit widget(QWidget *parent = 0);
    ~widget();

    void setCurrentLrc();


protected:

    void closeEvent(QCloseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void moveEvent(QMoveEvent *);
    void mouseDoubleClickEvent(QMouseEvent *);
    void timerEvent(QTimerEvent *);
    void paintEvent(QPaintEvent *event);
private:
    Ui::widget *ui;
//    musicList *mList;
    QPoint dragPos;
    QWidget *lrcWidget;
    QLabel *lrcLabel;

    lrcWindow *lrc;
    lrcWindow *lrc2;

    QTimer *timer;
    int lrcID;

    QIcon *iconplay;
    QIcon *iconpause;

    QAction *play;
    QAction *stop;
    QAction *open;
    QAction *sound;
    QAction *exit;
    QAction *remove;

    QAction *restoreAction;
    QAction *quitAction;

    QMediaPlayer    *player;
    QMediaPlaylist  *playList;

    QSystemTrayIcon *trayIcon;
//    QMenu *trayiconMenu;
    QMenu *trayContextMenu;
    QMenu *mainPopMenu;
    QMenu *playModeMenu;
    QMenu *openFileMenu;

    QTextEdit *text;

    bool isTouched;
    bool isSound;
    int  volume;
    int  totalTime;
//    QStringList songPath;
    void readSettings();
    void writeSettings();

    void createContextMenu();
    void createPlayMode();
    void createOpenFileMenu();
    void createSystemTrayIcon();
    void readSongList(QString fileName);
    void writeSongList(QString fileName,QString strSongPath);

    void setExistingDirectory();
    void addFolder(QString path);
    void addFiles();
private slots:

    void positionChanged(qint64);
    void durationChanged(qint64);
    void updateSongList(int);
    void showTime(qint64);
    void Timeout();
    void setPosition(int);
    void setSound(int);

    void setSingleLoopMode();
    void setSequentialMode();
    void setLoopMode();
    void setRandomMode();
    void setAddFiles();
    void setAddFileFolder();
    void init(QMediaPlaylist  *playList);
    void addToPlayList();
    void iconActivated(QSystemTrayIcon::ActivationReason reason);
    void aboutUs();

    void tableWidget_cellDoubleClicked(int row, int column);
    void on_toolButton_lrcD_clicked(bool checked);
    void on_toolButton_next_clicked();
    void on_toolButton_stop_clicked();
    void on_toolButton_playpause_clicked();
    void on_toolButton_previous_clicked();
    void on_toolButton_open_clicked();
    void on_toolButton_List_clicked(bool checked);

    void on_toolButton_Sound_clicked();

    void on_toolButton_playMode_clicked();

    void on_toolButton_List_clicked();

    void on_toolButton_mintray_clicked();

signals:
    void mySignal();
};

#endif // WIDGET_H
