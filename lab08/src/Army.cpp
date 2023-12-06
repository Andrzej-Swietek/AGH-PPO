#include <iostream>
#include "Army.h"
#include "Soldier.h"
#include <vector>

using namespace std;


class AndroidSoldier;

Army::Army()
{
    // Leave as it is
}


Army::Army(AndroidSoldier s1)
{
    _empty=0;
    _arr.push_back(s1);
}


Army::Army(AndroidSoldier s1, AndroidSoldier s2)
{
    _empty=0;
    _arr.push_back(s1);
    _arr.push_back(s2);
}


Army::Army(int n, AndroidSoldier *t[])
{
    _empty=0;
    for(int i=0;i<n;i++)
    {
        _arr.push_back(*t[i]);
    }
}


Army::Army(vector<AndroidSoldier> v)
{
    _empty=0;
    vector<AndroidSoldier>::iterator it;
    it = v.begin();

    for(it = v.begin(); it != v.end(); it++ )
    {
       _arr.push_back(*it);
    }
}


Army::Army(const Army &a)
{
    _empty=0;
    _arr = a._arr;
}


Army::Army(Army &&a)
{
    _empty=0;
    _arr = std::move(a._arr);
}


void Army::Remove()
{
    _arr.pop_back();
}


void Army::Add(AndroidSoldier s)
{
    _arr.push_back(s);
}


void Army::Clear()
{
    _arr.clear();
}


void Army::Print()
{
 cout << "---\n# Zawartosc/sklad:\n";
    if(_empty==1)
    {
        cout << "---\nBLAD: Pusto !\n";
        return;
    }
    vector<AndroidSoldier>::iterator it;
    it = _arr.begin();

    for(it = _arr.begin(); it != _arr.end(); it++ )
    {
       (*it).Print();
    }
    cout << "---\n";
}
