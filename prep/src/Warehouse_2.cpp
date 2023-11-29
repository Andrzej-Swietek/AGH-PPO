#include <iostream>
#include "Warehouse_2.h"
#include <array>

using namespace std;

int Warehouse_2::Remove()
{
    if(_n_el == 0)
    {
        cout << "#BLAD: Obiekt pusty\n";
        return 0;
    }
    else
    {
        for(int i = 0;i<_n_el-1;i++)
        {
            _arr.at(i) = _arr.at(i+1);
        }
        _n_el--;
        return _arr.at(0);
    }
}
int Warehouse_2::IsEmpty()
{
    if(_n_el==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int Warehouse_2::IsFull()
{
    if(_n_el == _size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Warehouse_2::Insert(int n)
{
    if(_n_el < _size)
    {
        _arr.at(_n_el) = n;
        _n_el++;
    }
    else
    {
        cout << "#BLAD: Obiekt zapelniony\n";
    }
}
void Warehouse_2::Print()
{
    cout << "#Zawartosc obiektu:\n";
    for(int i=0; i<_n_el; i++)
    {
       cout << _arr.at(i) <<","; 
    }
    cout << endl;
}
int Warehouse_2::Size()
{
    return _n_el;
}
void Warehouse_2::Clear()
{
    _n_el = 0;
}
