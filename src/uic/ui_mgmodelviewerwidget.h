/********************************************************************************
** Form generated from reading UI file 'mgmodelviewerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MGMODELVIEWERWIDGET_H
#define UI_MGMODELVIEWERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MGModelViewerWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabNodes;
    QHBoxLayout *horizontalLayout_5;
    QTreeView *nodeTreeView;
    QWidget *tabAnimations;
    QHBoxLayout *horizontalLayout_4;
    QTableView *animTableView;
    QWidget *tabMeshes;
    QHBoxLayout *horizontalLayout_2;
    QTableView *meshTableView;
    QWidget *tabMaterials;
    QHBoxLayout *horizontalLayout;
    QTableView *materialTableView;

    void setupUi(QWidget *MGModelViewerWidget)
    {
        if (MGModelViewerWidget->objectName().isEmpty())
            MGModelViewerWidget->setObjectName(QString::fromUtf8("MGModelViewerWidget"));
        MGModelViewerWidget->resize(1089, 670);
        verticalLayout = new QVBoxLayout(MGModelViewerWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(MGModelViewerWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMaximumSize(QSize(16777215, 250));
        tabNodes = new QWidget();
        tabNodes->setObjectName(QString::fromUtf8("tabNodes"));
        horizontalLayout_5 = new QHBoxLayout(tabNodes);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        nodeTreeView = new QTreeView(tabNodes);
        nodeTreeView->setObjectName(QString::fromUtf8("nodeTreeView"));
        nodeTreeView->setEditTriggers(QAbstractItemView::EditKeyPressed);

        horizontalLayout_5->addWidget(nodeTreeView);

        tabWidget->addTab(tabNodes, QString());
        tabAnimations = new QWidget();
        tabAnimations->setObjectName(QString::fromUtf8("tabAnimations"));
        tabAnimations->setMinimumSize(QSize(1083, 0));
        horizontalLayout_4 = new QHBoxLayout(tabAnimations);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        animTableView = new QTableView(tabAnimations);
        animTableView->setObjectName(QString::fromUtf8("animTableView"));
        animTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        animTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        animTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        animTableView->setShowGrid(false);
        animTableView->verticalHeader()->setVisible(false);
        animTableView->verticalHeader()->setMinimumSectionSize(22);
        animTableView->verticalHeader()->setDefaultSectionSize(22);

        horizontalLayout_4->addWidget(animTableView);

        tabWidget->addTab(tabAnimations, QString());
        tabMeshes = new QWidget();
        tabMeshes->setObjectName(QString::fromUtf8("tabMeshes"));
        horizontalLayout_2 = new QHBoxLayout(tabMeshes);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        meshTableView = new QTableView(tabMeshes);
        meshTableView->setObjectName(QString::fromUtf8("meshTableView"));
        meshTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        meshTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        meshTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        meshTableView->setShowGrid(false);
        meshTableView->verticalHeader()->setVisible(false);
        meshTableView->verticalHeader()->setMinimumSectionSize(22);
        meshTableView->verticalHeader()->setDefaultSectionSize(22);

        horizontalLayout_2->addWidget(meshTableView);

        tabWidget->addTab(tabMeshes, QString());
        tabMaterials = new QWidget();
        tabMaterials->setObjectName(QString::fromUtf8("tabMaterials"));
        horizontalLayout = new QHBoxLayout(tabMaterials);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        materialTableView = new QTableView(tabMaterials);
        materialTableView->setObjectName(QString::fromUtf8("materialTableView"));
        materialTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        materialTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        materialTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        materialTableView->setShowGrid(false);
        materialTableView->verticalHeader()->setVisible(false);
        materialTableView->verticalHeader()->setMinimumSectionSize(22);
        materialTableView->verticalHeader()->setDefaultSectionSize(22);

        horizontalLayout->addWidget(materialTableView);

        tabWidget->addTab(tabMaterials, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(MGModelViewerWidget);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MGModelViewerWidget);
    } // setupUi

    void retranslateUi(QWidget *MGModelViewerWidget)
    {
        MGModelViewerWidget->setWindowTitle(QCoreApplication::translate("MGModelViewerWidget", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabNodes), QCoreApplication::translate("MGModelViewerWidget", "Nodes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAnimations), QCoreApplication::translate("MGModelViewerWidget", "Animations", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMeshes), QCoreApplication::translate("MGModelViewerWidget", "Meshes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMaterials), QCoreApplication::translate("MGModelViewerWidget", "Materials", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MGModelViewerWidget: public Ui_MGModelViewerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MGMODELVIEWERWIDGET_H
