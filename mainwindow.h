#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "player.h"
#include <QMainWindow>
#include <QList>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Player * player;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void observa_tempo(qint64 position);
    void on_actionAbrir_2_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
