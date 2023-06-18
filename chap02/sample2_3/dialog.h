#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

class QCheckBox;
class QRadioButton;
class QPushButton;
class QPlainTextEdit;

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;

    QRadioButton *radioBlack;
    QRadioButton *radioRed;
    QRadioButton *radioBlue;

    QPushButton *btnOK;
    QPushButton *btnCancel;
    QPushButton *btnClose;

    QPlainTextEdit *txtEdit;
private slots:
    void do_chkBoxUnder(bool checked);
    void do_chkBoxItalic(bool checked);
    void do_chkBoxBold(bool checked);
    void do_setFontColor();
public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
private:
};
#endif // DIALOG_H
