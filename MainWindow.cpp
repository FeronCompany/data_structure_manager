#include "MainWindow.h"
#include "ui_mainwindow.h"
#include "QString"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	itemModel = new QStandardItemModel(this);
	ui->structList->setModel(itemModel);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_actionquit_triggered()
{
	this->close();
}

void MainWindow::on_toolButton_clicked()
{
	QString structName = "new_struct";
	QStandardItem *item = new QStandardItem(structName);
	itemModel->appendRow(item);
}
