#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <QMediaPlaylist>
#include <string>
#include <iostream>
using namespace std;
class Playlist_
{
private:
    string nome;
    QMediaPlaylist * playlist;
public:
    Playlist_(string nome, QMediaPlaylist * conteudo = nullptr);

    string getNome();
    QMediaPlaylist * getConteudo();
};

#endif // PLAYLIST_H
