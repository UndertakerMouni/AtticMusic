#include "widget.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QFileDialog>
#include <QVideoWidget>
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QMediaMetaData>
#include <QDebug>

#include "ui_widget.h"
#include "lrcwindow.h"
#include "musiclist.h"
#include "ui_musiclist.h"
#include <QSystemTrayIcon>
#include <QtGlobal>

#include <QtGui>

widget::widget(QWidget *parent) :
    QWidget(parent,Qt::FramelessWindowHint),
    ui(new Ui::widget)
{
    ui->setupUi(this);
    setFixedSize(506,364);
    isSound = true;
    ui->hSlider_SongProgress->setRange(0,0);
 //   mList = new musicList(this);
//    mList->setFixedSize(300,320);
  //  mList->ui->tableWidget->setColumnWidth(0,300);
 //   mList->ui->tableWidget->setColumnWidth(1,150);
    ui->tableWidget->setAcceptDrops(true);
    ui->tableWidget->setColumnWidth(0,30);
    ui->tableWidget->setColumnWidth(1,150);


 //   connect(mList->ui->tableWidget,SIGNAL(cellDoubleClicked(int,int)),SLOT(tableWidget_cellDoubleClicked(int,int)));
    connect(ui->tableWidget,SIGNAL(cellDoubleClicked(int,int)),SLOT(tableWidget_cellDoubleClicked(int,int)));
    //  mList->show();
 //   connect(mList,SIGNAL(listClose()),ui->toolButton_List,SLOT(toggle()));
//  connect(ui->toolButton_open,SIGNAL(triggered),this,SLOT(on_toolButton_open_clicked()));
//  connect(ui->toolButton_Sound, SIGNAL(triggered),this,SLOT(on_toolButton_List_clicked()));

    text = new QTextEdit(this);
    text->hide();//用于查找下句歌词以计算时间间隔
    ui->textEdit->setVisible(false);//文本编辑框不可见，（解析歌词）
    this->setAcceptDrops(true);
//    this->setFixedSize(300,150);

    readSettings();//读取上次关闭窗口时窗口的位置

    QPalette palette = ui->label_lrc->palette();//设置窗体内歌词颜色
    palette.setColor(QPalette::WindowText,Qt::darkBlue);
    ui->label_lrc->setPalette(palette);
    lrc = new lrcWindow(0);//桌面歌词

    createPlayMode();
    createOpenFileMenu();
    createContextMenu();
    createSystemTrayIcon();

    volume = 50;

    playList=new QMediaPlaylist;
    playList->setPlaybackMode(QMediaPlaylist::Loop);
    player=new QMediaPlayer;
    player->setPlaylist(playList);
    player->setVolume(volume);



    ui->hSlider_Volume->setValue(volume);
    connect(ui->hSlider_SongProgress, SIGNAL(sliderMoved(int)), this, SLOT(setPosition(int)));
    connect(ui->hSlider_Volume, SIGNAL(sliderMoved(int)), this, SLOT(setSound(int)));

    connect(ui->action_SingleLoopMode, SIGNAL(triggered()), this, SLOT(setSingleLoopMode()));
    connect(ui->action_SequentialMode, SIGNAL(triggered()), this, SLOT(setSequentialMode()));
    connect(ui->action_LoopMode, SIGNAL(triggered()), this, SLOT(setLoopMode()));
    connect(ui->action_RandomMode, SIGNAL(triggered()), this, SLOT(setRandomMode()));
    connect(ui->action_About, SIGNAL(triggered()), this, SLOT(aboutUs()));
    connect(ui->action_Quit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->action_AddFiles,SIGNAL(triggered()), this, SLOT(setAddFiles()));
    connect(ui->action_AddFileFolder, SIGNAL(triggered()), this, SLOT(setAddFileFolder()));

    connect(ui->toolButton_close,SIGNAL(clicked()),this, SLOT(close()));
    connect(ui->toolButton_min,SIGNAL(clicked()),this,SLOT(showMinimized()));

    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    connect(player, SIGNAL(durationChanged(qint64)), this, SLOT(durationChanged(qint64)));
    connect(playList, SIGNAL(currentIndexChanged(int)), this, SLOT(updateSongList(int)));
// connect(player,SIGNAL(tick(qint64)),this,SLOT(showTime(qint64)));//时间显示与歌词的更新

    timer = new QTimer(this);//定时器，若0.1秒不显示歌词，则显示“Music ...”
    timer->start(100);
    lrcID = startTimer(100);
    connect(timer,SIGNAL(timeout()),SLOT(Timeout()));

//    iconpause = new QIcon(":/images/btn_plause0.png");
//    iconplay = new QIcon(":/images/btn_play0.png");

//    ui->toolButton_playpause->setIcon(*iconplay);
    ui->toolButton_playpause->setToolTip(tr("播放"));

    ui->toolButton_playpause->setStyleSheet("QToolButton{border-image:url(:/images/btn_play0.png);}"
                                            "QToolButton:hover{border-image:url(:/images/btn_play1.png);}");
    ui->toolButton_stop->setStyleSheet("QToolButton{border-image:url(:/images/btn_stop0.png);}"
                                       "QToolButton:hover{border-image:url(:/images/btn_stop1.png);}");
    ui->toolButton_previous->setStyleSheet("QToolButton{border-image:url(:/images/btn_pre0.png);}"
                                           "QToolButton:hover{border-image:url(:/images/btn_pre1.png);}");
    ui->toolButton_next->setStyleSheet("QToolButton{border-image:url(:/images/btn_next0.png);}"
                                       "QToolButton:hover{border-image:url(:/images/btn_next1.png);}");
    ui->toolButton_open->setStyleSheet("QToolButton{border-image:url(:/images/btn_openFile0.png);}"
                                       "QToolButton:hover{border-image:url(:/images/btn_openFile1.png);}");
    ui->toolButton_Sound->setStyleSheet("QToolButton{border-image:url(:/images/btn_sound0.png);}"
                                       "QToolButton:hover{border-image:url(:/images/btn_sound1.png);}");
    ui->toolButton_playMode->setStyleSheet("QToolButton{border-image:url(:/images/seqtional.PNG);}"
                                           "QToolButton:hover{border-image:url(:/images/seqtional1.png);}");
    ui->toolButton_close->setStyleSheet("QToolButton:hover{border-image:url(:/images/close.png);}");
    ui->toolButton_min->setStyleSheet("QToolButton:hover{border-image:url(:/images/min.png);}");
    ui->toolButton_mintray->setStyleSheet("QToolButton:hover{border-image:url(:/images/mintray.png);}");
    ui->toolButton_toolstyle->setStyleSheet("QToolButton:hover{border-image:url(:/images/toolstyle.png);}");
    ui->toolButton_main->setStyleSheet("QToolButton:hover{border-image:url(:/images/main.png);}");
    ui->toolButton_showfront->setStyleSheet("QToolButton:hover{border-image:url(:/images/showfront.png);}");
    ui->toolButton_p->setStyleSheet("QToolButton:hover{border-image:url(:/images/putup.png);}");
    ui->toolButton_s->setStyleSheet("QToolButton:hover{border-image:url(:/images/spin.png);}");

    ui->toolButton_lrcD->setStyleSheet("QToolButton:hover{background:rgb(0,255,255,100)}");
    ui->label_Title->setStyleSheet("QLabel:hover{color: rgb(85, 255, 255);}");
    QPalette p = this->palette();
    p.setColor(QPalette::WindowText,QColor(0,255,255));
    ui->label_palyname->setPalette(p);
    p.setColor(QPalette::WindowText,QColor(255,190,0));
    ui->label_lrc->setPalette(p);

  //  mList->installEventFilter(this);
  //  mList->ui->tableWidget->installEventFilter(this);//事件过滤器
    ui->tableWidget->installEventFilter(this);
//    connect(audioOutput,SIGNAL(mutedChanged(bool)),sound,SLOT(setChecked(bool)));
    connect(this,SIGNAL(mySignal()),this,SLOT(close()),Qt::QueuedConnection);

    init(playList);
//    mList->show();
 //   addToPlayList();
}

