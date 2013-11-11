/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Nov 11 15:27:08 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

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
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(241, 325);
        MainWindow->setMaximumSize(QSize(241, 325));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAdd_Video = new QAction(MainWindow);
        actionAdd_Video->setObjectName(QString::fromUtf8("actionAdd_Video"));
        actionRemove_Video = new QAction(MainWindow);
        actionRemove_Video->setObjectName(QString::fromUtf8("actionRemove_Video"));
        actionMove_Video_Up = new QAction(MainWindow);
        actionMove_Video_Up->setObjectName(QString::fromUtf8("actionMove_Video_Up"));
        actionMove_Video_Down = new QAction(MainWindow);
        actionMove_Video_Down->setObjectName(QString::fromUtf8("actionMove_Video_Down"));
        actionPlay_Settings = new QAction(MainWindow);
        actionPlay_Settings->setObjectName(QString::fromUtf8("actionPlay_Settings"));
        actionCalibration = new QAction(MainWindow);
        actionCalibration->setObjectName(QString::fromUtf8("actionCalibration"));
        actionMatrix_Configuration = new QAction(MainWindow);
        actionMatrix_Configuration->setObjectName(QString::fromUtf8("actionMatrix_Configuration"));
        actionPicture_Adjoustment = new QAction(MainWindow);
        actionPicture_Adjoustment->setObjectName(QString::fromUtf8("actionPicture_Adjoustment"));
        actionHelp_Topics = new QAction(MainWindow);
        actionHelp_Topics->setObjectName(QString::fromUtf8("actionHelp_Topics"));
        actionAbout_Sioux_Video_Wall = new QAction(MainWindow);
        actionAbout_Sioux_Video_Wall->setObjectName(QString::fromUtf8("actionAbout_Sioux_Video_Wall"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 240, 241, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        rewindButton = new QPushButton(horizontalLayoutWidget);
        rewindButton->setObjectName(QString::fromUtf8("rewindButton"));

        horizontalLayout->addWidget(rewindButton);

        playPauseButton = new QPushButton(horizontalLayoutWidget);
        playPauseButton->setObjectName(QString::fromUtf8("playPauseButton"));

        horizontalLayout->addWidget(playPauseButton);

        forwardButton = new QPushButton(horizontalLayoutWidget);
        forwardButton->setObjectName(QString::fromUtf8("forwardButton"));

        horizontalLayout->addWidget(forwardButton);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 241, 241));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 239, 239));
        treeWidget = new QTreeWidget(scrollAreaWidgetContents);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
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
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 241, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuPlaylist = new QMenu(menuBar);
        menuPlaylist->setObjectName(QString::fromUtf8("menuPlaylist"));
        menuConfiguration = new QMenu(menuBar);
        menuConfiguration->setObjectName(QString::fromUtf8("menuConfiguration"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionAdd_Video->setText(QApplication::translate("MainWindow", "Add Video", 0, QApplication::UnicodeUTF8));
        actionRemove_Video->setText(QApplication::translate("MainWindow", "Remove Video", 0, QApplication::UnicodeUTF8));
        actionMove_Video_Up->setText(QApplication::translate("MainWindow", "Move Video Up", 0, QApplication::UnicodeUTF8));
        actionMove_Video_Down->setText(QApplication::translate("MainWindow", "Move Video Down ", 0, QApplication::UnicodeUTF8));
        actionPlay_Settings->setText(QApplication::translate("MainWindow", "Play Settings", 0, QApplication::UnicodeUTF8));
        actionCalibration->setText(QApplication::translate("MainWindow", "Calibration", 0, QApplication::UnicodeUTF8));
        actionMatrix_Configuration->setText(QApplication::translate("MainWindow", "Matrix Configuration", 0, QApplication::UnicodeUTF8));
        actionPicture_Adjoustment->setText(QApplication::translate("MainWindow", "Picture Adjustment", 0, QApplication::UnicodeUTF8));
        actionHelp_Topics->setText(QApplication::translate("MainWindow", "Help Topics", 0, QApplication::UnicodeUTF8));
        actionAbout_Sioux_Video_Wall->setText(QApplication::translate("MainWindow", "About Sioux Video Wall", 0, QApplication::UnicodeUTF8));
        rewindButton->setText(QApplication::translate("MainWindow", "Rewind", 0, QApplication::UnicodeUTF8));
        playPauseButton->setText(QApplication::translate("MainWindow", "Play", 0, QApplication::UnicodeUTF8));
        forwardButton->setText(QApplication::translate("MainWindow", "Forward", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "PlayList", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Video 1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Video 2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Video 3", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "Video 4", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "Video 5", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "Video 6", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "Video 7", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled);

        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuPlaylist->setTitle(QApplication::translate("MainWindow", "Playlist", 0, QApplication::UnicodeUTF8));
        menuConfiguration->setTitle(QApplication::translate("MainWindow", "Configuration", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
