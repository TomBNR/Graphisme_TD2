#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsItem>
#include <QTimer>
#include <QGraphicsScene>
#include "boule.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButtonAnimation_clicked();

private:
    Ui::Widget *ui;
    QGraphicsScene maScene;
    Boule *maBoule;
    QTimer timer;
};
#endif // WIDGET_H