void widget::init(QMediaPlaylist  *playList)
{
    QString fileName = "first.txt";
  //  mList->readSongList(fileName,playList);
    readSongList(fileName);
}

void widget::addToPlayList(){
    /*
 //   int rownum = mList->ui->tableWidget->rowCount();
    for(int i = 1; i < rownum; i++){
        QTableWidgetItem *twi = mList->ui->tableWidget->item(i,1);
        QString path = twi->text();
        ui->label_lrc->setText(path);
 //       playList->addMedia(QUrl::fromLocalFile(path));
    }
    */
}

void widget::mouseDoubleClickEvent(QMouseEvent *e)
{
  QPoint temp = e->pos();
  const int pos_min_x = this->pos().x();
  const int pos_max_x = pos_min_x + this->width();
  const int pos_min_y = this->pos().y();
  const int pos_max_y = pos_min_y + this->height();
  if (temp.x()>pos_min_x && temp.x()<pos_max_x && temp.y()>pos_min_y && temp.y()<pos_max_y )
  {

      //只对标题栏范围内的鼠标事件进行处理
      this->close();
  }
}

void widget::moveEvent(QMoveEvent *e)
{
    /*
    if(isTouched)
    {
        QPoint p = e->pos() - e->oldPos();
        mList->move(mList->pos() + p);
    }
    else
    {
        isTouched = false;
        if(qAbs(mList->y()- this->y() - this->frameGeometry().height()) < 20)
        {
            isTouched = true;
            this->move(this->x(),mList->y()+this->frameGeometry().height());
        }
        if(qAbs(this->x() - mList->x() - mList->frameGeometry().width()) < 20)
        {
            isTouched = true;
            this->move(mList->x()+mList->frameGeometry().width(),this->y());
        }
        if(qAbs(this->x() + this->frameGeometry().width() - mList->x()) < 20)
        {
            isTouched = true;
            this->move(mList->x()-this->frameGeometry().width(),this->y());
        }
    }
    */
    QWidget::moveEvent(e);
}
void widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton) {
        dragPos=event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
    if(event->button() == Qt::RightButton) {
        dragPos=event->globalPos();
        mainPopMenu->popup(dragPos);
    }

}

