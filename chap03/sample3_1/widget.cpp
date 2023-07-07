#include "widget.h"
#include "tperson.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    boy = new TPerson("小明", this);
    girl = new TPerson("小红", this);
    girl->setAge(20);
    boy->setProperty("sex", "boy");
    girl->setProperty("sex", "girl");
    ui->spinBoy->setProperty("isBoy", true);
    ui->spinGirl->setProperty("isBoy", false);
    connect(boy,SIGNAL(ageChanged(int)),ui->spinBoy,SLOT(setValue(int)));
    connect(girl,SIGNAL(ageChanged(int)),ui->spinGirl,SLOT(setValue(int)));
    connect(boy,SIGNAL(ageChanged(int)),this,SLOT(do_ageChanged(int)));
    connect(girl,SIGNAL(ageChanged(int)),this,SLOT(do_ageChanged(int)));
    connect(ui->spinBoy,SIGNAL(valueChanged(int)),this,SLOT(do_spinChanged(int)));
    connect(ui->spinGirl,SIGNAL(valueChanged(int)),this,SLOT(do_spinChanged(int)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_ageChanged(int value)
{
    TPerson *person = qobject_cast<TPerson*>(sender());
    QString str = QString("%1, %2, 年龄 = %3")
            .arg(person->property("name").toString())
            .arg(person->property("sex").toString())
            .arg(value);
    ui->plainTextEdit->appendPlainText(str);
}

void Widget::do_spinChanged(int arg1)
{
    QSpinBox *spinBox = qobject_cast<QSpinBox*>(sender());
    if(spinBox->property("isBoy").toBool())
        boy->setAge(arg1);
    else
        girl->setAge(arg1);
}


void Widget::on_btn_BoyInc_clicked()
{
    boy->incAge();
}


void Widget::on_btn_GirlInc_clicked()
{
    girl->incAge();
}


void Widget::on_btn_Clear_clicked()
{
    ui->plainTextEdit->clear();
}

