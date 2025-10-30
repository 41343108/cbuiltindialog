#ifndef CBUILTINDLG_H
#define CBUILTINDLG_H

#include <QDialog>
#include <QtWidgets>

class CBuiltinDlg : public QDialog
{
    Q_OBJECT

public:
    CBuiltinDlg(QWidget *parent  = 0);
    ~CBuiltinDlg();

private:
    QTextEdit* displayTextEdit;
    QPushButton* colorPushBtn;
    QPushButton* errorPushBtn;
    QPushButton* filePushBtn;
    QPushButton* fontPushBtn;
    QPushButton* inputPushBtn;
    QPushButton* pagePushBtn;
    QPushButton* progressPushBtn;
    QPushButton* printPushBtn;
private slots:
    void doPushBtn();
};
#endif // CBUILDINDLG_H
