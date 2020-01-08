/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *url_edit;
    QPushButton *reload_button;
    QWebView *webView;
    QPushButton *back_button;
    QProgressBar *progressBar;
    QPushButton *return_button;
    QPushButton *forward_button;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 40));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        url_edit = new QLineEdit(groupBox);
        url_edit->setObjectName(QStringLiteral("url_edit"));
        url_edit->setMinimumSize(QSize(0, 30));
        url_edit->setMaximumSize(QSize(16777215, 30));

        gridLayout_2->addWidget(url_edit, 0, 3, 1, 1);

        reload_button = new QPushButton(groupBox);
        reload_button->setObjectName(QStringLiteral("reload_button"));
        reload_button->setMinimumSize(QSize(0, 30));
        reload_button->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(17);
        reload_button->setFont(font);

        gridLayout_2->addWidget(reload_button, 0, 2, 1, 1);

        webView = new QWebView(groupBox);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        gridLayout_2->addWidget(webView, 1, 0, 1, 5);

        back_button = new QPushButton(groupBox);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setMinimumSize(QSize(0, 30));
        back_button->setMaximumSize(QSize(16777215, 30));
        back_button->setFont(font);

        gridLayout_2->addWidget(back_button, 0, 0, 1, 1);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(250, 0));
        progressBar->setMaximumSize(QSize(250, 16777215));
        progressBar->setValue(24);

        gridLayout_2->addWidget(progressBar, 2, 0, 1, 1);

        return_button = new QPushButton(groupBox);
        return_button->setObjectName(QStringLiteral("return_button"));
        return_button->setMinimumSize(QSize(0, 30));
        return_button->setMaximumSize(QSize(16777215, 30));
        return_button->setFont(font);

        gridLayout_2->addWidget(return_button, 0, 4, 1, 1);

        forward_button = new QPushButton(groupBox);
        forward_button->setObjectName(QStringLiteral("forward_button"));
        forward_button->setMinimumSize(QSize(0, 30));
        forward_button->setMaximumSize(QSize(16777215, 30));
        forward_button->setFont(font);

        gridLayout_2->addWidget(forward_button, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(back_button, SIGNAL(clicked()), webView, SLOT(back()));
        QObject::connect(forward_button, SIGNAL(clicked()), webView, SLOT(forward()));
        QObject::connect(reload_button, SIGNAL(clicked()), webView, SLOT(reload()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Web Browser", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Navigation", Q_NULLPTR));
        reload_button->setText(QApplication::translate("MainWindow", "\342\237\263", Q_NULLPTR));
        back_button->setText(QApplication::translate("MainWindow", "\342\206\220", Q_NULLPTR));
        return_button->setText(QApplication::translate("MainWindow", " \342\206\265", Q_NULLPTR));
        forward_button->setText(QApplication::translate("MainWindow", "\342\206\222", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
