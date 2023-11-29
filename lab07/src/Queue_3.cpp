#include "Queue_3.h"
#include <iostream>

using namespace std;

Queue_3::Queue_3(int i)
{
    _size = i;
    _arr = new int[i];
    _n_el = 0;
}


Queue_3::~Queue_3()
{
    delete [] _arr;
}


int Queue_3::Dequeue()
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
            _arr[i] = _arr[i+1];
        }
        _n_el--;
        return _arr[0];
    }
}


int Queue_3::IsEmpty()
{
    if(_n_el == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


int Queue_3::IsFull()
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


void Queue_3::Enqueue(int n)
{
    if(_n_el < _size)
    {
        _arr[_n_el] = n;
        _n_el++;
    }
    else
    {
        int * new_arr = new int[2*_size];
        for(int i = 0; i < _size; i++)
        {
            new_arr[i] = _arr[i];
        }
        new_arr[_size] = n;
        _n_el++;
        _size *= 2;
        delete [] _arr;
        _arr = new_arr;
        
    }
}


void Queue_3::Print()
{
    cout << "#Zawartosc obiektu:\n";
    for(int i=0; i<_n_el; i++)
    {
       cout << _arr[i] <<","; 
    }
    cout << endl;
}


int Queue_3::Size()
{
    return _n_el;
}


void Queue_3::Clear()
{
    _n_el = 0;
}
