#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->hide();
    ui->progressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// handling return button press
void MainWindow::on_return_button_clicked()
{
    // reading url
    QString url = ui->url_edit->text();

    if (!(url.contains("https//www.") || url.contains("http//www."))) {
        url = "https://" + url;
    }
    ui->webView->load(url);
}

// when return key is pressed
void MainWindow::on_url_edit_returnPressed()
{
    on_return_button_clicked();
}

// handling the progress bar above status bar
void MainWindow::on_webView_loadProgress(int progress)
{
    ui->progressBar->show();
    ui->progressBar->setValue(progress);

    if (progress == 100) {
        ui->progressBar->hide();
    }
}

// checking if the page was loaded successfully
void MainWindow::on_webView_loadFinished(bool arg1)
{
    QString url = ui->webView->url().toString();
    if (arg1) {
        ui->statusBar->showMessage("Successfully loaded URL:  " + url);

        // setting the current address to the url_edit
        ui->url_edit->setText(url);
    }

    else {
        ui->statusBar->showMessage("Failed loading URL:  Invalid URL");
    }
}

// when loading started
void MainWindow::on_webView_loadStarted()
{
    QString url = ui->url_edit->text();
    ui->statusBar->showMessage("Loading URL: " + url);
}
