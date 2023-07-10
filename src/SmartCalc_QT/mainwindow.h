#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QColor>
#include <QKeyEvent>
#include <QMainWindow>
#include <QString>

extern "C" {
#include "../Project/s21_smartcalc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private:
  Ui::MainWindow *ui;
  int iszero = 1;
  int isdot = 0;
  int isgraphopen = 0;
  int iscalcusopen = 0;
  int braces = 0;
  double plotstart = -50;
  double plotfinish = 50;
  void keyPressEvent(QKeyEvent *);
  void drawPlot(QString query, double a, double b);
  void deactivate(bool a);
  void checkfont();
  void connection();
  int whatlimit(int valuesize);
  int fontvalue = 50;
  int isdeactivated = 0;

 private slots:
  void button7_clicked();

  void buttonequal_clicked();

  void button8_clicked();

  void button9_clicked();

  void buttonplus_clicked();

  void buttondot_clicked();

  void button4_clicked();

  void button5_clicked();

  void button6_clicked();

  void button1_clicked();

  void button2_clicked();

  void button3_clicked();

  void button0_clicked();

  void buttonclear_clicked();

  void buttondiv_clicked();

  void buttonmult_clicked();

  void buttonsub_clicked();

  void buttonsin_clicked();

  void buttoncos_clicked();

  void buttondmod_clicked();

  void buttonpow_clicked();

  void buttonbraceopen_clicked();

  void buttonbraceclose_clicked();

  void buttontan_clicked();

  void buttonasin_clicked();

  void buttonacos_clicked();

  void buttonatan_clicked();

  void buttonlog_clicked();

  void buttonln_clicked();

  void buttonsqrt_clicked();

  void buttonx_clicked();

  void zoom_in_clicked();

  void zoom_out_clicked();

  void Economy_clicked();

  void calculate_clicked();
};

#endif  // MAINWINDOW_H
