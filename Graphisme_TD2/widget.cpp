#include "widget.h"
#include "ui_widget.h"

QGraphicsBouleHorizontalItem ::QGraphicsBouleHorizontalItem (QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    maScene.setSceneRect(0,0,LARGEUR,HAUTEUR);
    //creation de mon objet ayant advance
    maBoule=new QGraphicsBouleHorizontalItem(20,60,10,10);
    m
}

QGraphicsBouleHorizontalItem ::~QGraphicsBouleHorizontalItem ()
{
    delete ui;
}

