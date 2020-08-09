#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow();

private slots:
	void on_actionquit_triggered();

	void on_toolButton_clicked();

	void on_actionnew_project_triggered();

	void on_projectName_editingFinished();

private:
	Ui::MainWindow *ui;
	QStandardItemModel *itemModel;
	bool projectOn;		// 是否已经开启项目
};

#endif // MAINWINDOW_H
