#include <QtDBus/QtDBus>
#include "flipper.h"

Flipper::Flipper(QObject *parent) : QObject(parent)
{
//nothing
}

void Flipper::setView(QDeclarativeView *vp) {
   v = vp;
}

void Flipper::minimize(void) {
   //v->setWindowState(v->windowState() ^ Qt::WindowMinimized);
   QDBusConnection connection = QDBusConnection::sessionBus();
   QDBusMessage message = QDBusMessage::createSignal("/","com.nokia.hildon_desktop","exit_app_view");
   connection.send(message);
}
