#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  this->setFixedSize(640, 420);
  QPalette palette;
  palette.setColor(backgroundRole(), Qt::darkGray);
  setPalette(palette);
  this->setWindowIcon(QIcon("./otaku.png"));
  connection();
  this->grabKeyboard();
}

void MainWindow::connection() {
  connect(ui->button0, &QPushButton::clicked, this,
          &MainWindow::button0_clicked);
  connect(ui->button1, &QPushButton::clicked, this,
          &MainWindow::button1_clicked);
  connect(ui->button2, &QPushButton::clicked, this,
          &MainWindow::button2_clicked);
  connect(ui->button3, &QPushButton::clicked, this,
          &MainWindow::button3_clicked);
  connect(ui->button4, &QPushButton::clicked, this,
          &MainWindow::button4_clicked);
  connect(ui->button5, &QPushButton::clicked, this,
          &MainWindow::button5_clicked);
  connect(ui->button6, &QPushButton::clicked, this,
          &MainWindow::button6_clicked);
  connect(ui->button7, &QPushButton::clicked, this,
          &MainWindow::button7_clicked);
  connect(ui->button8, &QPushButton::clicked, this,
          &MainWindow::button8_clicked);
  connect(ui->button9, &QPushButton::clicked, this,
          &MainWindow::button9_clicked);
  connect(ui->buttondot, &QPushButton::clicked, this,
          &MainWindow::buttondot_clicked);
  connect(ui->buttonx, &QPushButton::clicked, this,
          &MainWindow::buttonx_clicked);
  connect(ui->buttonclear, &QPushButton::clicked, this,
          &MainWindow::buttonclear_clicked);
  connect(ui->buttonequal, &QPushButton::clicked, this,
          &MainWindow::buttonequal_clicked);
  connect(ui->buttonbraceopen, &QPushButton::clicked, this,
          &MainWindow::buttonbraceopen_clicked);
  connect(ui->buttonbraceclose, &QPushButton::clicked, this,
          &MainWindow::buttonbraceclose_clicked);
  connect(ui->buttonplus, &QPushButton::clicked, this,
          &MainWindow::buttonplus_clicked);
  connect(ui->buttonsub, &QPushButton::clicked, this,
          &MainWindow::buttonsub_clicked);
  connect(ui->buttonmult, &QPushButton::clicked, this,
          &MainWindow::buttonmult_clicked);
  connect(ui->buttondiv, &QPushButton::clicked, this,
          &MainWindow::buttondiv_clicked);
  connect(ui->buttonsin, &QPushButton::clicked, this,
          &MainWindow::buttonsin_clicked);
  connect(ui->buttoncos, &QPushButton::clicked, this,
          &MainWindow::buttoncos_clicked);
  connect(ui->buttontan, &QPushButton::clicked, this,
          &MainWindow::buttontan_clicked);
  connect(ui->buttonasin, &QPushButton::clicked, this,
          &MainWindow::buttonasin_clicked);
  connect(ui->buttonacos, &QPushButton::clicked, this,
          &MainWindow::buttonacos_clicked);
  connect(ui->buttonatan, &QPushButton::clicked, this,
          &MainWindow::buttonatan_clicked);
  connect(ui->buttondmod, &QPushButton::clicked, this,
          &MainWindow::buttondmod_clicked);
  connect(ui->buttonsqrt, &QPushButton::clicked, this,
          &MainWindow::buttonsqrt_clicked);
  connect(ui->buttonpow, &QPushButton::clicked, this,
          &MainWindow::buttonpow_clicked);
  connect(ui->buttonlog, &QPushButton::clicked, this,
          &MainWindow::buttonlog_clicked);
  connect(ui->buttonln, &QPushButton::clicked, this,
          &MainWindow::buttonln_clicked);
  connect(ui->Economy, &QPushButton::clicked, this,
          &MainWindow::Economy_clicked);
  connect(ui->calculate, &QPushButton::clicked, this,
          &MainWindow::calculate_clicked);
  connect(ui->zoom_in, &QPushButton::clicked, this,
          &MainWindow::zoom_in_clicked);
  connect(ui->zoom_out, &QPushButton::clicked, this,
          &MainWindow::zoom_out_clicked);
}

MainWindow::~MainWindow() { delete ui; }

