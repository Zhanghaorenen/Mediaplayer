#ifndef MEDIAPLAYER
#define MEDIAPLAYER
#include<QMediaPlayer>
#include<QString>
#include<QAudioOutput>
#include<QObject>



class mediaplayer:public QObject
{
    Q_OBJECT
public:
    mediaplayer();

    void addmedialist(const QString s);
    void delmedialist();
    QMediaPlayer player;
    QAudioOutput *audioutput;

public slots:
    void mediaplaystart(QString filename);
void mediaplaypause();
    void setvolunmn(int number);
};

#endif // MEDIAPLAYER
