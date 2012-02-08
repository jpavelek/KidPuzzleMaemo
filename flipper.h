#ifndef FLIPPER_H
#define FLIPPER_H

#include <QObject>
#include <QtDeclarative>

class Flipper : public QObject
{
    Q_OBJECT
public:
    explicit Flipper (QObject *parent = 0);
    void setView(QDeclarativeView *vp);
    

signals:

public slots:
    void minimize(void);
private:
    QDeclarativeView *v;
};

#endif // FLIPPER_H

