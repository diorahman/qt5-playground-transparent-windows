#include "processobj.h"

ProcessObj::ProcessObj(QObject *parent) :
    QObject(parent)
{
}

void ProcessObj::call()
{
    QProcess p;

    QString program = "C:/VideoLAN/VLC/vlc.exe";

    QStringList arguments;
    arguments << "C:\\Data\\Contents\\Video\\background.avi";
    arguments << "--fullscreen";
    arguments << "--no-video-title-show";
    arguments << "--loop";

    m_process = new QProcess(this);
    m_process->start(program, arguments);
}
