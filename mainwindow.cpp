#include "mainwindow.h"
#include "RepEsp.hpp"
#include <ui_mainwindow.h>

#define TAB_HOME 0
#define TAB_CREER_PAQUET 1
#define TAB_RENOMMER_PAQUET 2

MainWindow::MainWindow(RepEsp *re, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->re = re;
    majCombobox();
    Paquet* selectionCombobox;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    re->ajouterPaquet(ui->lineEdit->text().toStdString());
    majCombobox();
    ui->lineEdit->clear();
}

void MainWindow::majCombobox() {
    ui->comboBox->clear();
    for (int i = 0; i < re->getNbPaquets(); i++) {
        ui->comboBox->addItem(QString::fromStdString(re->getPaquet(i)->getNom()));
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    re->renommerPaquet(*re->getPaquet(ui->comboBox->currentIndex()), ui->lineEdit_2->text().toStdString());
    std::cout << ui->comboBox->currentIndex() << std::endl;
    majCombobox();
}

void MainWindow::on_boutonCreerPaquet_clicked()
{
    ui->tabWidget->setCurrentIndex(TAB_CREER_PAQUET);
}

void MainWindow::on_boutonModifierPaquet_clicked()
{
    ui->tabWidget->setCurrentIndex(TAB_RENOMMER_PAQUET);
}
