#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::slotBorrarLabel()
{
    ui->LTextoRecibido->clear();

}

void Widget::on_BEnviar_pressed()
{
    QString texto = ui->LETexto->text();
    ui->LTextoRecibido->setText(texto);
}

