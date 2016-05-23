#ifndef PLAYER_H
#define PLAYER_H
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <string>
#include <QUrl>
#include <map>
#include "playlist.h"
using namespace std;

class Player
{
public:
    QMediaPlayer * player;
    Playlist_ * playlist;
    Player(Playlist_ * p);
    void play();
    void setplaylist(QMediaPlaylist * play);
    ~Player();
};

#endif // PLAYER_H
