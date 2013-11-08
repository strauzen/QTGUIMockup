/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionAdd_Video;
    QAction *actionRemove_Video;
    QAction *actionMove_Video_Up;
    QAction *actionMove_Video_Down;
    QAction *actionPlay_Settings;
    QAction *actionCalibration;
    QAction *actionMatrix_Configuration;
    QAction *actionPicture_Adjoustment;
    QAction *actionHelp_Topics;
    QAction *actionAbout_Sioux_Video_Wall;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *rewindButton;
    QPushButton *playPauseButton;
    QPushButton *forwardButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuPlaylist;
    QMenu *menuConfiguration;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(241, 325);
        MainWindow->setMaximumSize(QSize(241, 325));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAdd_Video = new QAction(MainWindow);
        actionAdd_Video->setObjectName(QStringLiteral("actionAdd_Video"));
        actionRemove_Video = new QAction(MainWindow);
        actionRemove_Video->setObjectName(QStringLiteral("actionRemove_Video"));
        actionMove_Video_Up = new QAction(MainWindow);
        actionMove_Video_Up->setObjectName(QStringLiteral("actionMove_Video_Up"));
        actionMove_Video_Down = new QAction(MainWindow);
        actionMove_Video_Down->setObjectName(QStringLiteral("actionMove_Video_Down"));
        actionPlay_Settings = new QAction(MainWindow);
        actionPlay_Settings->setObjectName(QStringLiteral("actionPlay_Settings"));
        actionCalibration = new QAction(MainWindow);
        actionCalibration->setObjectName(QStringLiteral("actionCalibration"));
        actionMatrix_Configuration = new QAction(MainWindow);
        actionMatrix_Configuration->setObjectName(QStringLiteral("actionMatrix_Configuration"));
        actionPicture_Adjoustment = new QAction(MainWindow);
        actionPicture_Adjoustment->setObjectName(QStringLiteral("actionPicture_Adjoustment"));
        actionHelp_Topics = new QAction(MainWindow);
        actionHelp_Topics->setObjectName(QStringLiteral("actionHelp_Topics"));
        actionAbout_Sioux_Video_Wall = new QAction(MainWindow);
        actionAbout_Sioux_Video_Wall->setObjectName(QStringLiteral("actionAbout_Sioux_Video_Wall"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 240, 241, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        rewindButton = new QPushButton(horizontalLayoutWidget);
        rewindButton->setObjectName(QStringLiteral("rewindButton"));

        horizontalLayout->addWidget(rewindButton);

        playPauseButton = new QPushButton(horizontalLayoutWidget);
        playPauseButton->setObjectName(QStringLiteral("playPauseButton"));

        horizontalLayout->addWidget(playPauseButton);

        forwardButton = new QPushButton(horizontalLayoutWidget);
        forwardButton->setObjectName(QStringLiteral("forwardButton"));

        horizontalLayout->addWidget(forwardButton);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 241, 241));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 239, 239));
        treeWidget = new QTreeWidget(scrollAreaWidgetContents);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setEnabled(true);
        treeWidget->setGeometry(QRect(0, 0, 241, 241));
        treeWidget->setAutoScroll(true);
        treeWidget->setProperty("showDropIndicator", QVariant(false));
        treeWidget->setDragEnabled(false);
        treeWidget->setDragDropOverwriteMode(false);
        treeWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        treeWidget->setHeaderHidden(false);
        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralWidget);
        horizontalLayoutWidget->raise();
        scrollArea->raise();
        rewindButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 241, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuPlaylist = new QMenu(menuBar);
        menuPlaylist->setObjectName(QStringLiteral("menuPlaylist"));
        menuConfiguration = new QMenu(menuBar);
        menuConfiguration->setObjectName(QStringLiteral("menuConfiguration"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuPlaylist->menuAction());
        menuBar->addAction(menuConfiguration->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuPlaylist->addAction(actionAdd_Video);
        menuPlaylist->addAction(actionRemove_Video);
        menuPlaylist->addAction(actionMove_Video_Up);
        menuPlaylist->addAction(actionMove_Video_Down);
        menuPlaylist->addSeparator();
        menuPlaylist->addAction(actionPlay_Settings);
        menuConfiguration->addAction(actionCalibration);
        menuConfiguration->addSeparator();
        menuConfiguration->addAction(actionMatrix_Configuration);
        menuConfiguration->addSeparator();
        menuConfiguration->addAction(actionPicture_Adjoustment);
        menuHelp->addAction(actionHelp_Topics);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_Sioux_Video_Wall);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAdd_Video->setText(QApplication::translate("MainWindow", "Add Video", 0));
        actionRemove_Video->setText(QApplication::translate("MainWindow", "Remove Video", 0));
        actionMove_Video_Up->setText(QApplication::translate("MainWindow", "Move Video Up", 0));
        actionMove_Video_Down->setText(QApplication::translate("MainWindow", "Move Video Down ", 0));
        actionPlay_Settings->setText(QApplication::translate("MainWindow", "Play Settings", 0));
        actionCalibration->setText(QApplication::translate("MainWindow", "Calibration", 0));
        actionMatrix_Configuration->setText(QApplication::translate("MainWindow", "Matrix Configuration", 0));
        actionPicture_Adjoustment->setText(QApplication::translate("MainWindow", "Picture Adjustment", 0));
        actionHelp_Topics->setText(QApplication::translate("MainWindow", "Help Topics", 0));
        actionAbout_Sioux_Video_Wall->setText(QApplication::translate("MainWindow", "About Sioux Video Wall", 0));
        rewindButton->setText(QApplication::translate("MainWindow", "Rewind", 0));
        playPauseButton->setText(QApplication::translate("MainWindow", "Play", 0));
        forwardButton->setText(QApplication::translate("MainWindow", "Forward", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "PlayList", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Video 1", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Video 2", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Video 3", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "Video 4", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "Video 5", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "Video 6", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "Video 7", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuPlaylist->setTitle(QApplication::translate("MainWindow", "Playlist", 0));
        menuConfiguration->setTitle(QApplication::translate("MainWindow", "Configuration", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
