#include <iostream>
#include "Warehouse_4.h"
#include <vector>

using namespace std;

int Warehouse_4::Remove()
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
int Warehouse_4::IsEmpty()
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
int Warehouse_4::IsFull()
{
    return 0;
}
void Warehouse_4::Insert(int n)
{
    _arr.push_back(n);
}
void Warehouse_4::Print()
{
    vector<int>::iterator it;
    it = _arr.begin();

    cout << "#Zawartosc obiektu:\n";
    for(it = _arr.begin(); it != _arr.end(); it++ )
    {
        cout << *it <<",";
    }
    cout << endl;
    
    // for(int i=0; i<_arr.size(); i++)
    // {
       
    // }
    
}
int Warehouse_4::Size()
{
    return _arr.size();
}
void Warehouse_4::Clear()
{
    _arr.clear();
}
