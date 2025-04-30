#ifndef DLG_LIST_H
#define DLG_LIST_H

#include "qaudiooutput.h"
#include <QDialog>

namespace Ui {
class dlg_list;
}

class dlg_list : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_list(QWidget *parent = nullptr);
    ~dlg_list();

private slots:


    void on_file_btn_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

private:


};

#endif // DLG_LIST_H
