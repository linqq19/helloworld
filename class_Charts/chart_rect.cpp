#include "chart_rect.h"


void Chart_Rect::paintChart(QPainter & p)
{
    QPen tmp = p.pen();
    p.setPen(paintChartDrawPen);

    int sx = paintStart.rx(),sy = paintStart.ry(),ex = paintEnd.rx(),ey = paintEnd.ry();

    if(graphPath) delete graphPath;
    graphPath = new QPainterPath;
    graphPath->addRect(sx,sy,ex-sx,ey-sy);

    p.fillPath(*graphPath,paintChartFillPen);
    p.drawPath(*graphPath);
    p.setPen(tmp);
}

/*
void Chart_Rect::updateMagPointInfo()
{
        qreal height = qreal(paintEnd.ry()) - qreal(paintStart.ry());
        qreal iHeight = height / (1 + double(model.numIn));
        qreal oHeight = height / (1 + double(model.numOut));
        for (int i = 0; i < model.numIn; ++i)
        {
            magPoint.i_point[i]->setX(paintStart.rx());
            magPoint.i_point[i]->setY(paintStart.ry() + iHeight * (1 + double(i)));
            magPoint.i_point[i]->setRotate(ORIENTION::WEST);
        }
        for (int i = 0; i < model.numOut; ++i)
        {
            int index = model.numIn + i;
            magPoint.i_point[index]->setX(paintEnd.rx() + 2 * this->getPortLen());
            magPoint.i_point[index]->setY(paintStart.ry() + oHeight * (1 + double(i)));
            magPoint.i_point[index]->setRotate(ORIENTION::EAST);
        }


    int x1 = paintStart.rx(),y1 = paintStart.ry();
    int x2 = paintEnd.rx(),y2 = paintEnd.ry();
    int midx = ((paintStart.rx() + paintEnd.rx())>>1);
    int midy = ((paintStart.ry() + paintEnd.ry())>>1);

    magPoint.i_point[0]->setX(x1);
    magPoint.i_point[0]->setY(y1);
    magPoint.i_point[0]->setRotate(ORIENTION::NORTHWEST);
    magPoint.i_point[1]->setX(midx);
    magPoint.i_point[1]->setY(y1);
    magPoint.i_point[1]->setRotate(ORIENTION::NORTH);
    magPoint.i_point[2]->setX(x2);
    magPoint.i_point[2]->setY(y1);
    magPoint.i_point[2]->setRotate(ORIENTION::NORTHEAST);
    magPoint.i_point[3]->setX(x2);
    magPoint.i_point[3]->setY(midy);
    magPoint.i_point[3]->setRotate(ORIENTION::EAST);
    magPoint.i_point[4]->setX(x2);
    magPoint.i_point[4]->setY(y2);
    magPoint.i_point[4]->setRotate(ORIENTION::SOUTHEAST);
    magPoint.i_point[5]->setX(midx);
    magPoint.i_point[5]->setY(y2);
    magPoint.i_point[5]->setRotate(ORIENTION::SOUTH);
    magPoint.i_point[6]->setX(x1);
    magPoint.i_point[6]->setY(y2);
    magPoint.i_point[6]->setRotate(ORIENTION::SOUTHWEST);
    magPoint.i_point[7]->setX(x1);
    magPoint.i_point[7]->setY(midy);
    magPoint.i_point[7]->setRotate(ORIENTION::WEST);

}
*/