
#include <iostream>
#include <string>

#include "Song.h"

Song::Song()
{
    std::cout << " Wywolanie konstruktora Song... \n" ;
    this->name = "";
    this->x = -1;
    this->y = -1;
}

Song::Song(std::string name)
{
    std::cout << " Wywolanie konstruktora Song... \n" ;
    this->name = name;
    this->x = -1;
    this->y = -1;
}

Song::Song(std::string name, double x, double y)
{
    std::cout << " Wywolanie konstruktora Song... \n" ;
    this->name = name;
    this->x = x;
    this->y = y;
}


Song::~Song()
{
    std::cout << "Wywolanie destruktora Song..." << std::endl;
}

void Song::Presentation() const
{
    std::cout << "### Prezentacja utworu ###" << std::endl;
    std::cout << "Nazwa: " << this->name << std::endl;
    std::cout << "Wspolrzedna X: " << this->x << std::endl;
    std::cout << "Wspolrzedna Y: " << this->y << std::endl;
}

void Song::SetName(std::string name)
{
    this->name = name;
}

void Song::SetX(double newX)
{
    this->x = newX;
}

void Song::SetY(double newY)
{
    this->y = newY;
}


std::string Song::GetName()
{
    return this->name;
}

double Song::GetX()
{
    return this->x;
}

double Song::GetY()
{
    return this->y;
}