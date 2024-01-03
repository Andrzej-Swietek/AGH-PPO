#include <iostream>
#include "ArmyC.h"
#include "AndroidSoldier.h"
#include <vector>

using namespace std;

class AndroidSoldier;

ArmyC::ArmyC()
{
    _number_of_element=0;
    _size=10;
    _array = new AndroidSoldier[10];
};


ArmyC::ArmyC(const ArmyC &w)
{

    _array = new AndroidSoldier[w._size];
    _number_of_element = w._number_of_element;
    _size = w._size;
    
    for(int i = 0;i<_number_of_element;i++)
    {
        _array[i] = w._array[i];
    }
}


ArmyC::ArmyC(ArmyC &&w)
{
    _array = std::move(w._array);
    _number_of_element = std::move(w._number_of_element);
    _size = std::move(w._size);
}


ArmyC::~ArmyC()
{
    delete[] _array;
}


ArmyC& ArmyC::operator=(const ArmyC& other)
{
    if(&other==this) {
        return *this;
    }

    delete[] _array;

    _array = new AndroidSoldier[other._size];
    _number_of_element = other._number_of_element;
    _size = other._size;

    for(int i = 0;i<_number_of_element;i++)
    {
        _array[i] = other._array[i];
    }
    return *this;
}


ArmyC& ArmyC::operator=(ArmyC&& other)
{
    if(&other==this) {
        return *this;
    }

    _array = std::move(other._array);
    other._array=nullptr;

    _number_of_element = std::move(other._number_of_element);
    other._number_of_element=0;

    _size = std::move(other._size);
    other._size=0;

    return *this;
}


void ArmyC::Remove()
{
    if(_number_of_element != 0) {
        _number_of_element--;
    }
}


void ArmyC::Add(AndroidSoldier p)
{
    if (_number_of_element < _size) {
        _array[_number_of_element] = p;
        _number_of_element++;
    } else {
        AndroidSoldier* new_array = new AndroidSoldier[2*_size];
        for(int i = 0; i < _size; i++)
        {
            new_array[i] = _array[i];
        }

        new_array[_size] = p;
        _number_of_element++;
        _size *= 2;
        delete[] _array;
        _array = new_array;
    }
}


void ArmyC::Print()
{
    cout << "---\n# Zawartosc/sklad:\n";
    if(_number_of_element==0) {
        // cout << "---\nBLAD: Pusto !\n";
        return;
    }


    for(int i=0; i<_number_of_element; i++)
    {
        _array[i].Print();
    }
    cout << "---\n";
}


void ArmyC::Clear()
{
    _number_of_element = 0;
}
