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

// handling return button clicked
void MainWindow::on_return_button_clicked()
{
    // reading url
    QString url = ui->url_edit->text();

    if (!(url.contains("https//www.") || url.contains("http//www."))) {
        url = "https://" + url;
    }
    ui->webEngineView->load(url);
}

// when return key is pressed
void MainWindow::on_url_edit_returnPressed()
{
    on_return_button_clicked();
}

// handling progress bar for webEngineView
void MainWindow::on_webEngineView_loadProgress(int progress)
{
    ui->progressBar->show();
    ui->progressBar->setValue(progress);

    if (progress == 100) {
        ui->progressBar->hide();
    }
}

// handling starting of loading
void MainWindow::on_webEngineView_loadStarted()
{
    QString url = ui->url_edit->text();
    ui->statusBar->showMessage("Loading URL: " + url);
}

// handling when the laoding is finished
void MainWindow::on_webEngineView_loadFinished(bool arg1)
{
    QString url = ui->webEngineView->url().toString();
    if (arg1) {
        ui->statusBar->showMessage("Successfully loaded URL:  " + url);

        // setting the current address to the url_edit
        ui->url_edit->setText(url);
    }

    else {
        ui->statusBar->showMessage("Failed loading URL:  Invalid URL");
    }
}
