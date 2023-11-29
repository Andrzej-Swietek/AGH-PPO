#include "Queue_1.h"
#include <iostream>


using namespace std;

Queue_1::Queue_1() 
{
    //
}

int Queue_1::Dequeue()
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
int Queue_1::IsEmpty()
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
int Queue_1::IsFull()
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
void Queue_1::Enqueue(int n)
{
    if(_n_el < _size)
    {
        _arr[_n_el] = n;
        _n_el++;
    }
    else
    {
        cout << "#BLAD: Obiekt zapelniony\n";
    }
    
}
void Queue_1::Print()
{
    cout << "#Zawartosc obiektu:\n";
    for(int i=0; i<_n_el; i++)
    {
       cout << _arr[i] <<","; 
    }
    cout << endl;
}
int Queue_1::Size()
{
    return _n_el;
}
void Queue_1::Clear()
{
    _n_el = 0;
}