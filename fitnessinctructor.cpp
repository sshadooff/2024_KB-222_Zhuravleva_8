#include "fitnessinctructor.h"
#include "ui_fitnessinctructor.h"
#include <QPixmap>

FitnessInctructor::FitnessInctructor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FitnessInctructor)
{
    ui->setupUi(this);

    QPixmap pix(":/resources/img/start.jpg");
    int w = ui->startImg->width();
    int h = ui->startImg->height();

    ui->startImg->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

FitnessInctructor::~FitnessInctructor()
{
    delete ui;
}
