#include "player.h"

#include <string>
#include<iostream>

using namespace std;
Player::Player(Playlist_ * playlist)
{
    player = new QMediaPlayer;
}


 void Player:: play(){
   if(player->state()  == QMediaPlayer::PausedState ||player->state()  == QMediaPlayer::StoppedState){
       player->play();
   }

}

 void Player::setplaylist(QMediaPlaylist * play){
    this->setplaylist(play);
 }


 Player:: ~Player(){
     delete player;
     delete playlist;
 }
