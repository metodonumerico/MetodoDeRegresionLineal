/********************************************************************************
** Form generated from reading UI file 'regresionl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGRESIONL_H
#define UI_REGRESIONL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regresionL
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QTextEdit *Texto;
    QDoubleSpinBox *Xi1;
    QDoubleSpinBox *Xi2;
    QDoubleSpinBox *Xi3;
    QDoubleSpinBox *Xi4;
    QDoubleSpinBox *Xi5;
    QDoubleSpinBox *Xi6;
    QDoubleSpinBox *Xi7;
    QDoubleSpinBox *Yi1;
    QDoubleSpinBox *Yi2;
    QDoubleSpinBox *Yi3;
    QDoubleSpinBox *Yi4;
    QDoubleSpinBox *Yi5;
    QDoubleSpinBox *Yi6;
    QDoubleSpinBox *Yi7;
    QPushButton *Metodo;
    QPushButton *pushButton_2;
    QPushButton *Clean;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *regresionL)
    {
        if (regresionL->objectName().isEmpty())
            regresionL->setObjectName(QStringLiteral("regresionL"));
        regresionL->resize(865, 475);
        centralWidget = new QWidget(regresionL);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(430, 10, 281, 41));
        QFont font;
        font.setFamily(QStringLiteral("Century Schoolbook"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 60, 21, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 100, 21, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 140, 21, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 180, 21, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 220, 21, 31));
        label_6->setFont(font1);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 260, 21, 31));
        label_7->setFont(font1);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(210, 60, 21, 21));
        label_9->setFont(font1);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(210, 180, 21, 21));
        label_10->setFont(font1);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(210, 100, 21, 21));
        label_11->setFont(font1);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(210, 140, 21, 21));
        label_12->setFont(font1);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(210, 220, 21, 21));
        label_13->setFont(font1);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(210, 260, 21, 21));
        label_14->setFont(font1);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(210, 300, 21, 21));
        label_15->setFont(font1);
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(60, 300, 21, 31));
        label_16->setFont(font1);
        Texto = new QTextEdit(centralWidget);
        Texto->setObjectName(QStringLiteral("Texto"));
        Texto->setGeometry(QRect(340, 60, 471, 261));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial Narrow"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        Texto->setFont(font2);
        Xi1 = new QDoubleSpinBox(centralWidget);
        Xi1->setObjectName(QStringLiteral("Xi1"));
        Xi1->setGeometry(QRect(90, 60, 62, 22));
        Xi2 = new QDoubleSpinBox(centralWidget);
        Xi2->setObjectName(QStringLiteral("Xi2"));
        Xi2->setGeometry(QRect(90, 100, 62, 22));
        Xi3 = new QDoubleSpinBox(centralWidget);
        Xi3->setObjectName(QStringLiteral("Xi3"));
        Xi3->setGeometry(QRect(90, 140, 62, 22));
        Xi4 = new QDoubleSpinBox(centralWidget);
        Xi4->setObjectName(QStringLiteral("Xi4"));
        Xi4->setGeometry(QRect(90, 180, 62, 22));
        Xi5 = new QDoubleSpinBox(centralWidget);
        Xi5->setObjectName(QStringLiteral("Xi5"));
        Xi5->setGeometry(QRect(90, 220, 62, 22));
        Xi6 = new QDoubleSpinBox(centralWidget);
        Xi6->setObjectName(QStringLiteral("Xi6"));
        Xi6->setGeometry(QRect(90, 260, 62, 22));
        Xi7 = new QDoubleSpinBox(centralWidget);
        Xi7->setObjectName(QStringLiteral("Xi7"));
        Xi7->setGeometry(QRect(90, 300, 62, 22));
        Yi1 = new QDoubleSpinBox(centralWidget);
        Yi1->setObjectName(QStringLiteral("Yi1"));
        Yi1->setGeometry(QRect(240, 60, 62, 22));
        Yi2 = new QDoubleSpinBox(centralWidget);
        Yi2->setObjectName(QStringLiteral("Yi2"));
        Yi2->setGeometry(QRect(240, 100, 62, 22));
        Yi3 = new QDoubleSpinBox(centralWidget);
        Yi3->setObjectName(QStringLiteral("Yi3"));
        Yi3->setGeometry(QRect(240, 140, 62, 22));
        Yi4 = new QDoubleSpinBox(centralWidget);
        Yi4->setObjectName(QStringLiteral("Yi4"));
        Yi4->setGeometry(QRect(240, 180, 62, 22));
        Yi5 = new QDoubleSpinBox(centralWidget);
        Yi5->setObjectName(QStringLiteral("Yi5"));
        Yi5->setGeometry(QRect(240, 220, 62, 22));
        Yi6 = new QDoubleSpinBox(centralWidget);
        Yi6->setObjectName(QStringLiteral("Yi6"));
        Yi6->setGeometry(QRect(240, 260, 62, 22));
        Yi7 = new QDoubleSpinBox(centralWidget);
        Yi7->setObjectName(QStringLiteral("Yi7"));
        Yi7->setGeometry(QRect(240, 300, 62, 22));
        Metodo = new QPushButton(centralWidget);
        Metodo->setObjectName(QStringLiteral("Metodo"));
        Metodo->setGeometry(QRect(60, 350, 141, 51));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        Metodo->setFont(font3);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 350, 121, 61));
        pushButton_2->setFont(font3);
        Clean = new QPushButton(centralWidget);
        Clean->setObjectName(QStringLiteral("Clean"));
        Clean->setGeometry(QRect(340, 350, 151, 51));
        Clean->setFont(font3);
        regresionL->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(regresionL);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 865, 21));
        regresionL->setMenuBar(menuBar);
        mainToolBar = new QToolBar(regresionL);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        regresionL->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(regresionL);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        regresionL->setStatusBar(statusBar);

        retranslateUi(regresionL);
        QObject::connect(pushButton_2, SIGNAL(clicked()), regresionL, SLOT(close()));

        QMetaObject::connectSlotsByName(regresionL);
    } // setupUi

    void retranslateUi(QMainWindow *regresionL)
    {
        regresionL->setWindowTitle(QApplication::translate("regresionL", "regresionL", Q_NULLPTR));
        label->setText(QApplication::translate("regresionL", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">METODO REGRESION LINEAL</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("regresionL", "X1", Q_NULLPTR));
        label_3->setText(QApplication::translate("regresionL", "X2", Q_NULLPTR));
        label_4->setText(QApplication::translate("regresionL", "X3", Q_NULLPTR));
        label_5->setText(QApplication::translate("regresionL", "X4", Q_NULLPTR));
        label_6->setText(QApplication::translate("regresionL", "X5", Q_NULLPTR));
        label_7->setText(QApplication::translate("regresionL", "X6", Q_NULLPTR));
        label_9->setText(QApplication::translate("regresionL", "Y1", Q_NULLPTR));
        label_10->setText(QApplication::translate("regresionL", "Y4", Q_NULLPTR));
        label_11->setText(QApplication::translate("regresionL", "Y2", Q_NULLPTR));
        label_12->setText(QApplication::translate("regresionL", "Y3", Q_NULLPTR));
        label_13->setText(QApplication::translate("regresionL", "Y6", Q_NULLPTR));
        label_14->setText(QApplication::translate("regresionL", "Y6", Q_NULLPTR));
        label_15->setText(QApplication::translate("regresionL", "Y7", Q_NULLPTR));
        label_16->setText(QApplication::translate("regresionL", "X7", Q_NULLPTR));
        Metodo->setText(QApplication::translate("regresionL", "PROCESAR", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("regresionL", "SALIR", Q_NULLPTR));
        Clean->setText(QApplication::translate("regresionL", "BORRAR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class regresionL: public Ui_regresionL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGRESIONL_H
