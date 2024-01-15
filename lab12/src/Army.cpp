#include "Army.h"


 // ============ CONSTRUCTORS  ============

Army::Army(){};


Army::Army(const Army &army)
{
    _number_of_elements=army._number_of_elements;
    _size =army._size;
    for(int i = 0;i<_number_of_elements;i++)
    {
        _arr[i] = army._arr[i];
    }
}


 // ============ OPERATORS OVERLOAD  ============ 


Army& Army::operator+(int i)
{
    for(int j = 0;j<_number_of_elements;j++)
    {
        _arr[j]._quantity += i;
    }
    return *this;
}


Army& Army::operator-(int i)
{
    for(int j = 0;j<_number_of_elements;j++)
    {
        _arr[j]._quantity -= i;
        if(_arr[j]._quantity < 0){ _arr[j]._quantity = 0; }
    }
    return *this;
}


Army& Army::operator*(int i)
{
    for(int j = 0;j<_number_of_elements;j++)
    {
        _arr[j]._quantity *= i;
    }
    return *this;
}


AndroidSoldier& Army::operator[](int i)
{
    return _arr[i];
}

Army& Army::operator=(const Army& other)
{
    if(this==&other)
    {
        return *this;
    }
    _number_of_elements = other._number_of_elements;
    _size = other._size;
    for(int i = 0;i<_number_of_elements;i++)
    {
        _arr[i] = other._arr[i];
    }
    return *this;
}


std::ostream& operator<<(std::ostream& os, const Army& a)
{
    os << "---\n# Zawartosc/sklad:\n";
    if(a._number_of_elements==0)
    {
        os << "---\nBLAD: Pusto !\n";
        return os;
    }
    for(int i=0; i<a._number_of_elements; i++)
    {
        os << a._arr[i];
    }
    os << "---\n";
    return os;
}


 // ============ METHODS ============ 


void Army::Remove()
{
    if(_number_of_elements != 0)
    {
        _number_of_elements--;
    }
}


void Army::Add(AndroidSoldier soldier)
{
    if(_number_of_elements < _size)
    {
        _arr[_number_of_elements] = soldier;
        _number_of_elements++;
    }
    else
    {
        cout << "#BLAD: Obiekt zapelniony\n";
    }
}


void Army::Clear()
{
    this->_number_of_elements = 0;
}