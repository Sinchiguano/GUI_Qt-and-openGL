#ifndef FINDCRAP_H
#define FINDCRAP_H

#include <QWidget>

namespace Ui {
class findcrap;
}

class findcrap : public QWidget
{
    Q_OBJECT

public:
    explicit findcrap(QWidget *parent = 0);
    ~findcrap();

private slots:
    void on_pushButton_clicked();

private:
    Ui::findcrap *ui;
};

#endif // FINDCRAP_H