void widget::timerEvent(QTimerEvent *event){
    if(event->timerId() == lrcID){
        qint64 curTime = player->position();
        showTime(curTime);

    }
}

void widget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton) {
        move(event->globalPos()-dragPos);
        event->accept();
    }
}
void widget::positionChanged(qint64 position)
{
    ui->hSlider_SongProgress->setValue(position);
    QTime totalTime(0,(position / 60000) % 60,(position / 1000) % 60,position%1000);
    ui->label_Curtime->setText(tr("%1").arg(totalTime.toString("mm:ss")));
//    showTime(position);
}

void widget::durationChanged(qint64 duration)
{
    ui->hSlider_SongProgress->setRange(0, duration);
    int temp = player->duration();
    totalTime = temp;
    QTime totalTime1(0,(temp / 60000) % 60,(temp / 1000) % 60,0);
    ui->label_Totaltime->setText(tr("%1").arg(totalTime1.toString("mm:ss")));


}
void widget::updateSongList(int i)
{
//    mList->ui->tableWidget->selectRow(i);
    ui->tableWidget->selectRow(i);
    ui->label_palyname->setText(tr("%1").arg(ui->tableWidget->item(i, 1)->text()));
 //   QString path(mList->ui->tableWidget->item(i,0)->text());
 //   qDebug()<<mList->ui->tableWidget->item(i,0)->text();
//    qDebug()<<mList->ui->tableWidget->item(i,1)->text();
 //   mList->ui->tableWidget->setFocus(Qt::MouseFocusReason);//选中最后一行
    ui->tableWidget->setFocus(Qt::MouseFocusReason);
    setCurrentLrc();
}
void widget::readSettings()//读取主窗口的位置信息
{
    QSettings settings("yafeilinux", "Phonon Example");
    QPoint pos = settings.value("pos", QPoint(400,200)).toPoint();
    //QSize size = settings.value("size", QSize(298,412)).toSize();
    move(pos);
    //resize(size);
}

void widget::writeSettings()//记录主窗口的位置信息
{
    QSettings settings("yafeilinux","Phonon Example");
    settings.setValue("pos", pos());
    //settings.setValue("size", size());
}

void widget::closeEvent(QCloseEvent *e)//关闭事件
{
    e->accept();
    /*
    if(trayIcon->isVisible()) {
        if(mList->isVisible())
            mList->hide();
        hide();
        trayIcon->showMessage(tr("提示"), tr("阁楼音乐将在后台运行"));
        e->ignore();
    } else {
        if(player->state() != QMediaPlayer::StoppedState)
            player->stop();
        playList->clear();

    }
    */
    /*
    writeSettings();
    mList->listWriteSettings();
    if(this->isVisible())
    {
        this->hide();
        mList->hide();
        trayicon->showMessage(tr("音乐播放器"),tr("最小化到系统托盘，要关闭请右击此图标选择“退出”。"),QSystemTrayIcon::Information,15000);
        e->ignore();
    }
    */
}

void widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    QPainter painter(this);
    QBrush brush(QColor(0,0,0));
    painter.setBrush(brush);
    QRect background = QRect(340,60,149,180);
    painter.drawRect(background);

    brush.setColor(QColor(0,255,0));
    painter.setBrush(brush);

    int width = 13;
    int X = 350,Y = 60;

 //   int high[10] = {0};
 //   int high[] = {90,120,40,130,50,110,160,140,20,100};
 //   int high[] = {130,110,150,140,100,80,90,100,150,160};
    int high[] = {120,90,130,40,50,40,100,160,80,110};

    for(int i = 0; i < 10; i++){
        int x = X+width*i;
        int y = Y+high[i];
        QRect bar = QRect(x,y,width,180-high[i]);
        painter.drawRect(bar);
    }


/*
    qreal m_rmsLevel = 1.0 , m_peakLevel = 0.9 ,m_decayedPeakLevel = 0.5,m_peakHoldLevel = 0.8;
    QColor m_rmsColor = QColor(Qt::red);
    QColor m_peakColor = QColor(255, 200, 200, 255);

    QRect bar = QRect(340,60,149,180);

    bar.setTop(bar.top() + (1.0 - m_peakHoldLevel) * bar.height());
    bar.setBottom(bar.top() + 5);
    painter.fillRect(bar, m_rmsColor);
    bar.setBottom(bar.bottom());

    bar.setTop(bar.top() + (1.0 - m_decayedPeakLevel) * bar.height());
    painter.fillRect(bar, m_peakColor);

    bar.setTop(bar.top() + (1.0 - m_rmsLevel) * bar.height());
    painter.fillRect(bar, m_rmsColor);
*/
    /*
    QPainter painter(this);
    painter.fillRect(rect(), Qt::black);

    QRect bar = rect();

    bar.setTop(rect().top() + (1.0 - m_peakHoldLevel) * rect().height());
    bar.setBottom(bar.top() + 5);
    painter.fillRect(bar, m_rmsColor);
    bar.setBottom(rect().bottom());

    bar.setTop(rect().top() + (1.0 - m_decayedPeakLevel) * rect().height());
    painter.fillRect(bar, m_peakColor);

    bar.setTop(rect().top() + (1.0 - m_rmsLevel) * rect().height());
    painter.fillRect(bar, m_rmsColor);
    */
}

void widget::setCurrentLrc()//设置当前歌词显示
{
    int row = playList->currentIndex();

 //   QString fileName = "one.mp3";
//    QString fileName = mList->ui->tableWidget->item(row,1)->text();
    QString fileName = ui->tableWidget->item(row,2)->text();
    QString lrcName = fileName.remove(fileName.right(3)) + "lrc";
    qDebug()<<lrcName;
    QFile file(lrcName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        ui->label_lrc->setText(tr("当前目录下未找到歌词文件"));
        lrc->setText(tr("当前目录下未找到歌词文件"));
        qDebug()<<"读文件出错";
      //  file.close();
     //   return;
    }
    QTextCodec *codec = QTextCodec::codecForName("GBK");
    QTextDecoder *decoder = codec->makeDecoder();
  //  QTextStream in(&file);
  //  ui->textEdit->setText(in.readAll());
    QString strLrc;
    while(!file.atEnd()){
        QByteArray line = file.readLine();
        QString path;

        path += decoder->toUnicode(line);
        //path.remove("\n");
        strLrc += path;
    }
  //  qDebug()<<strLrc;
    ui->textEdit->setText(strLrc);
    qDebug()<<ui->textEdit->textCursor().block().text();
    file.close();
}

void widget::createContextMenu()
{
    mainPopMenu = new QMenu(this);
//    addAction(addSongMenu);
//    addAction(playMenu);
    playModeMenu->setTitle("播放模式");
    mainPopMenu->addMenu(playModeMenu);
    mainPopMenu->addSeparator();
//    addAction(controlerMenu);
//    addAction(seperatorAction2);
//    addAction(ui->action_Config);
//    addAction(ui->action_Support);
    mainPopMenu->addAction(ui->action_About);
    mainPopMenu->addSeparator();
    mainPopMenu->addAction(ui->action_Quit);
//    mainPopMenu->set;

}

