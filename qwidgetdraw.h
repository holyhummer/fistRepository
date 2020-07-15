#ifndef QWIDGETDRAW_H
#define QWIDGETDRAW_H

#include <QWidget>

class QWidgetDraw : public QWidget
{
    Q_OBJECT
public:
    explicit QWidgetDraw(QWidget *parent = nullptr);
private:
    void paintEvent(QPaintEvent *event) override;
    void draw(QPainter *painter);
    void drawDivideY(QPainter *painter,int startX,int startY,int width,int hight,int wCnt,int hCnt);
    void drawDivideX(QPainter *painter,int startX,int startY,int width,int hight,int wCnt,int hCnt);
    void drawStar(QPainter *painter,int x,int y,int radius,int rotate);
signals:

public slots:
};

#endif // QWIDGETDRAW_H
