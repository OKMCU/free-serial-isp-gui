#ifndef FREESERIALISP_H
#define FREESERIALISP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FreeSerialIsp; }
QT_END_NAMESPACE

class FreeSerialIsp : public QMainWindow
{
    Q_OBJECT

public:
    FreeSerialIsp(QWidget *parent = nullptr);
    ~FreeSerialIsp();

private:
    Ui::FreeSerialIsp *ui;
};
#endif // FREESERIALISP_H
