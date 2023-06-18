#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_checkBox_underline_clicked(bool checked);

    void on_checkBox_itailc_clicked(bool checked);

    void on_checkBox_bold_clicked(bool checked);

    void on_pushButton_Clear_clicked(bool checked);

    void do_setFontColor();     //设置文字颜色的自定义槽函数

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
