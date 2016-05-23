#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QUrl>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    player = new Player(nullptr);
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    player->play();
}

void MainWindow:: observa_tempo(qint64 position){
    position = position;
}

void MainWindow::on_actionAbrir_2_triggered()
{
    QList<QUrl> q = QFileDialog::getOpenFileUrls(this,"Selecione os arquivos",QUrl("./"),QString("mp3 Files (*.mp3*)"));

}

void iniciar_tabela(){

}

