#include <iostream>
#include "ArmyA.h"
#include "AndroidSoldier.h"
#include <vector>

using namespace std;


class AndroidSoldier;


ArmyA::ArmyA(){};


ArmyA::ArmyA(const ArmyA &w)
{
    _number_of_element=w._number_of_element;
    _size =w._size;
    for(int i = 0;i<_number_of_element;i++)
    {
        _array[i] = w._array[i];
    }

}


void ArmyA::Remove()
{
    if(_number_of_element != 0)
    {
        _number_of_element--;
    }
}


void ArmyA::Add(AndroidSoldier p)
{
     if(_number_of_element < _size)
    {
        _array[_number_of_element] = p;
        _number_of_element++;
    }
    else
    {
        cout << "#BLAD: Obiekt zapelniony\n";
    }
}


void ArmyA::Print()
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


void ArmyA::Clear()
{
    _number_of_element = 0;
}
