#ifndef GOODS_H
#define GOODS_H

#include <QWidget>

namespace Ui {
class goods;
}

class goods : public QWidget
{
    Q_OBJECT

public:
    explicit goods(QWidget *parent = nullptr);
    ~goods();

private:
    Ui::goods *ui;
};

#endif // GOODS_H
