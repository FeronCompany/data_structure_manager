

#include "MainWindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QMessageBox"

#include "StructureRepository.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	itemModel = new QStandardItemModel(this);
	ui->structList->setModel(itemModel);
	ui->toolButton->setDisabled(true);
	ui->projectName->setText("No project active");
	this->projectOn = false;
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

void MainWindow::on_actionnew_project_triggered()
{
	// 新建项目
	if(this->projectOn)
	{
		QMessageBox warnBox;
		warnBox.setText("请关闭已有项目再新建...");
		warnBox.exec();
		return;
	}

	CStructureRepository::instance().setProjectName("New Project");
	ui->projectName->setText("New Project");
	ui->toolButton->setEnabled(true);
	this->projectOn = true;
}

void MainWindow::on_projectName_editingFinished()
{
	std::string newName = ui->projectName->text().toStdString();
	CStructureRepository::instance().setProjectName(newName);
}
