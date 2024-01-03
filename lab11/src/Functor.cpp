#include "Functor.h"

Functor::Functor()
{
    this->_stats["bigger"] = 0;
    this->_stats["smaller"] = 0;
    this->_stats["equal"] = 0;
}

Functor::~Functor()
{
}


bool Functor::operator() (int a, int b)
{   
    char sign = a < b ? '<' : a > b ? '>' : '=';
    this->_stats[ a < b ? "smaller" : a > b ? "bigger" : "equal" ]++;

    return a < b;
}

 void Functor::wypiszStatystyki()
 {
    for(auto it = this->_stats.begin(); it != this->_stats.end(); it++ )
    {
        std::cout << "\'a\' " << it->first << " \'b\' : " <<  it->second  << std::endl;
    }
 }