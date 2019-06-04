#pragma once

#include <QtWidgets/QWidget>
#include <QStandardItem>
#include <QAbstractItemView>
#include <QString>
#include <QTextEdit>
#include <QDebug>
#include <QDir>
#include <QFileDialog>
#include "ui_MiniSQL.h"

class MiniSQL : public QWidget
{
	Q_OBJECT

public:
	MiniSQL(QWidget *parent = Q_NULLPTR);
private slots:
	void receiveSentence();
	void fileDirectoryChoose();
	void sqlScriptExec();
private:
	Ui::MiniSQLClass ui;
};
