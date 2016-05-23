#include "playlist.h"

Playlist_::Playlist_(string nome,QMediaPlaylist * conteudo)
{
    this->nome =  nome;
    this->playlist = conteudo;
}

string Playlist_::getNome(){
    return this->nome;
}

QMediaPlaylist * Playlist_:: getConteudo(){
    return this->playlist;
}
