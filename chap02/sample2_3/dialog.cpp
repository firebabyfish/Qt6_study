#include "dialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>

void Dialog::do_chkBoxUnder(bool checked)
{
    QFont font = txtEdit->font();
    font.setUnderline(checked);
    txtEdit->setFont(font);
}

void Dialog::do_chkBoxItalic(bool checked)
{
    QFont font = txtEdit->font();
    font.setItalic(checked);
    txtEdit->setFont(font);
}

void Dialog::do_chkBoxBold(bool checked)
{
    QFont font = txtEdit->font();
    font.setBold(checked);
    txtEdit->setFont(font);
}

void Dialog::do_setFontColor()
{
    QPalette plet = txtEdit->palette();
    if (radioBlack->isChecked())
        plet.setColor(QPalette::Text, Qt::black);
    else if (radioRed->isChecked())
        plet.setColor(QPalette::Text, Qt::red);
    else if (radioBlue->isChecked())
        plet.setColor(QPalette::Text, Qt::blue);
    txtEdit->setPalette(plet);
}

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    chkBoxUnder = new QCheckBox("下划线");
    chkBoxItalic = new QCheckBox("斜体");
    chkBoxBold = new QCheckBox("加粗");
    QHBoxLayout *HLay1 = new QHBoxLayout();
    HLay1->addWidget(chkBoxUnder);
    HLay1->addWidget(chkBoxItalic);
    HLay1->addWidget(chkBoxBold);

    radioBlack = new QRadioButton("黑色");
    radioRed = new QRadioButton("红色");
    radioBlue = new QRadioButton("蓝色");
    QHBoxLayout *HLay2 = new QHBoxLayout();
    HLay2->addWidget(radioBlack);
    HLay2->addWidget(radioRed);
    HLay2->addWidget(radioBlue);

    txtEdit = new QPlainTextEdit;
    txtEdit->setPlainText("Hello wolrd\n手工创建");
    QFont font = txtEdit->font(); //此处多理解一下
    font.setPointSize(20);
    txtEdit->setFont(font);

    btnOK = new QPushButton("确定");
    btnCancel = new QPushButton("取消");
    btnClose = new QPushButton("退出");
    QHBoxLayout *HLay3 = new QHBoxLayout();
    HLay3->addStretch();
    HLay3->addWidget(btnOK);
    HLay3->addWidget(btnCancel);
    HLay3->addStretch();
    HLay3->addWidget(btnClose);

    QVBoxLayout *Vlay = new QVBoxLayout(this);
    Vlay->addLayout(HLay1);
    Vlay->addLayout(HLay2);
    Vlay->addWidget(txtEdit);
    Vlay->addLayout(HLay3);
    setLayout(Vlay);

    connect(chkBoxUnder, SIGNAL(clicked(bool)), this, SLOT(do_chkBoxUnder(bool)));
    connect(chkBoxItalic, SIGNAL(clicked(bool)), this, SLOT(do_chkBoxItalic(bool)));
    connect(chkBoxBold, SIGNAL(clicked(bool)), this, SLOT(do_chkBoxBold(bool)));

    connect(radioBlack, SIGNAL(clicked(bool)), this, SLOT(do_setFontColor()));
    connect(radioRed, SIGNAL(clicked(bool)), this, SLOT(do_setFontColor()));
    connect(radioBlue, SIGNAL(clicked(bool)), this, SLOT(do_setFontColor()));

    connect(btnOK, SIGNAL(clicked(bool)), this, SLOT(accept()));
    connect(btnCancel, SIGNAL(clicked(bool)), this, SLOT(reject()));
    connect(btnClose, SIGNAL(clicked(bool)), this, SLOT(close()));
}

Dialog::~Dialog()
{
}

