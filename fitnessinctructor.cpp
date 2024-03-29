#include "fitnessinctructor.h"
#include "ui_fitnessinctructor.h"

#include <QMessageBox>
#include <QPixmap>
#include <QTabBar>

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
    ui->plan->setCurrentIndex(0);

    connect(ui->day1, &QPushButton::clicked, this, [=](){ days_clicked(1); });
    connect(ui->day2, &QPushButton::clicked, this, [=](){ days_clicked(2); });
    connect(ui->day3, &QPushButton::clicked, this, [=](){ days_clicked(3); });
    connect(ui->day4, &QPushButton::clicked, this, [=](){ days_clicked(4); });
    connect(ui->day5, &QPushButton::clicked, this, [=](){ days_clicked(5); });
    connect(ui->day6, &QPushButton::clicked, this, [=](){ days_clicked(6); });
    connect(ui->day7, &QPushButton::clicked, this, [=](){ days_clicked(7); });

    connect(ui->back1, &QPushButton::clicked, this, &FitnessInctructor::back_clicked);
    connect(ui->back2, &QPushButton::clicked, this, &FitnessInctructor::back_clicked);
    connect(ui->back3, &QPushButton::clicked, this, &FitnessInctructor::back_clicked);
    connect(ui->back4, &QPushButton::clicked, this, &FitnessInctructor::back_clicked);
    connect(ui->back5, &QPushButton::clicked, this, &FitnessInctructor::back_clicked);
    connect(ui->back6, &QPushButton::clicked, this, &FitnessInctructor::back_clicked);
    connect(ui->back7, &QPushButton::clicked, this, &FitnessInctructor::back_clicked);

    connect(ui->d1Click, &QPushButton::clicked, this, [=](){ click_complete(ui->d1Click, ui->d1Complete); });
    connect(ui->d2Click, &QPushButton::clicked, this, [=](){ click_complete(ui->d2Click, ui->d2Complete); });
    connect(ui->d3Click, &QPushButton::clicked, this, [=](){ click_complete(ui->d3Click, ui->d3Complete); });
    connect(ui->d4Click, &QPushButton::clicked, this, [=](){ click_complete(ui->d4Click, ui->d4Complete); });
    connect(ui->d5Click, &QPushButton::clicked, this, [=](){ click_complete(ui->d5Click, ui->d5Complete); });
    connect(ui->d6Click, &QPushButton::clicked, this, [=](){ click_complete(ui->d6Click, ui->d6Complete); });
    connect(ui->d7Click, &QPushButton::clicked, this, [=](){ click_complete(ui->d7Click, ui->d7Complete); });
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

void FitnessInctructor::days_clicked(int dayIndex)
{
  ui->plan->setCurrentIndex(dayIndex);
}

void FitnessInctructor::back_clicked()
{
  ui->plan->setCurrentIndex(0);
}

void FitnessInctructor::progress_update()
{
  int completed_days_counter = 0;
  if (ui->d1Click->styleSheet() == "background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F0FFF0, stop:1 #F0FFFF); border: 1px solid white; border-radius: 15px;")
    completed_days_counter++;
  if (ui->d2Click->styleSheet() == "background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F0FFF0, stop:1 #F0FFFF); border: 1px solid white; border-radius: 15px;")
    completed_days_counter++;
  if (ui->d3Click->styleSheet() == "background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F0FFF0, stop:1 #F0FFFF); border: 1px solid white; border-radius: 15px;")
    completed_days_counter++;
  if (ui->d4Click->styleSheet() == "background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F0FFF0, stop:1 #F0FFFF); border: 1px solid white; border-radius: 15px;")
    completed_days_counter++;
  if (ui->d5Click->styleSheet() == "background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F0FFF0, stop:1 #F0FFFF); border: 1px solid white; border-radius: 15px;")
    completed_days_counter++;
  if (ui->d6Click->styleSheet() == "background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F0FFF0, stop:1 #F0FFFF); border: 1px solid white; border-radius: 15px;")
    completed_days_counter++;
  if (ui->d7Click->styleSheet() == "background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F0FFF0, stop:1 #F0FFFF); border: 1px solid white; border-radius: 15px;")
    completed_days_counter++;

  ui->progressBar->setValue(completed_days_counter * 100 / 7);
}

void FitnessInctructor::click_complete(QPushButton* completeButton, QPushButton* clickButton)
{
  completeButton->setStyleSheet("background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F0FFF0, stop:1 #F0FFFF); border: 1px solid white; border-radius: 15px;");
  clickButton->setStyleSheet("background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F0FFF0, stop:1 #F0FFFF); border: 1px solid white; border-radius: 15px;");

  progress_update();
}

void FitnessInctructor::on_reset_clicked()
{
  QList<QPushButton*> clickButtons = {ui->d1Click, ui->d2Click, ui->d3Click, ui->d4Click, ui->d5Click, ui->d6Click, ui->d7Click};
  QList<QPushButton*> completeButtons = {ui->d1Complete, ui->d2Complete, ui->d3Complete, ui->d4Complete, ui->d5Complete, ui->d6Complete, ui->d7Complete};

  for (int i = 0; i < clickButtons.size(); ++i) {
    clickButtons[i]->setStyleSheet("background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px;");
    completeButtons[i]->setStyleSheet("background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FFC0CB, stop:1 #E6E6FA); border: 1px solid white; border-radius: 15px;");
  }

  ui->progressBar->setValue(0);
}
