#include "fitnessinctructor.h"
#include "ui_fitnessinctructor.h"

FitnessInctructor::FitnessInctructor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FitnessInctructor)
{
    ui->setupUi(this);
}

FitnessInctructor::~FitnessInctructor()
{
    delete ui;
}

