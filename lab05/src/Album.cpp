
#include <iostream>
#include <string>

#include "Song.h"
#include "Album.h"

Album::Album()
{
    std::cout << "Wywolanie konstruktora Album..." << std::endl;
    this->SetName("");
    this->numer_of_song = 0;
    this->songs = nullptr;
}

Album::Album(std::string name)
{
    std::cout << "Wywolanie konstruktora Album..." << std::endl;
    this->SetName(name);
    this->numer_of_song = 0;
    this->songs = nullptr;
}

Album::Album(int count, Song* songs)
{
    std::cout << "Wywolanie konstruktora Album..." << std::endl;
    this->numer_of_song = count;
    this->name = "";
    this->songs = new Song[count];
    for(int i = 0; i < count; i++ )
    {
        this->songs[i] = songs[i];
    }
}

Album::Album(std::string name, int count, Song* songs)
{
    this->SetName(name);
    this->numer_of_song = count;
    this->songs = new Song[count];
    for(int i = 0; i < count; i++ )
    {
        this->songs[i] = songs[i];
    }
}

Album::Album(int count, Song* songs, std::string name)
{
    this->SetName(name);
    this->numer_of_song = count;
    this->songs = new Song[count];
    for(int i = 0; i < count; i++ )
    {
        this->songs[i] = songs[i];
    }
}


Album::Album(std::string name, Song s1, Song s2, Song s3 )
{
    this->SetName(name);
    this->numer_of_song = 3;
    this->songs = new Song[3];
    this->songs[0] = s1;
    this->songs[1] = s2;
    this->songs[2] = s3;
}

Album::Album(std::string name, Song s1, Song s2, Song s3, Song s4)
{
    this->SetName(name);
    this->numer_of_song = 4;
    this->songs = new Song[4];
    this->songs[0] = s1;
    this->songs[1] = s2;
    this->songs[2] = s3;
    this->songs[3] = s4;
}

Album::~Album()
{
    std::cout << "Wywolanie destruktora Album..." << std::endl;
    delete[] this->songs;
}


void Album::SetName(std::string name)
{
    this->name = name;
}

Song* Album::GetSongs()
{
    return this->songs;
}

void Album::SetNewSongs(int count, const Song* more_songs)
{
    delete this->songs;
    this->numer_of_song = count;
    this->songs = new Song[count];
    for(int i = 0; i < count; i++ )
    {
        this->songs[i] = songs[i];
    }
}

void Album::SetSong(int index, std::string name, double x, double y)
{
    if (index >= 0 && index < this->numer_of_song) {
        songs[index].SetName(name);
        songs[index].SetX(x);
        songs[index].SetY(y);
    }
}

std::string Album::GetName()
{
    return this->name;
}

int Album::GetNumSongs()
{
    return this->numer_of_song;
}

void Album::Presentation() const
{

    std::cout << "### Prezentacja albumu ###" << std::endl;
    std::cout << "Nazwa: " << this->name << std::endl;
    std::cout << "Liczba utworów: " << this->numer_of_song << std::endl;

    for (int i = 0; i < this->numer_of_song; ++i) {
        std::cout << "Utwór - nazwa: " << this->songs[i].GetName()
                  << ", X = " << songs[i].GetX()
                  << ", Y = " << songs[i].GetY() << std::endl;
    }

    std::cout << std::endl;
}