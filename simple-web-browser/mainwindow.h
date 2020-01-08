#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_return_button_clicked();

    void on_url_edit_returnPressed();

    void on_webView_loadProgress(int progress);

    void on_webView_loadFinished(bool arg1);

    void on_webView_loadStarted();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
