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

private:
	Ui::MainWindow *ui;
	QStandardItemModel *itemModel;
};

#endif // MAINWINDOW_H
