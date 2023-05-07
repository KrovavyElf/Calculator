
#include "calculator.h"
#include "./ui_calculator.h"
#include "integral.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}



void Calculator::on_pushButton_clicked()
{
    QString expression = ui->textEdit->toPlainText();
    integral integral (expression);

    QString answer = integral.solve();
    ui->label->setText(answer);
}