int MainWindow::whatlimit(int valuesize) {
  int res = 0;
  if (valuesize <= 22) {
    res = 50;
  } else if (valuesize <= 23) {
    res = 46;
  } else if (valuesize <= 24) {
    res = 44;
  } else if (valuesize <= 26) {
    res = 42;
  } else if (valuesize <= 27) {
    res = 40;
  } else if (valuesize <= 28) {
    res = 38;
  } else if (valuesize <= 30) {
    res = 36;
  } else if (valuesize <= 32) {
    res = 34;
  } else if (valuesize <= 34) {
    res = 32;
  } else if (valuesize <= 36) {
    res = 30;
  } else if (valuesize <= 38) {
    res = 28;
  } else if (valuesize <= 42) {
    res = 26;
  } else if (valuesize <= 46) {
    res = 24;
  } else if (valuesize <= 52) {
    res = 22;
  } else if (valuesize <= 58) {
    res = 20;
  } else if (valuesize <= 64) {
    res = 18;
  } else if (valuesize <= 70) {
    res = 16;
  } else if (valuesize <= 78) {
    res = 14;
  } else if (valuesize <= 88) {
    res = 12;
  } else if (valuesize <= 101) {
    res = 10;
  } else if (valuesize <= 121) {
    res = 8;
  } else if (valuesize <= 145) {
    res = 6;
  } else if (valuesize <= 229) {
    res = 4;
  } else if (valuesize <= 255) {
    res = 2;
  }
  return res;
}

void MainWindow::checkfont() {
  QFont font = ui->value->font();
  fontvalue = whatlimit(ui->value->text().count());
  font.setPointSize(fontvalue);
  ui->value->setFont(font);
}

void MainWindow::deactivate(bool a) {
  ui->button0->setDisabled(a);
  ui->button1->setDisabled(a);
  ui->button2->setDisabled(a);
  ui->button3->setDisabled(a);
  ui->button4->setDisabled(a);
  ui->button5->setDisabled(a);
  ui->button6->setDisabled(a);
  ui->button7->setDisabled(a);
  ui->button8->setDisabled(a);
  ui->button9->setDisabled(a);
  ui->buttonx->setDisabled(a);
  ui->buttonequal->setDisabled(a);
  ui->buttonplus->setDisabled(a);
  ui->buttonsub->setDisabled(a);
  ui->buttonmult->setDisabled(a);
  ui->buttondiv->setDisabled(a);
  ui->buttondmod->setDisabled(a);
  ui->buttonpow->setDisabled(a);
  ui->buttonsqrt->setDisabled(a);
  ui->buttonln->setDisabled(a);
  ui->buttonlog->setDisabled(a);
  ui->buttonsin->setDisabled(a);
  ui->buttoncos->setDisabled(a);
  ui->buttontan->setDisabled(a);
  ui->buttonasin->setDisabled(a);
  ui->buttonacos->setDisabled(a);
  ui->buttonatan->setDisabled(a);
  ui->buttondot->setDisabled(a);
  ui->buttonbraceopen->setDisabled(a);
  ui->buttonbraceclose->setDisabled(a);
  if (a) {
    ui->buttonclear->setStyleSheet(
        "QPushButton "
        "{font: bold;"
        "color: orange; "
        "background-color: gray; "
        "border: 2px solid white; "
        "border-radius: 2px;}"
        "QPushButton:pressed "
        "{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: "
        "0 #dadbde, stop: 1 #9799fc);}");
  } else {
    ui->buttonclear->setStyleSheet(
        "QPushButton "
        "{color: black; "
        "background-color: gray; "
        "border: 2px solid white; "
        "border-radius: 2px;}"
        "QPushButton:pressed {"
        "background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 "
        "#dadbde, stop: 1 #9799fc);}");
  }
  isdeactivated = a;
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (event->key() == Qt::Key_Backspace) {
    if (c == ')') {
      braces++;
    } else if (c == '(') {
      braces--;
    } else if (c == '.') {
      isdot = 0;
    } else if (c == '0' && iszero && !isdot) {
      iszero = 0;
    }
    if (ui->value->text().size() == 1 || c == 'r' || c == 't' || c == 'y') {
      ui->value->setText("0");
      isdot = 0;
      iszero = 1;
    } else {
      ui->value->setText(ui->value->text().left(ui->value->text().size() - 1));
    }
    deactivate(0);
    if (!iscalcusopen) {
      this->setFixedSize(640, 420);
    } else {
      this->setFixedSize(1150, 420);
    }
    checkfont();
  } else if (event->key() == Qt::Key_0 && !isdeactivated) {
    button0_clicked();
  } else if (event->key() == Qt::Key_1 && !isdeactivated) {
    button1_clicked();
  } else if (event->key() == Qt::Key_2 && !isdeactivated) {
    button2_clicked();
  } else if (event->key() == Qt::Key_3 && !isdeactivated) {
    button3_clicked();
  } else if (event->key() == Qt::Key_4 && !isdeactivated) {
    button4_clicked();
  } else if (event->key() == Qt::Key_5 && !isdeactivated) {
    button5_clicked();
  } else if (event->key() == Qt::Key_6 && !isdeactivated) {
    button6_clicked();
  } else if (event->key() == Qt::Key_7 && !isdeactivated) {
    button7_clicked();
  } else if (event->key() == Qt::Key_8 && !isdeactivated) {
    button8_clicked();
  } else if (event->key() == Qt::Key_9 && !isdeactivated) {
    button9_clicked();
  } else if ((event->key() == Qt::Key_Enter ||
              event->key() == Qt::Key_Return) &&
             !isdeactivated) {
    buttonequal_clicked();
  } else if (event->key() == Qt::Key_Period && !isdeactivated) {
    buttondot_clicked();
  } else if (event->key() == Qt::Key_X && !isdeactivated) {
    buttonx_clicked();
  } else if (event->key() == Qt::Key_Plus && !isdeactivated) {
    buttonplus_clicked();
  } else if (event->key() == Qt::Key_Minus && !isdeactivated) {
    buttonsub_clicked();
  } else if (event->key() == Qt::Key_Asterisk && !isdeactivated) {
    buttonmult_clicked();
  } else if (event->key() == Qt::Key_Slash && !isdeactivated) {
    buttondiv_clicked();
  } else if (event->key() == Qt::Key_ParenLeft && !isdeactivated) {
    buttonbraceopen_clicked();
  } else if (event->key() == Qt::Key_ParenRight && !isdeactivated) {
    buttonbraceclose_clicked();
  } else if (event->key() == Qt::Key_AsciiCircum && !isdeactivated) {
    buttonpow_clicked();
  }
}

