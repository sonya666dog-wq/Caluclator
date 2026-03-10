#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void digitPressed();
    void operationPressed();
    void calculate();
    void clear();
    void pointPressed();
    void signPressed();
    void percentPressed();
    void clearHistory();

private:
    Ui::MainWindow *ui;
    double firstNumber;
    double secondNumber;
    QString currentOperation;
    bool isWaitingForSecondNumber;
    std::vector<QString> history;
};

#endif // MAINWINDOW_H
