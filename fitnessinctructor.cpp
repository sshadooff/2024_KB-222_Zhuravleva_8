#include "fitnessinctructor.h"
#include "ui_fitnessinctructor.h"
#include <QMessageBox>
#include <QPixmap>
#include <QTabBar>
#include <QObject>

FitnessInctructor::FitnessInctructor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FitnessInctructor)
{
    ui->setupUi(this);

    QPixmap pix(":/resouces/img/start.jpg");
    int w = ui->startImg->width();
    int h = ui->startImg->height();

    ui->startImg->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    ui->startPage->tabBar()->hide();
    ui->startPage->setCurrentIndex(0);
    ui->plan->tabBar()->hide();
}

FitnessInctructor::~FitnessInctructor()
{
    delete ui;
}


void FitnessInctructor::on_startButton_clicked()
{
  ui->startPage->setCurrentIndex(1);
}

void FitnessInctructor::on_nextButton_clicked()
{
  if (!ui->lineEdit->displayText().isEmpty() && !ui->lineEdit_2->displayText().isEmpty() && !ui->lineEdit_3->displayText().isEmpty())
  {
    ui->startPage->setCurrentIndex(2);
    QMessageBox::about(this, "Добро пожаловать!", "Ваш план тренировок готов. Удачи! ^_^");
    ui->mainScrean->setCurrentIndex(0);

    ui->name->setText(ui->lineEdit->displayText());
    ui->height->setText(ui->lineEdit_2->displayText());
    ui->weight->setText(ui->lineEdit_3->displayText());
  }
  else
    QMessageBox::about(this, " ", "Заполните все поля!");
}