void MainWindow::drawPlot(QString query, double a, double b) {
  double h = 0.1;
  int flag = 0;
  int N = (b - a) / h + 2;
  QVector<double> x(N), y(N);
  QByteArray eq;
  QString tmp;
  char *str;
  QString lmao;
  double X = a;
  for (int i = 0; i < N; i++) {
    x[i] = X;
    lmao = "(" + QString::number(X) + ")";
    tmp = query;
    tmp.replace('x', lmao);
    eq = tmp.toLocal8Bit();
    str = eq.data();
    y[i] = smartCalc(str, &flag);
    if (flag == 1) {
      break;
    }
    if ((int)(X * 10) == -1) {
      X = 0;
    } else {
      X += h;
    }
  }
  if (flag == 1) {
    ui->value->setText("Not enough memory");
  } else {
    ui->plotter->clearGraphs();
    ui->plotter->addGraph();
    ui->plotter->graph(0)->setData(x, y);
    ui->plotter->xAxis->setLabel("x");
    ui->plotter->yAxis->setLabel("y");
    ui->plotter->xAxis->setRange(a, b);
    double minY = y[0], maxY = y[0];
    for (int i = 1; i < N; i++) {
      if (y[i] < minY) minY = y[i];
      if (y[i] > maxY) maxY = y[i];
    }
    ui->plotter->yAxis->setRange(minY, maxY);
    ui->plotter->setInteraction(QCP::iRangeZoom, true);
    ui->plotter->setInteraction(QCP::iRangeDrag, true);
    ui->plotter->replot();
  }
}

void MainWindow::button7_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (c != 'x' && c != ')' && ui->value->text().count() + 1 <= 255) {
    if (ui->value->text() == "0") {
      ui->value->setText("7");
      iszero = 0;
    } else if (c != '0' || isdot || !iszero) {
      ui->value->setText(ui->value->text() + "7");
    }
    checkfont();
  }
}

void MainWindow::button8_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (c != 'x' && c != ')' && ui->value->text().count() + 1 <= 255) {
    if (ui->value->text() == "0") {
      ui->value->setText("8");
      iszero = 0;
    } else if (c != '0' || isdot || !iszero) {
      ui->value->setText(ui->value->text() + "8");
    }
    checkfont();
  }
}

