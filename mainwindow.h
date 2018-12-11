#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "RepEsp.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(RepEsp *re, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_boutonCreerPaquet_clicked();

    void on_boutonModifierPaquet_clicked();

private:
    Ui::MainWindow *ui;
    RepEsp *re;
    void majCombobox();
};

#endif // MAINWINDOW_H
