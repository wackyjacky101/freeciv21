/**************************************************************************
 Copyright (c) 1996-2020 Freeciv21 and Freeciv contributors. This file is
 part of Freeciv21. Freeciv21 is free software: you can redistribute it
 and/or modify it under the terms of the GNU  General Public License  as
 published by the Free Software Foundation, either version 3 of the
 License,  or (at your option) any later version. You should have received
 a copy of the GNU General Public License along with Freeciv21. If not,
 see https://www.gnu.org/licenses/.
**************************************************************************/
#pragma once

#include <QWidget>

class fc_client;
#include "ui_page_main.h"

class page_main : public QWidget {
  Q_OBJECT
public:
  page_main(QWidget *, fc_client *);
  ~page_main() override;

private:
  Ui::Form ui;
};
