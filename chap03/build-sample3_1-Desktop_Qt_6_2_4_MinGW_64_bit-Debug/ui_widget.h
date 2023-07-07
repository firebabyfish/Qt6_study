/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *boyAge;
    QPushButton *btn_GirlInc;
    QPushButton *btn_Clear;
    QLabel *girlAge;
    QPushButton *btn_BoyInc;
    QSpinBox *spinBoy;
    QPushButton *btn_ClassInfo;
    QSpinBox *spinGirl;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(482, 341);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        boyAge = new QLabel(Widget);
        boyAge->setObjectName(QString::fromUtf8("boyAge"));
        QFont font;
        font.setPointSize(10);
        boyAge->setFont(font);

        gridLayout->addWidget(boyAge, 0, 0, 1, 1);

        btn_GirlInc = new QPushButton(Widget);
        btn_GirlInc->setObjectName(QString::fromUtf8("btn_GirlInc"));

        gridLayout->addWidget(btn_GirlInc, 1, 2, 1, 1);

        btn_Clear = new QPushButton(Widget);
        btn_Clear->setObjectName(QString::fromUtf8("btn_Clear"));

        gridLayout->addWidget(btn_Clear, 1, 3, 1, 1);

        girlAge = new QLabel(Widget);
        girlAge->setObjectName(QString::fromUtf8("girlAge"));
        girlAge->setFont(font);

        gridLayout->addWidget(girlAge, 1, 0, 1, 1);

        btn_BoyInc = new QPushButton(Widget);
        btn_BoyInc->setObjectName(QString::fromUtf8("btn_BoyInc"));

        gridLayout->addWidget(btn_BoyInc, 0, 2, 1, 1);

        spinBoy = new QSpinBox(Widget);
        spinBoy->setObjectName(QString::fromUtf8("spinBoy"));
        spinBoy->setValue(10);

        gridLayout->addWidget(spinBoy, 0, 1, 1, 1);

        btn_ClassInfo = new QPushButton(Widget);
        btn_ClassInfo->setObjectName(QString::fromUtf8("btn_ClassInfo"));

        gridLayout->addWidget(btn_ClassInfo, 0, 3, 1, 1);

        spinGirl = new QSpinBox(Widget);
        spinGirl->setObjectName(QString::fromUtf8("spinGirl"));
        spinGirl->setValue(20);

        gridLayout->addWidget(spinGirl, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        boyAge->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\347\224\267\347\224\237\345\271\264\351\276\204", nullptr));
        btn_GirlInc->setText(QCoreApplication::translate("Widget", "girl\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btn_Clear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        girlAge->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\345\245\263\347\224\237\345\271\264\351\276\204", nullptr));
        btn_BoyInc->setText(QCoreApplication::translate("Widget", "boy\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btn_ClassInfo->setText(QCoreApplication::translate("Widget", "\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
