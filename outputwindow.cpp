#include "outputwindow.h"
#include "ui_outputwindow.h"


OutputWindow::OutputWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OutputWindow)
{
    ui->setupUi(this);
}

OutputWindow::~OutputWindow()
{
    delete ui;
}

void OutputWindow::setText(QString text)
{
    this->ui->outputTextArea->document()->setPlainText(text);
}
