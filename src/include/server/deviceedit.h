/*
 * deviceedit.h
 * This file is part of Open-Typer
 *
 * Copyright (C) 2022 - adazem009
 *
 * Open-Typer is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Open-Typer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Open-Typer. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEVICEEDIT_H
#define DEVICEEDIT_H

#include <QDialog>
#include <QPushButton>
#include "core/database.h"

namespace Ui {
	class deviceEdit;
}

/*!
 * \brief the deviceEdit class is a dialog used to add or edit devices.
 *
 * \image html deviceEdit.png
 */
class deviceEdit : public QDialog
{
	Q_OBJECT
	public:
		explicit deviceEdit(int deviceID = 0, QWidget *parent = nullptr);
		~deviceEdit();

	private:
		Ui::deviceEdit *ui;
		bool newDevice;
		int m_deviceID;
		QHostAddress oldAddress;

	private slots:
		void verify(void);
		void finish(void);
};

#endif // DEVICEEDIT_H
