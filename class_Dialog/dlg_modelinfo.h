#ifndef DLG_MODELINFO_H
#define DLG_MODELINFO_H

#include <QWidget>
#include "ui_dlg_modelinfo.h"

class dlg_modelinfo : public QWidget
{
	Q_OBJECT

public:
	dlg_modelinfo(QWidget *parent = Q_NULLPTR);
	~dlg_modelinfo();

private:
	Ui::dlg_modelinfo ui;
};


#endif