void MainWindow::buttonequal_clicked() {
  int x = 0;
  int flag = 0;
  double res = 0;
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (braces == 0 && ((c >= '0' && c <= '9') || c == ')' || c == 'x')) {
    QByteArray eq = ui->value->text().toLocal8Bit();
    char *str = eq.data();
    x = strchr(str, 'x') ? 1 : 0;
    if (x == 0) {
      res = smartCalc(str, &flag);
      if (isnan(res) || isinf(res)) {
        ui->value->setText("Error");
        deactivate(1);
      } else if (flag == 1) {
        ui->value->setText("Not enough memory");
        deactivate(1);
      } else {
        ui->value->setText(QString::number(smartCalc(str, &flag), 'g', 7));
        eq = ui->value->text().toLocal8Bit();
        str = eq.data();
        iszero = strcmp(str, "0") == 0 ? 1 : 0;
        isdot = strchr(str, '.') == 0 ? 0 : 1;
        if (strchr(eq.data(), 'e')) {
          deactivate(1);
        }
      }
      checkfont();
    } else {
      if (iscalcusopen) {
        this->setFixedSize(1150, 691);
      } else {
        this->setFixedSize(640, 691);
      }
      isgraphopen = 1;
      drawPlot(ui->value->text(), plotstart, plotfinish);
      deactivate(1);
    }
  } else {
    ui->value->setText("Invalid input");
    deactivate(1);
    checkfont();
  }
}

void MainWindow::button9_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (c != 'x' && c != ')' && ui->value->text().count() + 1 <= 255) {
    if (ui->value->text() == "0") {
      ui->value->setText("9");
      iszero = 0;
    } else if (c != '0' || isdot || !iszero) {
      ui->value->setText(ui->value->text() + "9");
    }
    checkfont();
  }
}

void MainWindow::buttonplus_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (((c >= '0' && c <= '9') || c == ')' || c == 'x' || c == '(') &&
      ui->value->text().count() + 1 <= 255) {
    if (ui->value->text() == "0") {
      ui->value->setText("+");
    } else {
      ui->value->setText(ui->value->text() + "+");
    }
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttondot_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (c >= '0' && c <= '9' && isdot == 0 &&
      ui->value->text().count() + 1 <= 255) {
    ui->value->setText(ui->value->text() + ".");
    isdot = 1;
    iszero = 0;
    checkfont();
  }
}

void MainWindow::button4_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (c != 'x' && c != ')' && ui->value->text().count() + 1 <= 255) {
    if (ui->value->text() == "0") {
      ui->value->setText("4");
      iszero = 0;
    } else if (c != '0' || isdot || !iszero) {
      ui->value->setText(ui->value->text() + "4");
    }
    checkfont();
  }
}

void MainWindow::button5_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (c != 'x' && c != ')' && ui->value->text().count() + 1 <= 255) {
    if (ui->value->text() == "0") {
      ui->value->setText("5");
      iszero = 0;
    } else if (c != '0' || isdot || !iszero) {
      ui->value->setText(ui->value->text() + "5");
    }
    checkfont();
  }
}

void MainWindow::button6_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (c != 'x' && c != ')' && ui->value->text().count() + 1 <= 255) {
    if (ui->value->text() == "0") {
      ui->value->setText("6");
      iszero = 0;
    } else if (c != '0' || isdot || !iszero) {
      ui->value->setText(ui->value->text() + "6");
    }
    checkfont();
  }
}

void MainWindow::button1_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (c != 'x' && c != ')' && ui->value->text().count() + 1 <= 255) {
    if (ui->value->text() == "0") {
      ui->value->setText("1");
      iszero = 0;
    } else if (c != '0' || isdot || !iszero) {
      ui->value->setText(ui->value->text() + "1");
    }
    checkfont();
  }
}

void MainWindow::button2_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (c != 'x' && c != ')' && ui->value->text().count() + 1 <= 255) {
    if (ui->value->text() == "0") {
      ui->value->setText("2");
      iszero = 0;
    } else if (c != '0' || isdot || !iszero) {
      ui->value->setText(ui->value->text() + "2");
    }
    checkfont();
  }
}

void MainWindow::button3_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (c != 'x' && c != ')' && ui->value->text().count() + 1 <= 255) {
    if (ui->value->text() == "0") {
      ui->value->setText("3");
      iszero = 0;
    } else if (c != '0' || isdot || !iszero) {
      ui->value->setText(ui->value->text() + "3");
    }
    checkfont();
  }
}

