#include <iostream>
#include "ArmyB.h"
#include "AndroidSoldier.h"
#include <vector>


using namespace std;

ArmyB::ArmyB()
{
    _number_of_element=0;
    _size=10;
    _array = new AndroidSoldier[10];
};


ArmyB::ArmyB(const ArmyB &w)
{
    _array = new AndroidSoldier[w._size];
    _number_of_element = w._number_of_element;
    _size = w._size;
    for(int i = 0;i<_number_of_element;i++)
    {
        _array[i] = w._array[i];
    }
}


ArmyB::~ArmyB()
{
    delete [] _array;
}


ArmyB& ArmyB::operator=(const ArmyB& other)
{
    if(&other==this)
    {
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


void ArmyB::Remove()
{
     if(_number_of_element != 0)
    {
        _number_of_element--;
    }
}


void ArmyB::Add(AndroidSoldier p)
{
    if(_number_of_element < _size)
    {
        _array[_number_of_element] = p;
        _number_of_element++;
    }
    else
    {
        AndroidSoldier * new_array = new AndroidSoldier[2*_size];
        for(int i = 0; i < _size; i++)
        {
            new_array[i] = _array[i];
        }
        new_array[_size] = p;
        _number_of_element++;
        _size *= 2;
        delete [] _array;
        _array = new_array;
    }
}


void ArmyB::Print()
{
    cout << "---\n# Zawartosc/sklad:\n";
    if(_number_of_element==0)
    {
        cout << "---\nBLAD: Pusto !\n";
        return;
    }
    for(int i=0; i<_number_of_element; i++)
    {
        _array[i].Print();
    }
    cout << "---\n";
}


void ArmyB::Clear()
{
    _number_of_element = 0;
}
