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
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
