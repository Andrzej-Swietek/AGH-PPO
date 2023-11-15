#ifndef SONG_H
#define SONG_H

#include <string>

class Song {
    private: 
        std::string name;
        double x;
        double y;

    public:
        Song();
        Song(std::string name);
        Song(std::string name, double x, double y);
        ~Song();
        void Presentation() const;
        void SetName(std::string name);
        void SetX(double newX);
        void SetY(double newY);
        std::string GetName();
        double GetX();
        double GetY();

};

#endif // SONG_H