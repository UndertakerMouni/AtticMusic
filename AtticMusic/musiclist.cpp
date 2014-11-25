#include "musiclist.h"
#include "ui_musiclist.h"
#include <QSettings>
#include <QCloseEvent>
#include <QFile>
#include <QTextCodec>
#include <QDebug>

musicList::musicList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::musicList)
{
    ui->setupUi(this);

    listReadSettings();
    ui->tableWidget->setAcceptDrops(true);
    this->setWindowFlags(Qt::Tool);
    ui->tableWidget->setColumnWidth(0,300);
//     setWindowFlags(Qt::WindowTitleHint);
//   setAttribute(Qt::WA_TranslucentBackground,true);

    setFixedSize(300,364);
}

musicList::~musicList()
{
    delete ui;
}

void musicList::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void musicList::closeEvent(QCloseEvent *e)
{
    emit listClose();
    listWriteSettings();
    e->accept();
}
void musicList::moveEvent(QMoveEvent *e)
{
    if(qAbs((this->y()- this->parentWidget()->y() - this->parentWidget()->frameGeometry().height())) < 20)
    {
        this->move(this->x(),this->parentWidget()->y() + this->parentWidget()->frameGeometry().height());
    }
    if(qAbs(this->x()+this->frameGeometry().width() - this->parentWidget()->x()) < 20)
    {
        this->move(this->parentWidget()->x()-this->frameGeometry().width(),this->y());
    }
    if(qAbs(this->x()-this->parentWidget()->frameGeometry().width()-this->parentWidget()->x()) < 20)
    {
        this->move(this->parentWidget()->x()+this->parentWidget()->frameGeometry().width(),this->y());
    }
    QWidget::moveEvent(e);
}

void musicList::listReadSettings()//读取播放列表的位置,大小信息
{
    QSettings settings("yafeilinux", "Phonon LIST");
    QPoint pos = settings.value("pos", QPoint(this->x(),this->y()+150)).toPoint();
    QSize size = settings.value("size", QSize(300,320)).toSize();
    move(pos);
    resize(size);
}

void musicList::listWriteSettings()//记录播放列表的位置,大小信息
{
    QSettings settings("yafeilinux","Phonon LIST");
    settings.setValue("pos", pos());
    settings.setValue("size", size());
}


void musicList::readSongList(QString fileName)
{
    /*
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<file.errorString();
        return;
    }


    QTextCodec *codec = QTextCodec::codecForName("GBK");
    QTextDecoder *decoder = codec->makeDecoder();

    while (!file.atEnd()) {
       QByteArray line = file.readLine();
       QString path;
//      playList->addMedia(QUrl::fromLocalFile(path));

       path += decoder->toUnicode(line);
//       QString path = file.readLine();
       if(!path.isEmpty()){
           path.remove("\n");
           qDebug()<<path;
 //      playList->addMedia(QUrl::fromLocalFile(path));

       QString fileName1 = path.split("\\").last();

       int rownum = this->ui->tableWidget->rowCount();
       this->ui->tableWidget->insertRow(rownum);

       int index = fileName1.lastIndexOf(".");
       QString str = fileName1.left(index);
       this->ui->tableWidget->setItem(rownum, 0, new QTableWidgetItem(str));
       this->ui->tableWidget->setItem(rownum, 1, new QTableWidgetItem(path));
       }
    }
    int currentIndex = playList->currentIndex();
    qDebug()<<currentIndex;

    file.close();
    */
}

void musicList::writeSongList(QString fileName,QString strSongPath)
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

void musicList::readPlayList(QString fileName)
{

}

void musicList::writePlayList(QString fileName)
{

}
