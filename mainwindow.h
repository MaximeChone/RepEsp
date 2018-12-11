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

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_boutonCreerCarte_clicked();

    void on_boutonModifierCarte_clicked();

    void on_boutonSupprimerCarte_clicked();

    void on_boutonSupprimerPaquet_clicked();

    void on_bouton_maison_clicked();

private:
    Ui::MainWindow *ui;
    RepEsp *re;
    void majCombobox();
    void majCombobox1();
    void majCombobox2();
    void majCombobox3();
    void majCombobox4();
    void majCombobox5();
    void majCombobox6();
    void majCombobox7();

};

#endif // MAINWINDOW_H
