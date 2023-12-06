#include <iostream>
#include "Warehouse.h"
#include <vector>

using namespace std;

Product::Product(): _type(0), _quan(0){};
Product::Product(int t, int q): _type(t), _quan(q){};

void Product::Print()
{
    cout << "typ: " << _type << ", ilosc sztuk: " << _quan << endl;
}
void Product::SetCard(int q)
{
    _quan = q;
}

Warehouse::Warehouse(){};
Warehouse::Warehouse(Product p)
{
    _empty=0;
    _arr.push_back(p);
}
Warehouse::Warehouse(Product p1, Product p2)
{
    _empty=0;
    _arr.push_back(p1);
    _arr.push_back(p2);
}
Warehouse::Warehouse(int n, Product *t[])
{
    _empty=0;
    for(int i=0;i<n;i++)
    {
        _arr.push_back(*t[i]);
    }
}
Warehouse::Warehouse(vector<Product> v)
{
    _empty=0;
    vector<Product>::iterator it;
    it = v.begin();

    for(it = v.begin(); it != v.end(); it++ )
    {
       _arr.push_back(*it);
    }
}
Warehouse::Warehouse(const Warehouse &w)
{
    _empty=0;
    _arr = w._arr;

}
Warehouse::Warehouse(Warehouse &&w)
{
    _empty=0;
    _arr = move(w._arr);
}

void Warehouse::Remove()
{
    _arr.pop_back();
}
void Warehouse::Add(Product p)
{
    _arr.push_back(p);
}
void Warehouse::Print()
{
    cout << "---\n# Zawartosc/sklad:\n";
    if(_empty==1)
    {
        cout << "---\nBLAD: Pusto !\n";
        return;
    }
    vector<Product>::iterator it;
    it = _arr.begin();

    for(it = _arr.begin(); it != _arr.end(); it++ )
    {
       (*it).Print();
    }
    cout << "---\n";
}
void Warehouse::Clear()
{
    _arr.clear();
}
