#ifndef MYPLUGIN__H
#define MYPLUGIN__H

#include <QObject>
#include <QDebug>
#include "myplugininterface.h"

//class MainAccess;

class MyPlugin : public QObject, public MyPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA ( IID QtPluginDemo_iid FILE "MyPlugin.json")
    Q_INTERFACES(MyPluginInterface)

public:
    virtual int add(int,int);
    //virtual void setMainAccess(MainAccess *ma);
};

#endif
