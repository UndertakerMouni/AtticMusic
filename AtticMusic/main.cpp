#include "widget.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    widget *w = new widget;

    w->setAutoFillBackground(true);
    QPalette palette;
//    palette.setColor(QPalette::Background, QColor(192,253,123));
    palette.setBrush(QPalette::Background, QBrush(QPixmap(":/images/background.png")));
    w->setPalette(palette);

    w->show();

    return a.exec();
}
