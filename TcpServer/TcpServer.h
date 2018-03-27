#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QDialog>
#include <QListWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include "server.h"

class TcpServer : public QDialog
{
	Q_OBJECT

public:
	TcpServer(QWidget *parent = 0, Qt::WindowFlags f = 0);
	~TcpServer();
private:
	QListWidget * ContentListWidget;
	QLabel *PortLabel;
	QLineEdit *PortLineEdit;
	QPushButton *CreateBtn;
	QGridLayout *mainLayout;
	int port;
	Server *server;
	public slots:
	void slotCreateServer();
	void updateServer(QString, int);
};