void widget::createSystemTrayIcon()
{
    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setIcon(QIcon(tr(":/images/myIcon.ico")));
    trayIcon->setToolTip("阁楼音乐 - 音乐播放器");

    restoreAction = new QAction(tr("打开主面板"), this);
    connect(restoreAction, SIGNAL(triggered()), this, SLOT(show()));

    quitAction=new QAction(tr("退出"), this);
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    trayContextMenu=new QMenu(this);
    playModeMenu->setTitle("播放模式");
    trayContextMenu->addMenu(playModeMenu);
    trayContextMenu->addSeparator();
    trayContextMenu->addAction(ui->action_About);
    trayContextMenu->addSeparator();
    trayContextMenu->addAction(restoreAction);
    trayContextMenu->addAction(quitAction);
    trayIcon->setContextMenu(trayContextMenu);

    trayIcon->show();
    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), \
            this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));
}
void widget::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch(reason) {
    case QSystemTrayIcon::DoubleClick:
    case QSystemTrayIcon::Trigger:
        if(this->isVisible()==true) {
            ;
        } else {
            this->show();
            this->activateWindow();
        }
        break;
    default:
        break;
    }
}

void widget::Timeout()//若0.1秒不显示歌词，则显示“Music ...”
{
    if(lrc->text().isEmpty())
    {
        lrc->setText(tr("本音乐播放器由 张亚超 制作"));
        ui->label_lrc->setText(tr("本音乐播放器由 张亚超 制作"));
    }
}

void widget::showTime(qint64 time)//时间与歌词的更新显示
{
    qint64 temp = totalTime;
//    QTime totalTime(0,(temp / 60000) % 60,(temp / 1000) % 60,time %1000);
    QTime curTime(0,(time / 60000) % 60,(time / 1000) % 60,time %1000);

    //歌词的更新显示

    if(ui->textEdit->find(curTime.toString("mm:ss.zzz").left(7)))//向后找
    {
        QString str = ui->textEdit->textCursor().block().text().replace(QRegExp("\\[\\d{2}:\\d{2}\\.\\d{2}\\]"),"");

        ui->label_lrc->setText(str);
        lrc->setText(str);
        lrc->setLrcWidth();//设置用于遮罩label的宽度为0
     //   lrc->show();

////////////////////////////////////////////////
        QTime tt = curTime;
        int b = 1;
        int c= 0;
        text->setText(ui->textEdit->document()->toPlainText());
        bool over = ui->textEdit->textCursor().block().next().text().isEmpty();
        while(!over &&!text->find(tt.addMSecs(b*100).toString("mm:ss.zzz").left(7)))
        {
            b++;
            c++;
        }
        while(over && !text->find(tt.addMSecs(b*100).toString("mm:ss.zzz").left(7),QTextDocument::FindBackward))
        {
            b++;
            c++;
            break;
        }

       lrc->timer->start(c);

    }//找不到后向前找
    else if(ui->textEdit->find(curTime.toString("mm:ss.zzz").left(7),QTextDocument::FindBackward))
    {
        QString str = ui->textEdit->textCursor().block().text().replace(QRegExp("\\[\\d{2}:\\d{2}\\.\\d{2}\\]"),"");
        ui->label_lrc->setText(str);
        lrc->setText(str);
        lrc->setLrcWidth();//设置用于遮罩label的宽度为0

       // lrc->show();

////////////////////////////////////////////////
        QTime tt = curTime;
        int b = 1;
        int c= 0;
        text->setText(ui->textEdit->document()->toPlainText());

        bool over = ui->textEdit->textCursor().block().next().text().isEmpty();
        while(!over && !text->find(tt.addMSecs(b*100).toString("mm:ss.zzz").left(7)))
        {
            b++;
            c++;
        }
        while(over && !text->find(tt.addMSecs(b*100).toString("mm:ss.zzz").left(7),QTextDocument::FindBackward))
        {
            b++;
            c++;
            break;
        }
         lrc->timer->start(c);
    }
}

