#include <iostream>
#include "Army.h"
#include "Soldier.h"
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


