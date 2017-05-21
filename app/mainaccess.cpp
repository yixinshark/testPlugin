#include <QDebug>

#include "mainaccess.h"

MainAccess::MainAccess()
{
}

void MainAccess::sayPluginHello()
{
    qDebug() << "plugin hello";
}
