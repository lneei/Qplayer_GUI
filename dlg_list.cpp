#include "dlg_list.h"
#include "ui_dlg_list.h"


dlg_list::dlg_list(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dlg_list)
{
    ui->setupUi(this);


}

dlg_list::~dlg_list()
{
    delete ui;
}




v




