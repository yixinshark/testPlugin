#include "MyPluginInterface.h"
#include <QtPlugin>
#include <QApplication>
#include <QPluginLoader>
#include <QString>
#include <QtDebug>

#include "mainaccess.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QObject* object ;

    MainAccess *mainAccess = new MainAccess;

    // my Dll path
    app.addLibraryPath(QString("./plugins/"));

    QPluginLoader l(QString("MyPlugind")) ;

    if ((object = l.instance()) != NULL)
    {
        qDebug("plugin loaded .");
        int a = 14 , b = 23 ;
        MyPluginInterface* plugin = qobject_cast<MyPluginInterface*>(object) ;
        if (plugin)
        {
            qDebug("%d + %d = %d",a,b,plugin->add(a,b));

            //plugin->setMainAccess(mainAccess);
        }
    }
    else
    {
        qDebug("failed to load plugin !! ");
        QString errorStr = l.errorString();
        qDebug()<<errorStr;
    }
    return app.exec();
}
