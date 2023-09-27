#include "mediaplayer.h"
#include<QMediaPlayer>
#include<QString>
#include<QAudioOutput>
#include<QDebug>
mediaplayer::mediaplayer()
{


}

void mediaplayer::mediaplaystart(QString filename){
    audioutput=new QAudioOutput;
    player.setAudioOutput(audioutput);
    player.setSource(QUrl::fromLocalFile(filename));
    audioutput->setVolume(50);
    player.play();
    qDebug() << "Media playback completed.";

}
void mediaplayer::mediaplaypause()
{
    player.pause();
}

void mediaplayer::addmedialist(const QString s)
{
    std::vector<QString>list;
    list.push_back(s);

}

void mediaplayer::setvolunmn(int number)
{
    //audioutput=new QAudioOutput;
    //audioutput=new QAudioOutput;
    player.setAudioOutput(audioutput);
    audioutput->setVolume(number);
    qDebug()<<"start set volumen number:"<<number;
}


