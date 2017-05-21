#ifndef INTERFACES_H
#define INTERFACES_H

#include <QtPlugin>

#include "mainaccess.h"

class MyPluginInterface
{
public:
    virtual int add(int,int) = 0 ;

    //virtual void setMainAccess(MainAccess *) = 0;
};

#define QtPluginDemo_iid "org.qt-project.Qt.PluginDemo"

Q_DECLARE_INTERFACE ( MyPluginInterface, QtPluginDemo_iid ) ;

#endif
