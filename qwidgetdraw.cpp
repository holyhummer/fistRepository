#include "qwidgetdraw.h"
#include <QPaintEvent>
#include <QPainter>
#include <qmath.h>

QWidgetDraw::QWidgetDraw(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("哈尔滨吴彦组");
    //660*440
    this->resize(660+100,440+100);
}

void QWidgetDraw::paintEvent(QPaintEvent *event)
{
    QPainter *painter=new QPainter();
    painter->begin(this);
    this->draw(painter);
    painter->end();
}

void QWidgetDraw::draw(QPainter *painter)
{
    //配置画笔
    painter->setPen(QPen(Qt::black,Qt::DashLine));
//    painter->setBrush(QBrush(Qt::red,Qt::SolidPattern));//填充
    //画线
//    painter->drawLine(10,10,50,50);
    //画外框
    painter->drawRect(50,50,660,440);
    painter->drawLine(50,270,710,270);
    painter->drawLine(380,50,380,490);
//    //横线分割
//    painter->drawLine(50,72,380,72);
//    painter->drawLine(50,94,380,94);
//    painter->drawLine(50,116,380,116);
//    painter->drawLine(50,138,380,138);
//    painter->drawLine(50,160,380,160);
//    painter->drawLine(50,182,380,182);
//    painter->drawLine(50,204,380,204);
    this->drawDivideY(painter,50,50,330,220,15,10);
    this->drawDivideX(painter,50,50,330,220,15,10);
    //画大圆
    painter->drawEllipse(50+22*2,50+22*2,22*6,22*6);
    //画小圆
    painter->drawEllipse(50+22*9,50+22*1,22*2,22*2);
    painter->drawEllipse(50+22*11,50+22*3,22*2,22*2);
    painter->drawEllipse(50+22*11,50+22*6,22*2,22*2);
    painter->drawEllipse(50+22*9,50+22*8,22*2,22*2);
    //画五角星
    painter->drawLine(160,94,198.8014,213.394);
    painter->drawLine(198.8014,213.394,97.234,139.606);
    painter->drawLine(97.234,139.606,222.766,139.606);
    painter->drawLine(222.766,139.606,121.1986,213.394);
    painter->drawLine(121.1986,213.394,160,94);
}
//竖线分割
void QWidgetDraw::drawDivideY(QPainter *painter,int startX,int startY,int width,int hight,int wCnt,int hCnt)
{
    int step=width/wCnt;
    int cnt=0;
    for (cnt=0;cnt<wCnt;cnt++)
        painter->drawLine(startX+step*cnt,startY,startX+step*cnt,startY+hight);
}
//横线分割
void QWidgetDraw::drawDivideX(QPainter *painter,int startX,int startY,int width,int hight,int wCnt,int hCnt)
{
    int step=hight/hCnt;
    int cnt=0;
    for (cnt=0;cnt<hCnt;cnt++)
        painter->drawLine(startX,startY+step*cnt,startX+width,startY+step*cnt);
}
////画五角星
//void QWidgetDraw::drawStar(QPainter *painter,int x,int y,int radius,int rotate)
//{
//    int degree=2*M_PI/360*36;
//    QPoint point1,point2,point3;
//    point1.setX();
//}
