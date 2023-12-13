#include <iostream>
#include "Army.h"
#include "AndroidSoldier.h"
#include <vector>

using namespace std;


AndroidSoldier::AndroidSoldier(): _type(0), _quan(0){};


AndroidSoldier::AndroidSoldier(int t, int q): _type(t), _quan(q){};


void AndroidSoldier::Print()
{
    cout << "typ: " << _type << ", ilosc sztuk: " << _quan << endl;
}


void AndroidSoldier::Clear()
{
    _quan = 0;
    _type = 0;
}


void AndroidSoldier::SetCard(int q)
{
    _quan = q;
}


/**
 * ============ LAB 09 ============
*/


AndroidSoldier::AndroidSoldier(int type): _type(type), _quan(0) {};

string AndroidSoldier::ToString()
{
    return "<typ="+to_string(_type)+", ilosc="+to_string(_quan)+">";
}


AndroidSoldier::operator int()
{
    return _type;
}


AndroidSoldier::operator string()
{
    return AndroidSoldier::ToString();
}


int Compare(const AndroidSoldier &a, const AndroidSoldier &b)
{
    if(a._quan>b._quan)
    {
        return 1;
    }
    else if(a._quan==b._quan)
    {
        return 0;
    }
    return -1;
}
