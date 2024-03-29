#ifndef FITNESSINCTRUCTOR_H
#define FITNESSINCTRUCTOR_H

#include <QMainWindow>

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

  private:
    Ui::FitnessInctructor *ui;
};
#endif // FITNESSINCTRUCTOR_H
