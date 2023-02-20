#ifndef ITEMWIDGET_H
#define ITEMWIDGET_H
#include <QListWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QMessageBox>
#include<QLabel>
class ItemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ItemWidget(const QString &text, QListWidget *parent = nullptr);
    //QPushButton
    QString text() const;
    QPushButton* m_editButton_return();
    QPushButton* m_deleteButton_return();

signals:
    void editButtonClicked();
    void deleteButtonClicked();

private slots:
    void onEditButtonClicked();

    void onDeleteButtonClicked();


private:
    QString m_text;
    QPushButton *m_editButton;
    QPushButton *m_deleteButton;
};
#endif // ITEMWIDGET_H
