#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_uncheckAButton_clicked();

    void on_checkAButton_clicked();

    void on_uncheckBButton_clicked();

    void on_checkBButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