void MainWindow::button0_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (c != 'x' && c != ')' && ui->value->text().count() + 1 <= 255) {
    if (iszero == 0) {
      if ((c < '0' || c > '9') && c != '.') {
        iszero = 1;
      }
      ui->value->setText(ui->value->text() + "0");
    }
  }
  checkfont();
}

void MainWindow::buttonclear_clicked() {
  ui->value->setText("0");
  if (iscalcusopen) {
    this->setFixedSize(1150, 420);
  } else {
    this->setFixedSize(640, 420);
  }
  braces = 0;
  iszero = 1;
  isdot = 0;
  isgraphopen = 0;
  checkfont();
  deactivate(0);
}

void MainWindow::buttondiv_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (((c >= '0' && c <= '9') || c == ')' || c == 'x') &&
      ui->value->text().count() + 1 <= 255) {
    ui->value->setText(ui->value->text() + "/");
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttonmult_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (((c >= '0' && c <= '9') || c == ')' || c == 'x') &&
      ui->value->text().count() + 1 <= 255) {
    ui->value->setText(ui->value->text() + "*");
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttonsub_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (((c >= '0' && c <= '9') || c == ')' || c == '(' || c == 'x') &&
      ui->value->text().count() + 1 <= 255) {
    if (ui->value->text() == '0') {
      ui->value->setText("-");
    } else {
      ui->value->setText(ui->value->text() + "-");
    }
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttonsin_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if ((c < '0' || c > '9') && c != '.' && c != 'x' && c != ')' &&
      ui->value->text().count() + 4 <= 255) {
    ui->value->setText(ui->value->text() + "sin(");
    braces++;
    checkfont();
    iszero = 0;
    isdot = 0;
  } else if (ui->value->text() == "0") {
    ui->value->setText("sin(");
    braces++;
    checkfont();
    iszero = 0;
    isdot = 0;
  }
}

void MainWindow::buttoncos_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if ((c < '0' || c > '9') && c != '.' && c != 'x' && c != ')' &&
      ui->value->text().count() + 4 <= 255) {
    ui->value->setText(ui->value->text() + "cos(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  } else if (ui->value->text() == "0") {
    ui->value->setText("cos(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttondmod_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (((c >= '0' && c <= '9') || c == ')' || c == 'x') &&
      ui->value->text().count() + 3 <= 255) {
    ui->value->setText(ui->value->text() + "mod");
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttonpow_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (((c >= '0' && c <= '9') || c == ')' || c == 'x') &&
      ui->value->text().count() + 1 <= 255) {
    ui->value->setText(ui->value->text() + "^");
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttonbraceopen_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if ((c < '0' || c > '9') && c != '.' && c != 'x' &&
      ui->value->text().count() + 1 <= 255) {
    ui->value->setText(ui->value->text() + "(");
    braces++;
    isdot = 0;
    iszero = 0;
    checkfont();
  } else if (ui->value->text() == "0") {
    ui->value->setText("(");
    iszero = 0;
    isdot = 0;
    braces++;
    checkfont();
  }
}

void MainWindow::buttonbraceclose_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if (((c >= '0' && c <= '9') || c == ')' || c == 'x') && braces > 0 &&
      ui->value->text().count() + 1 <= 255) {
    ui->value->setText(ui->value->text() + ")");
    iszero = 0;
    isdot = 0;
    braces--;
    checkfont();
  }
}

void MainWindow::buttontan_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if ((c < '0' || c > '9') && c != '.' && c != 'x' && c != ')' &&
      ui->value->text().count() + 4 <= 255) {
    ui->value->setText(ui->value->text() + "tan(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  } else if (ui->value->text() == "0") {
    ui->value->setText("tan(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttonasin_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if ((c < '0' || c > '9') && c != '.' && c != 'x' && c != ')' &&
      ui->value->text().count() + 5 <= 255) {
    ui->value->setText(ui->value->text() + "asin(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  } else if (ui->value->text() == "0") {
    ui->value->setText("asin(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttonacos_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if ((c < '0' || c > '9') && c != '.' && c != 'x' && c != ')' &&
      ui->value->text().count() + 5 <= 255) {
    ui->value->setText(ui->value->text() + "acos(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  } else if (ui->value->text() == "0") {
    ui->value->setText("acos(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttonatan_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if ((c < '0' || c > '9') && c != '.' && c != 'x' && c != ')' &&
      ui->value->text().count() + 5 <= 255) {
    ui->value->setText(ui->value->text() + "atan(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  } else if (ui->value->text() == "0") {
    ui->value->setText("atan(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttonlog_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if ((c < '0' || c > '9') && c != '.' && c != 'x' && c != ')' &&
      ui->value->text().count() + 4 <= 255) {
    ui->value->setText(ui->value->text() + "log(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  } else if (ui->value->text() == "0") {
    ui->value->setText("log(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttonln_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if ((c < '0' || c > '9') && c != '.' && c != 'x' && c != ')' &&
      ui->value->text().count() + 3 <= 255) {
    ui->value->setText(ui->value->text() + "ln(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  } else if (ui->value->text() == "0") {
    ui->value->setText("ln(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttonsqrt_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if ((c < '0' || c > '9') && c != '.' && c != 'x' && c != ')' &&
      ui->value->text().count() + 5 <= 255) {
    ui->value->setText(ui->value->text() + "sqrt(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  } else if (ui->value->text() == "0") {
    ui->value->setText("sqrt(");
    braces++;
    iszero = 0;
    isdot = 0;
    checkfont();
  }
}

void MainWindow::buttonx_clicked() {
  QChar c = ui->value->text().at(ui->value->text().size() - 1);
  if ((c < '0' || c > '9') && c != '.' && c != 'x' &&
      ui->value->text().count() + 1 <= 255) {
    ui->value->setText(ui->value->text() + "x");
    checkfont();
  } else if (ui->value->text() == "0") {
    ui->value->setText("x");
    checkfont();
  }
}

void MainWindow::zoom_in_clicked() {
  if (plotstart + 0.5 < plotfinish - 0.5) {
    plotstart += 0.5;
    plotfinish -= 0.5;
    drawPlot(ui->value->text(), plotstart, plotfinish);
  }
}

void MainWindow::zoom_out_clicked() {
  if (plotstart >= -1000000 && plotfinish <= 1000000) {
    plotstart -= 0.5;
    plotfinish += 0.5;
    drawPlot(ui->value->text(), plotstart, plotfinish);
  }
}

void MainWindow::Economy_clicked() {
  if (iscalcusopen == 0) {
    this->releaseKeyboard();
    ui->allpayment->setText("0");
    ui->overpayment->setText("0");
    ui->creditspan->setValue(0);
    ui->percent->setValue(0);
    ui->monthlypayment->setText("0");
    ui->creditsum->setValue(0);
    iscalcusopen = 1;
    ui->Economy->setText("<");
    if (isgraphopen) {
      this->setFixedSize(1150, 691);
    } else {
      this->setFixedSize(1150, 420);
    }
  } else {
    this->grabKeyboard();
    if (isgraphopen) {
      this->setFixedSize(640, 691);
    } else {
      this->setFixedSize(640, 420);
    }
    iscalcusopen = 0;
    ui->Economy->setText(">");
  }
}

void MainWindow::calculate_clicked() {
  double monthly_payment, overpayment, allsum, creditsum, creditspan, percent,
      diffsum, firstpayment;
  overpayment = allsum = 0;
  if (ui->creditsum->value() > 0 && ui->creditspan->value() > 0 &&
      ui->percent->value() > 0) {
    creditsum = ui->creditsum->value();
    creditspan = ui->creditspan->value();
    percent = ui->percent->value();
    if (ui->whichmeasurement->currentIndex() == 0) {
      creditspan *= 12;
    }
    if (ui->type1->isChecked()) {
      monthly_payment = creditCalc(creditsum, creditspan, percent, 1, &diffsum,
                                   &firstpayment);
      allsum = creditspan * monthly_payment;
      overpayment = allsum - creditsum;
      ui->monthlypayment->setText(QString::number(monthly_payment));
    } else if (ui->type2->isChecked()) {
      monthly_payment = creditCalc(creditsum, creditspan, percent, 2, &diffsum,
                                   &firstpayment);
      allsum = diffsum;
      overpayment = allsum - creditsum;
      ui->monthlypayment->setText(QString::number(firstpayment) + ".." +
                                  QString::number(monthly_payment));
    }
    ui->overpayment->setText(QString::number(overpayment));
    ui->allpayment->setText(QString::number(allsum));
  }
}
