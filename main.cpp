#include <QtGui/QGuiApplication>
#include "qtquick2applicationviewer.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);


    QtQuick2ApplicationViewer viewer;

    viewer.setResizeMode(QQuickView::SizeRootObjectToView);
    QSurfaceFormat format;
    format.setAlphaBufferSize(8);
    viewer.setFormat(format);
    viewer.setClearBeforeRendering(true);
    viewer.setColor(QColor(Qt::transparent));
    //viewer.setFlags(Qt::FramelessWindowHint);

    viewer.setMainQmlFile(QStringLiteral("qml/PlaygroundTransparent/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
