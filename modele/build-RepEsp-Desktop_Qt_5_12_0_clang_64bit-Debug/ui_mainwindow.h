/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *PageDeGardos;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *boutonCreerCarte;
    QPushButton *boutonModifierCarte;
    QPushButton *boutonSupprimerCarte;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *boutonCreerPaquet;
    QPushButton *boutonModifierPaquet;
    QPushButton *boutonSupprimerPaquet;
    QPushButton *boutonReviser;
    QPushButton *boutonExporter;
    QPushButton *boutonImporter;
    QWidget *CreerUnPaquito;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *tab;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QWidget *tab_2;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QPushButton *pushButton_3;
    QWidget *tab_3;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_4;
    QWidget *tab_4;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_5;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QWidget *tab_5;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QPushButton *pushButton_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(960, 540);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 961, 541));
        PageDeGardos = new QWidget();
        PageDeGardos->setObjectName(QString::fromUtf8("PageDeGardos"));
        verticalLayoutWidget = new QWidget(PageDeGardos);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 130, 931, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        boutonCreerCarte = new QPushButton(verticalLayoutWidget);
        boutonCreerCarte->setObjectName(QString::fromUtf8("boutonCreerCarte"));

        horizontalLayout->addWidget(boutonCreerCarte);

        boutonModifierCarte = new QPushButton(verticalLayoutWidget);
        boutonModifierCarte->setObjectName(QString::fromUtf8("boutonModifierCarte"));

        horizontalLayout->addWidget(boutonModifierCarte);

        boutonSupprimerCarte = new QPushButton(verticalLayoutWidget);
        boutonSupprimerCarte->setObjectName(QString::fromUtf8("boutonSupprimerCarte"));

        horizontalLayout->addWidget(boutonSupprimerCarte);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        boutonCreerPaquet = new QPushButton(verticalLayoutWidget);
        boutonCreerPaquet->setObjectName(QString::fromUtf8("boutonCreerPaquet"));

        horizontalLayout_2->addWidget(boutonCreerPaquet);

        boutonModifierPaquet = new QPushButton(verticalLayoutWidget);
        boutonModifierPaquet->setObjectName(QString::fromUtf8("boutonModifierPaquet"));

        horizontalLayout_2->addWidget(boutonModifierPaquet);

        boutonSupprimerPaquet = new QPushButton(verticalLayoutWidget);
        boutonSupprimerPaquet->setObjectName(QString::fromUtf8("boutonSupprimerPaquet"));

        horizontalLayout_2->addWidget(boutonSupprimerPaquet);


        verticalLayout->addLayout(horizontalLayout_2);

        boutonReviser = new QPushButton(PageDeGardos);
        boutonReviser->setObjectName(QString::fromUtf8("boutonReviser"));
        boutonReviser->setGeometry(QRect(20, 250, 911, 121));
        QFont font;
        font.setPointSize(50);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        boutonReviser->setFont(font);
        boutonExporter = new QPushButton(PageDeGardos);
        boutonExporter->setObjectName(QString::fromUtf8("boutonExporter"));
        boutonExporter->setGeometry(QRect(20, 400, 431, 71));
        boutonImporter = new QPushButton(PageDeGardos);
        boutonImporter->setObjectName(QString::fromUtf8("boutonImporter"));
        boutonImporter->setGeometry(QRect(500, 400, 431, 71));
        tabWidget->addTab(PageDeGardos, QString());
        CreerUnPaquito = new QWidget();
        CreerUnPaquito->setObjectName(QString::fromUtf8("CreerUnPaquito"));
        lineEdit = new QLineEdit(CreerUnPaquito);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(480, 70, 241, 21));
        label = new QLabel(CreerUnPaquito);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 70, 141, 16));
        pushButton = new QPushButton(CreerUnPaquito);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 140, 114, 32));
        tabWidget->addTab(CreerUnPaquito, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(430, 60, 281, 32));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 70, 131, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 110, 161, 20));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(440, 110, 261, 21));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 180, 161, 32));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 80, 131, 16));
        comboBox_2 = new QComboBox(tab_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(380, 70, 231, 32));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 120, 114, 32));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 70, 241, 16));
        comboBox_3 = new QComboBox(tab_3);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(420, 60, 231, 32));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(350, 110, 59, 16));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(350, 140, 59, 16));
        lineEdit_3 = new QLineEdit(tab_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(430, 110, 201, 21));
        lineEdit_4 = new QLineEdit(tab_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(430, 140, 201, 21));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(360, 190, 114, 32));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        comboBox_4 = new QComboBox(tab_4);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(480, 80, 241, 32));
        comboBox_5 = new QComboBox(tab_4);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(480, 130, 241, 32));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(240, 90, 241, 16));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(360, 140, 111, 16));
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(410, 260, 114, 32));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(420, 180, 59, 16));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(420, 220, 59, 16));
        lineEdit_5 = new QLineEdit(tab_4);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(480, 180, 231, 21));
        lineEdit_6 = new QLineEdit(tab_4);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(480, 220, 231, 21));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(190, 90, 251, 16));
        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(310, 130, 121, 16));
        comboBox_6 = new QComboBox(tab_5);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(460, 80, 231, 32));
        comboBox_7 = new QComboBox(tab_5);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));
        comboBox_7->setGeometry(QRect(460, 120, 231, 32));
        pushButton_6 = new QPushButton(tab_5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(400, 190, 114, 32));
        tabWidget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        boutonCreerCarte->setText(QApplication::translate("MainWindow", "Cr\303\251er une carte", nullptr));
        boutonModifierCarte->setText(QApplication::translate("MainWindow", "Modifier un carte", nullptr));
        boutonSupprimerCarte->setText(QApplication::translate("MainWindow", "Supprimer une carte", nullptr));
        boutonCreerPaquet->setText(QApplication::translate("MainWindow", "Cr\303\251er un paquet", nullptr));
        boutonModifierPaquet->setText(QApplication::translate("MainWindow", "Modifier un paquet", nullptr));
        boutonSupprimerPaquet->setText(QApplication::translate("MainWindow", "Supprimer un paquet", nullptr));
        boutonReviser->setText(QApplication::translate("MainWindow", "R\303\251viser", nullptr));
        boutonExporter->setText(QApplication::translate("MainWindow", "Exporter un paquet", nullptr));
        boutonImporter->setText(QApplication::translate("MainWindow", "Importer un paquet", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(PageDeGardos), QApplication::translate("MainWindow", "Page de gardos", nullptr));
        label->setText(QApplication::translate("MainWindow", "Nom du paquet :", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Cr\303\251er", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(CreerUnPaquito), QApplication::translate("MainWindow", "Ajouter un paquet", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Paquet \303\240 renommer :", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Nouveau nom du paquet :", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Renommer le paquet", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Renommer un paquet", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Paquet \303\240 supprimer :", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Supprimer un paquet", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Paquet dans lequel ajouter une carte :", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Recto :", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Verso :", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Cr\303\251er", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Ajouter une carte", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Paquet contenant la carte \303\240 modifier :", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Carte \303\240 modifier :", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Recto :", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Verso :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Modifier une carte", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Paquet contenant la carte \303\240 supprimer :", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Carte \303\240 supprimer :", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Supprimer une carte", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