widget::~widget()
{
    delete ui;
}
void widget::setPosition(int position)
{
    player->setPosition(position);
}
void widget::setSound(int position)
{
    player->setVolume(position);
    volume = position;
}
void widget::readSongList(QString fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<file.errorString();
        file.close();
        return;
    }


    QTextCodec *codec = QTextCodec::codecForName("GBK");
    QTextDecoder *decoder = codec->makeDecoder();

    while (!file.atEnd()) {
       QByteArray line = file.readLine();
       QString path;
       path += decoder->toUnicode(line);
//       QString path = file.readLine();
       if(!path.isEmpty()){
           path.remove("\n");
           qDebug()<<path;
       playList->addMedia(QUrl::fromLocalFile(path));

       QString fileName1 = path.split("\\").last();

       int rownum = this->ui->tableWidget->rowCount();
       this->ui->tableWidget->insertRow(rownum);

       int index = fileName1.lastIndexOf(".");
       QString str = fileName1.left(index);
       QString rowStr = QString::number(rownum+1,10);
       this->ui->tableWidget->setItem(rownum, 0, new QTableWidgetItem(rowStr));
       this->ui->tableWidget->setItem(rownum, 1, new QTableWidgetItem(str));
       this->ui->tableWidget->setItem(rownum, 2, new QTableWidgetItem(path));
       }
    }
 //   int currentIndex = playList->currentIndex();
 //   qDebug()<<currentIndex;

    file.close();
}

