#include "mainwindow.h"
#include "RepEsp.hpp"
#include <ui_mainwindow.h>

#define TAB_HOME 0
#define TAB_CREER_PAQUET 1
#define TAB_RENOMMER_PAQUET 2
#define TAB_SUPPRIMER_PAQUET 3
#define TAB_CREER_CARTE 4
#define TAB_RENOMMER_CARTE 5
#define TAB_SUPPRIMER_CARTE 6

MainWindow::MainWindow(RepEsp *re, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->re = re;
    majCombobox();
    ui->tabWidget->setCurrentIndex(TAB_HOME);
    ui->tabWidget->tabBar()->hide();
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

void MainWindow::majCombobox1() {
    ui->comboBox->clear();
    for (size_t i = 0; i < re->getNbPaquets(); i++) {
        ui->comboBox->addItem(QString::fromStdString(re->getPaquet(static_cast<int>(i))->getNom()));
    }
}

void MainWindow::majCombobox2() {
    ui->comboBox_2->clear();
    for (size_t i = 0; i < re->getNbPaquets(); i++) {
        ui->comboBox_2->addItem(QString::fromStdString(re->getPaquet(static_cast<int>(i))->getNom()));
    }
}

void MainWindow::majCombobox3() {
    ui->comboBox_3->clear();
    for (size_t i = 0; i < re->getNbPaquets(); i++) {
        ui->comboBox_3->addItem(QString::fromStdString(re->getPaquet(static_cast<int>(i))->getNom()));
    }
}

void MainWindow::majCombobox4() {
    ui->comboBox_4->clear();
    for (size_t i = 0; i < re->getNbPaquets(); i++) {
        ui->comboBox_4->addItem(QString::fromStdString(re->getPaquet(static_cast<int>(i))->getNom()));
    }
}

void MainWindow::majCombobox5() {
    ui->comboBox_5->clear();
    for (size_t i = 0; i < re->getNbCartes(ui->comboBox_4->currentIndex()); i++) {
        ui->comboBox_5->addItem(QString::fromStdString(re->getCarte(ui->comboBox_4->currentIndex(), static_cast<int>(i))->getRecto()));
    }
}

void MainWindow::majCombobox6() {
    ui->comboBox_6->clear();
    for (size_t i = 0; i < re->getNbPaquets(); i++) {
        ui->comboBox_6->addItem(QString::fromStdString(re->getPaquet(static_cast<int>(i))->getNom()));
    }
}

void MainWindow::majCombobox7() {
    ui->comboBox_7->clear();
    for (size_t i = 0; i < re->getNbCartes(ui->comboBox_4->currentIndex()); i++) {
        ui->comboBox_7->addItem(QString::fromStdString(re->getCarte(ui->comboBox_4->currentIndex(), static_cast<int>(i))->getRecto()));
    }
}

void MainWindow::majCombobox() {
    majCombobox1();
    majCombobox2();
    majCombobox3();
    majCombobox4();
    majCombobox5();
    majCombobox6();
    majCombobox7();
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

void MainWindow::on_pushButton_3_clicked()
{
    re->supprimerPaquet(*re->getPaquet(ui->comboBox_2->currentIndex()));
    majCombobox();
}

void MainWindow::on_pushButton_4_clicked()
{
    re->ajouterCarte(*re->getPaquet(ui->comboBox_2->currentIndex()), ui->lineEdit_3->text().toStdString(), ui->lineEdit_4->text().toStdString());
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    majCombobox();
}

void MainWindow::on_pushButton_5_clicked()
{
    re->modifierCarte(*re->getPaquet(ui->comboBox_4->currentIndex()), *re->getCarte(ui->comboBox_4->currentIndex(), ui->comboBox_5->currentIndex()), ui->lineEdit_5->text().toStdString(), ui->lineEdit_6->text().toStdString());
    majCombobox();
}

void MainWindow::on_pushButton_6_clicked()
{
    re->supprimerCarte(*re->getPaquet(ui->comboBox_6->currentIndex()), *re->getCarte(ui->comboBox_6->currentIndex(), ui->comboBox_7->currentIndex()));
    majCombobox();
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->tabWidget->setCurrentIndex(TAB_HOME);
}

void MainWindow::on_boutonCreerCarte_clicked()
{
    ui->tabWidget->setCurrentIndex(TAB_CREER_CARTE);
}

void MainWindow::on_boutonModifierCarte_clicked()
{
    ui->tabWidget->setCurrentIndex(TAB_RENOMMER_CARTE);
}

void MainWindow::on_boutonSupprimerCarte_clicked()
{
    ui->tabWidget->setCurrentIndex(TAB_SUPPRIMER_CARTE);
}

void MainWindow::on_boutonSupprimerPaquet_clicked()
{
    ui->tabWidget->setCurrentIndex(TAB_SUPPRIMER_PAQUET);
}
