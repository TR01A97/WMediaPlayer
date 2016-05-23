#include "telareproducao.h"
#include "ui_telareproducao.h"

TelaReproducao::TelaReproducao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaReproducao)
{
    p = new Player;
    ui->setupUi(this);
}

TelaReproducao::~TelaReproducao()
{
    delete ui;
}

void TelaReproducao::on_pushButton_clicked()
{
    p->addmusic("/home/userone/Downloads/Banda Catedral/01 Inexoravelmente.mp3");
    p->play();
}
