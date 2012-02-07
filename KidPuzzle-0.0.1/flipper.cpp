#include "flipper.h"
#include <QtGui/QApplication>
#include <QtDeclarative>

Flipper::Flipper(QObject *parent) : QObject(parent)
{
//nothing
}

void Flipper::setView(QDeclarativeView *vp) {
   v = vp;
}

void Flipper::minimize(void) {
   v->setWindowState(Qt::WindowMinimized);
}
