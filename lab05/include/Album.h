#ifndef ALBUM_H 
#define ALBUM_H

#include <string>

#include "Song.h"

class Album {
    private:
        std::string name;
        Song* songs; 
        int numer_of_song;

    public:
        Album();
        Album(std::string name);
        Album(int count, Song* songs);
        Album(std::string name, int count, Song* songs);
        Album(int count, Song* songs, std::string name);
        Album(std::string name, Song s1, Song s2, Song s3 );
        Album(std::string name, Song s1, Song s2, Song s3, Song s4);
        ~Album();
        void Presentation() const;
        void SetName(std::string name);
        void SetNewSongs(int count, const Song* more_songs);
        void SetSong(int index, std::string name, double x, double y);
        int GetNumSongs();
        std::string GetName();
        Song* GetSongs();
};

#endif // SONG_H