#ifndef FITNESSINCTRUCTOR_H
#define FITNESSINCTRUCTOR_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class FitnessInctructor; }
QT_END_NAMESPACE

class FitnessInctructor : public QMainWindow
{
    Q_OBJECT

public:
    FitnessInctructor(QWidget *parent = nullptr);
    ~FitnessInctructor();

private slots:
    void on_startButton_clicked();

    void on_nextButton_clicked();

    void days_clicked(int dayIndex);

    void back_clicked();

    void click_complete(QPushButton* completeButton, QPushButton* clickButton);

    void progress_update();

    void on_reset_clicked();

  private:
    Ui::FitnessInctructor *ui;
};

#endif // FITNESSINCTRUCTOR_H