void widget::writeSongList(QString fileName,QString strSongPath)
{
    QFile file(fileName);
    if(!file.open(QIODevice::Append | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
        return;
    }
    strSongPath += "\n";
    QTextStream out(&file);
    out <<strSongPath;
    file.close();
}

void widget::addFiles()
{
    QString initialName=QDir::homePath();
    QStringList pathList = QFileDialog::getOpenFileNames(this, tr("选择文件"), initialName, tr("(*mp3)"));
    for(int i=0; i<pathList.size(); ++i) {
        QString path=QDir::toNativeSeparators(pathList.at(i));
        if(!path.isEmpty()) {
       //     path.replace('\\','/');

            playList->addMedia(QUrl::fromLocalFile(path));
     //       qDebug()<<playList;
            QString fileName=path.split("\\").last();
            int rownum = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(rownum);
        //    mList->ui->tableWidget->setItem(rownum, 1, new QTableWidgetItem(fileName.split("-").front()));
            int index = fileName.lastIndexOf(".");
            QString str = fileName.left(index);
            QString rowStr = QString::number(rownum+1,10);
            ui->tableWidget->setItem(rownum, 0, new QTableWidgetItem(rowStr));
            ui->tableWidget->setItem(rownum, 1, new QTableWidgetItem(str));
            ui->tableWidget->setItem(rownum, 2, new QTableWidgetItem(path));
//            qDebug()<<mList->ui->tableWidget->item(rownum,1)->text();
            QString file = "first.txt";
            writeSongList(file,path);
        }
    }

    if(!playList->isEmpty()){
        int curIndex = playList->mediaCount()-1;
    //    qDebug()<<curIndex;
        playList->setCurrentIndex(curIndex);
    player->play();
 //   ui->toolButton_playpause->setIcon(*iconpause);
    ui->toolButton_playpause->setStyleSheet("QToolButton{border-image:url(:/images/btn_plause0.png);}"
                                             "QToolButton:hover{border-image:url(:/images/btn_plause1.png);}");
    ui->toolButton_playpause->setToolTip(tr("暂停"));

 //   setCurrentLrc();
    }
}

void widget::createOpenFileMenu()
{
    openFileMenu = new QMenu(this);
    openFileMenu->addAction(ui->action_AddFiles);
    openFileMenu->addAction(ui->action_AddFileFolder);

    setContextMenuPolicy(Qt::ActionsContextMenu);
}

void widget::setAddFiles()
{
    addFiles();

}

void widget::setAddFileFolder()
{
    setExistingDirectory();

}

void widget::createPlayMode()
{
    playModeMenu = new QMenu(this);
    playModeMenu->addAction(ui->action_SingleLoopMode);
    playModeMenu->addAction(ui->action_SequentialMode);
    playModeMenu->addAction(ui->action_LoopMode);
    playModeMenu->addAction(ui->action_RandomMode);

    ui->action_SingleLoopMode->setCheckable(true);
    ui->action_SequentialMode->setCheckable(true);
    ui->action_LoopMode->setCheckable(true);
    ui->action_RandomMode->setCheckable(true);
    ui->action_SequentialMode->setChecked(true);

    setContextMenuPolicy(Qt::ActionsContextMenu);
}


void widget::setSingleLoopMode()
{
    playList->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    ui->toolButton_playMode->setStyleSheet("QToolButton{border-image:url(:/images/single.PNG);}"
                                           "QToolButton:hover{border-image:url(:/images/single1.png);}");
    ui->action_SingleLoopMode->setChecked(true);
    ui->action_SequentialMode->setChecked(false);
    ui->action_LoopMode->setChecked(false);
    ui->action_RandomMode->setChecked(false);
}

void widget::setSequentialMode()
{
    playList->setPlaybackMode(QMediaPlaylist::Sequential);
    ui->toolButton_playMode->setStyleSheet("QToolButton{border-image:url(:/images/seqtional.PNG);}"
                                           "QToolButton:hover{border-image:url(:/images/seqtional1.png);}");
    ui->action_SingleLoopMode->setChecked(false);
    ui->action_SequentialMode->setChecked(true);
    ui->action_LoopMode->setChecked(false);
    ui->action_RandomMode->setChecked(false);
}

void widget::setLoopMode()
{
    playList->setPlaybackMode(QMediaPlaylist::Loop);
    ui->toolButton_playMode->setStyleSheet("QToolButton{border-image:url(:/images/loop.PNG);}"
                                           "QToolButton:hover{border-image:url(:/images/loop1.png);}");
    ui->action_SingleLoopMode->setChecked(false);
    ui->action_SequentialMode->setChecked(false);
    ui->action_LoopMode->setChecked(true);
    ui->action_RandomMode->setChecked(false);
}

void widget::setRandomMode()
{
    playList->setPlaybackMode(QMediaPlaylist::Random);
    ui->toolButton_playMode->setStyleSheet("QToolButton{border-image:url(:/images/random.PNG);}"
                                           "QToolButton:hover{border-image:url(:/images/random1.png);}");
    ui->action_SingleLoopMode->setChecked(false);
    ui->action_SequentialMode->setChecked(false);
    ui->action_LoopMode->setChecked(false);
    ui->action_RandomMode->setChecked(true);
}
void widget::setExistingDirectory()

{  //选择一个文件夹;

    QFileDialog::Options options = QFileDialog::DontResolveSymlinks | QFileDialog::ShowDirsOnly;

//    if (!native->isChecked())
//        options |= QFileDialog::DontUseNativeDialog;

    QString initialName=QDir::homePath();
    QString directory = QFileDialog::getExistingDirectory(this,
                                tr("QFileDialog::getExistingDirectory()"),
                                initialName,
                                options);

    if (!directory.isEmpty()){
        addFolder(directory);
    }

        //directoryLabel->setText(directory);
}
void widget::on_toolButton_open_clicked()
{
 //   setExistingDirectory();
    QPoint pos = this->pos();
    QPoint btnPos = ui->toolButton_open->pos();
    pos += btnPos;

    QPoint movPos;
    movPos.setX(0);
    movPos.setY(ui->toolButton_open->height()-10);
    pos += movPos;

    openFileMenu->popup(pos);

}
void widget::addFolder(QString path)
{
    //判断路径是否存在
    QDir dir(path);
    if(!dir.exists())
    {
        return;
    }

    QStringList filters;
    filters<<QString("*.mp3");
    dir.setFilter(QDir::Files | QDir::NoSymLinks); //设置类型过滤器，只为文件格式
    dir.setNameFilters(filters);  //设置文件名称过滤器，只为filters格式（后缀为.jpeg等图片格式）

    int dir_count = dir.count();
    if(dir_count <= 0)
    {
        return;
    }

    QStringList string_list;
    //获取分隔符
    //QChar separator = QDir::separator();
    QChar separator = QChar('/');
    /*
    if(!path.contains(separator))
    {
        separator = QChar('\\');
    }

    QChar last_char = path.at(path.length()-1);
    if(last_char == separator)
    {
        separator = QChar();
    }
    */
    for(uint i=0; i < dir_count; i++)
    {
        QString file_name = dir[i];  //文件名称
        QString file_path = path + separator + file_name;   //文件全路径
        string_list.append(file_path);
        if(!file_path.isEmpty()) {
            file_path.replace('/','\\');
            playList->addMedia(QUrl::fromLocalFile(file_path));
     //       qDebug()<<playList;
            QString fileName=file_path.split("\\").last();
            int rownum = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(rownum);
        //    mList->ui->tableWidget->setItem(rownum, 1, new QTableWidgetItem(fileName.split("-").front()));
            int index = fileName.lastIndexOf(".");
            QString str = fileName.left(index);
            QString rowStr = QString::number(rownum+1,10);
            this->ui->tableWidget->setItem(rownum, 0, new QTableWidgetItem(rowStr));
            ui->tableWidget->setItem(rownum, 1, new QTableWidgetItem(str));
            ui->tableWidget->setItem(rownum, 2, new QTableWidgetItem(file_path));
//            qDebug()<<mList->ui->tableWidget->item(rownum,1)->text();
            QString file = "first.txt";
            writeSongList(file,file_path);
        }

    }

    //string_list 添加完成之后，就可以查看list中的文件路径了
}
void widget::aboutUs()
{
    QMessageBox::about(this, tr("关于阁楼音乐"), \
                       tr("阁楼音乐，感谢您的使用！\n http://blog.csdn.com/u012027907"));
}
void widget::tableWidget_cellDoubleClicked(int row, int /*column*/)//双击选歌
{
    playList->setCurrentIndex(row);
    if(playList->isEmpty())
        qDebug()<<"No song";
    qDebug()<<row;
    player->play();
   // ui->toolButton_playpause->setIcon(*iconpause);
    ui->toolButton_playpause->setStyleSheet("QToolButton{border-image:url(:/images/btn_plause0.png);}"
                                            "QToolButton:hover{border-image:url(:/images/btn_plause1.png);}");
    ui->toolButton_playpause->setToolTip(tr("暂停"));

 //   setCurrentLrc();
}

void widget::on_toolButton_lrcD_clicked(bool checked)
{
    if(checked)
    {
        lrc->show();
    }
    else
        lrc->hide();
}

void widget::on_toolButton_playpause_clicked()
{
    if(player->state() == QMediaPlayer::PlayingState){
        player->pause();
        ui->toolButton_playpause->setStyleSheet("QToolButton{border-image:url(:/images/btn_play0.png);}"
                                                "QToolButton:hover{border-image:url(:/images/btn_play1.png);}");
        ui->toolButton_playpause->setToolTip(tr("播放"));

        setCurrentLrc();

    }else{
        if(!playList->isEmpty()){
        player->play();       
//        ui->toolButton_playpause->setIcon(*iconpause);
        ui->toolButton_playpause->setStyleSheet("QToolButton{border-image:url(:/images/btn_plause0.png);}"
                                                "QToolButton:hover{border-image:url(:/images/btn_plause1.png);}");
        ui->toolButton_playpause->setToolTip(tr("暂停"));
       }
    }

}

void widget::on_toolButton_stop_clicked()
{
    player->stop();
}

void widget::on_toolButton_previous_clicked()
{
    int currentIndex=playList->currentIndex();
    if(--currentIndex<0) currentIndex=0;
    playList->setCurrentIndex(currentIndex);
    player->play();

//    setCurrentLrc();
}

void widget::on_toolButton_next_clicked()
{
    int currentIndex=playList->currentIndex();
    if(++currentIndex==playList->mediaCount()) currentIndex=0;
    playList->setCurrentIndex(currentIndex);
    player->play();
//    setCurrentLrc();

}

void widget::on_toolButton_List_clicked(bool checked)
{
    if(checked)
    {
        //mList->listReadSettings();
     //   mList->show();
    }
    else
    {
    //    mList->listWriteSettings();
    //    mList->hide();
    }
}
void widget::on_toolButton_List_clicked()
{

}

void widget::on_toolButton_Sound_clicked()
{
    if(isSound)
    {
        player->setVolume(0);
        isSound = false;
//      ui->toolButton_Sound->setIcon( QIcon("01.ico") );
        ui->hSlider_Volume->setValue(0);
        ui->toolButton_Sound->setStyleSheet("QToolButton{border-image:url(:/images/btn_soundkill0.png);}"
                                           "QToolButton:hover{border-image:url(:/images/btn_soundkill1.png);}");
    }
    else
    {
        player->setVolume(volume);
        isSound = true;
        ui->hSlider_Volume->setValue(volume);
        ui->toolButton_Sound->setStyleSheet("QToolButton{border-image:url(:/images/btn_sound0.png);}"
                                           "QToolButton:hover{border-image:url(:/images/btn_sound1.png);}");
    }
}

void widget::on_toolButton_playMode_clicked()
{
    QPoint pos = this->pos();
    QPoint btnPos = ui->toolButton_playMode->pos();
    pos += btnPos;

    QPoint movPos;
    movPos.setX(0);
    movPos.setY(ui->toolButton_playMode->height()-10);
    pos += movPos;

    playModeMenu->popup(pos);
}

void widget::on_toolButton_mintray_clicked()
{
    if(trayIcon->isVisible()) {
   //     if(mList->isVisible())
    //        mList->hide();
        hide();
        trayIcon->showMessage(tr("提示"), tr("阁楼音乐将在后台运行"));
    }
}
