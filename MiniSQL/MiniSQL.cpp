#include "MiniSQL.h"


MiniSQL::MiniSQL(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint); //设置最小化按钮和关闭按钮
	this->ui.miniCmd->insertPlainText("Welcome to MiniSQL!\n");
	connect(this->ui.SQLlineEdit, SIGNAL(returnPressed()), this, SLOT(receiveSentence()));
	connect(this->ui.fileSelectButton, SIGNAL(clicked()), this, SLOT(fileDirectoryChoose()));
	connect(this->ui.execButton, SIGNAL(clicked()), this, SLOT(sqlScriptExec()));
}

void MiniSQL::receiveSentence()
{
	QString sql = this->ui.SQLlineEdit->text();
	this->ui.SQLlineEdit->clear();
}

void MiniSQL::fileDirectoryChoose()
{
	QString directory = QFileDialog::getOpenFileName(this, tr("文件"),"", tr("text(*.txt)"));

	if (!directory.isEmpty())
	{
		if (this->ui.filePathBox->findText(directory) == -1)
		{
			this->ui.filePathBox->addItem(directory);
		}
		this->ui.filePathBox->setCurrentIndex(this->ui.filePathBox->findText(directory));
	}
}

void MiniSQL::sqlScriptExec()
{
	QString filePath = this->ui.filePathBox->currentText();
}
