#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QUdpSocket>
#include <QTimer>

class UdpServer : public QDialog
{
	Q_OBJECT

public:
	UdpServer(QWidget *parent = 0, Qt::WindowFlags f = 0);
	~UdpServer();
	public slots:
	void StartBtnClicked();
	void timeout();
private:
	QLabel * TimerLabel;
	QLineEdit *TextLineEdit;
	QPushButton *StartBtn;
	QVBoxLayout *mainLayout;
	int port;
	bool isStarted;
	QUdpSocket *udpSocket;
	QTimer *timer;
};
