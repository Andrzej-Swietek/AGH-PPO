#include "Queue_2.h"
#include <iostream>

#include<array>

using namespace std;

Queue_2::Queue_2()
{

}


int Queue_2::Dequeue()
{
    if(this->_n_el == 0)
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


void Queue_2::Enqueue(int n)
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


int Queue_2::IsEmpty()
{
    if(this->_n_el==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


int Queue_2::IsFull()
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


void Queue_2::Print()
{
    cout << "#Zawartosc obiektu:\n";
    for(int i=0; i<_n_el; i++)
    {
       cout << _arr.at(i) <<","; 
    }
    cout << endl;
}


int Queue_2::Size()
{
    return this->_n_el;
}


void Queue_2::Clear()
{
    this->_n_el = 0;
}
