#include <QtGui/QApplication>
#include <QtDeclarative>
#include "flipper.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
/*
    QScopedPointer<QApplication> app(createApplication(argc, argv));

    QmlApplicationViewer viewer;
    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationLockLandscape);
    viewer.setMainQmlFile(QLatin1String("qml/KidPuzzle/main.qml"));
    //viewer.showExpanded();
    viewer.showFullScreen();

    Ponger ponger(&viewer);
    viewer.rootContext()->setContextProperty("ponger", &ponger);
*/

    QApplication *app = new QApplication(argc, argv);
    QDeclarativeView *view = new QDeclarativeView();

    Flipper flipper;
    flipper.setView(view);
    view->rootContext()->setContextProperty("ponger", &flipper);

    view->setSource(QUrl("qml/KidPuzzle/main.qml"));
    view->showFullscreen();
    view->setWindowTitle("Puzzle");
    //Flickr removal
    view->setAttribute(Qt::WA_OpaquePaintEvent);
    view->setAttribute(Qt::WA_NoSystemBackground);
    view->viewport()->setAttribute(Qt::WA_OpaquePaintEvent);
    view->viewport()->setAttribute(Qt::WA_NoSystemBackground);
    QObject::connect(view->engine(), SIGNAL(quit()), view, SLOT(close()));
/*
    Ponger ponger(view);
    view->rootContext()->setContextProperty("ponger", &ponger);
*/

    return app->exec();

}
