/********************************************************************************
** Form generated from reading UI file 'zmrgcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZMRGCONTROLDIALOG_H
#define UI_ZMRGCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZMRGControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZMRG;
    QLabel *labelZMRG_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZMRGControlDialog)
    {
        if (ZMRGControlDialog->objectName().isEmpty())
            ZMRGControlDialog->setObjectName(QStringLiteral("ZMRGControlDialog"));
        ZMRGControlDialog->resize(681, 384);
        ZMRGControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZMRGControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZMRGControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZMRGControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZMRG = new QLabel(ZMRGControlDialog);
        labelZMRG->setObjectName(QStringLiteral("labelZMRG"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZMRG);

        labelZMRG_int = new QLabel(ZMRGControlDialog);
        labelZMRG_int->setObjectName(QStringLiteral("labelZMRG_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZMRG_int);

        pushButtonAll = new QPushButton(ZMRGControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZMRGControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zMRG Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZMRGControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZMRGControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZMRGControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZMRGControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZMRGControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZMRGControlDialog)
    {
        ZMRGControlDialog->setWindowTitle(QApplication::translate("ZMRGControlDialog", "Select zMRG to Spend", nullptr));
        labelQuantity->setText(QApplication::translate("ZMRGControlDialog", "Quantity", nullptr));
        labelQuantity_int->setText(QApplication::translate("ZMRGControlDialog", "0", nullptr));
        labelZMRG->setText(QApplication::translate("ZMRGControlDialog", "zMRG", nullptr));
        labelZMRG_int->setText(QApplication::translate("ZMRGControlDialog", "0", nullptr));
        pushButtonAll->setText(QApplication::translate("ZMRGControlDialog", "Select/Deselect All", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZMRGControlDialog", "Is Spendable", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZMRGControlDialog: public Ui_ZMRGControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZMRGCONTROLDIALOG_H
