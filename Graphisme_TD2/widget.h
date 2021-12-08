#ifndef WIDGET_H
#define WIDGET_H
#include "qgraphicsboulehorizontalitem.h"
#include <QWidget>
#include <QGraphicsEllipseItem>
#include <QGraphicsScene>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QGraphicsScene maScene;
    QGraphicsBouleHorizontalItem *maBoule;
    QTimer timer;
};
#endif // WIDGET_H
