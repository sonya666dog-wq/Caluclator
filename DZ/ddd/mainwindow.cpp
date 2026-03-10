#include "mainwindow.h"
#include "ui_mainwindow.h"

double firstNumber = 0;
double secondNumber = 0;

QString currentOperation = "";

bool isWaitingForSecondNumber = false;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->button_0, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->Button_1, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->Button_2, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->Button_3, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->Button_4, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->Button_5, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->Button_6, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->Button_7, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->Button_8, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->Button_9, &QPushButton::clicked, this, &MainWindow::digitPressed);

    connect(ui->Button_minus, &QPushButton::clicked, this, &MainWindow::operationPressed);
    connect(ui->Button_plus, &QPushButton::clicked, this, &MainWindow::operationPressed);
    connect(ui->Button_multiply, &QPushButton::clicked, this, &MainWindow::operationPressed);
    connect(ui->Button_divide, &QPushButton::clicked, this, &MainWindow::operationPressed);

    connect(ui->Button_equal, &QPushButton::clicked, this, &MainWindow::calculate);
    connect(ui->Button_clear, &QPushButton::clicked, this, &MainWindow::clear);

    connect(ui->Button_point, &QPushButton::clicked, this, &MainWindow::pointPressed);
    connect(ui->Button_sign, &QPushButton::clicked, this, &MainWindow::signPressed);
    connect(ui->Button_percent, &QPushButton::clicked, this, &MainWindow::percentPressed);
    connect(ui->Button_ClearHistory, &QPushButton::clicked, this, &MainWindow::clearHistory);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::operationPressed()
{
    QPushButton *button = (QPushButton*)sender();
    QString operation = button->text();

    if (isWaitingForSecondNumber)
    {
        calculate(); // теперь вычисляем с текущим вторым числом, после calculate() на дисплее результат, и флаги сброшены
        firstNumber = ui->display->text().toDouble(); // берём результат как первый операнд
    }
    else
    {
        firstNumber = ui->display->text().toDouble();
    }

    currentOperation = operation;
    isWaitingForSecondNumber = true;
    ui->display->setText("0");
}

void MainWindow::clear()
{
    firstNumber = 0;
    secondNumber = 0;
    currentOperation = "";
    ui->display->setText("0");
}

void MainWindow::calculate()
{
    secondNumber = ui->display->text().toDouble();
    double result = 0;
    bool error = false;

    if (currentOperation == "+")
        result = firstNumber + secondNumber;
    else if (currentOperation == "-")
        result = firstNumber - secondNumber;
    else if (currentOperation == "*")
        result = firstNumber * secondNumber;
    else if (currentOperation == "/")
    {
        if (secondNumber == 0)
        {
            ui->display->setText("Error");
            error = true;
        }
        else
            result = firstNumber / secondNumber;
    }
    else
    {
        // нет операции – ничего не делаем
        return;
    }

    if (!error) {
        QString resultStr = QString::number(result);
        ui->display->setText(resultStr);

        QString entry = QString("%1 %2 %3 = %4")
                            .arg(firstNumber)
                            .arg(currentOperation)
                            .arg(secondNumber)
                            .arg(resultStr);

        history.push_back(entry);
        if (ui->historyList) {
            ui->historyList->addItem(entry);   // добавляем элемент в список
        }
    }

    // Сбрасываем состояние для нового ввода
    isWaitingForSecondNumber = false;
    currentOperation = "";
}

void MainWindow::pointPressed()
{
    QString text = ui->display->text();
    if (!text.contains('.')) {                // если точки ещё нет
        if (text.isEmpty() || text == "0") {
            ui->display->setText("0.");
        } else {
            ui->display->setText(text + ".");
        }
    }
}

void MainWindow::signPressed()
{
    double value = ui->display->text().toDouble();
    value = -value;
    ui->display->setText(QString::number(value));
}

void MainWindow::percentPressed()
{
    // Проценты работают только если есть активная операция и ожидается второе число
    if (currentOperation.isEmpty() || !isWaitingForSecondNumber)
    {
        return; // ну или можно просто ничего не делать
    }

    double currentValue = ui->display->text().toDouble();
    double percent = firstNumber * currentValue / 100.0;
    ui->display->setText(QString::number(percent));

    // Сразу выполняем операцию, после calculate() флаги сбросятся, и дисплей покажет результат
    calculate();
}

void MainWindow::clearHistory()
{
    history.clear();
    if (ui->historyList) {
        ui->historyList->clear();
    }
}

void MainWindow::digitPressed()
{
    QPushButton *button = (QPushButton*)sender();
    QString digit = button->text();
    QString displayText = ui->display->text();



    displayText += digit;
    ui->display->setText(displayText);
}
