#include "free_serial_isp.h"
#include "ui_free_serial_isp.h"

FreeSerialIsp::FreeSerialIsp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FreeSerialIsp)
{
    ui->setupUi(this);
}

FreeSerialIsp::~FreeSerialIsp()
{
    delete ui;
}

