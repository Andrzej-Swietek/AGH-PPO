#include "Queue_4.h"
#include <iostream>

#include <vector>

using namespace std;

Queue_4::Queue_4()
{
    // ...
}

int Queue_4::Dequeue()
{
    if(_arr.size() == 0)
    {
        cout << "#BLAD: Obiekt pusty\n";
        return 0;
    }
    else
    {
        int r = _arr.front();
        
        vector<int>::iterator it;
        it = _arr.begin();
        _arr.erase(it);

        return r;
    }
}


void Queue_4::Enqueue(int n)
{
    _arr.push_back(n);
}


int Queue_4::IsEmpty()
{
    if(_arr.empty())
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


int Queue_4::IsFull()
{
    return 0;
}

void Queue_4::Print()
{
    vector<int>::iterator it;
    it = _arr.begin();

    cout << "#Zawartosc obiektu:\n";
    for(it = _arr.begin(); it != _arr.end(); it++ )
    {
        cout << *it <<",";
    }
    cout << endl;
    
}


int Queue_4::Size()
{
    return _arr.size();
}


void Queue_4::Clear()
{
    _arr.clear();
}
