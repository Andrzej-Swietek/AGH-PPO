#include "AndroidSoldier.h"



AndroidSoldier::AndroidSoldier(): _type(0), _quantity(0){};


AndroidSoldier::AndroidSoldier(int t, int q): _type(t), _quantity(q){};


 // ============ OPERATORS OVERLOAD  ============ 


AndroidSoldier AndroidSoldier::operator++(int i)
{
    AndroidSoldier tmp = *this;
    _quantity++;
    return tmp;
}

AndroidSoldier& AndroidSoldier::operator++()
{
    _quantity++;
    return *this;
}


AndroidSoldier AndroidSoldier::operator--(int i)
{
    AndroidSoldier tmp = *this;
    _quantity--;
    if(_quantity < 0){ _quantity=0;}
    return tmp;
}


AndroidSoldier& AndroidSoldier::operator--()
{
    _quantity--;
    if(_quantity < 0){ _quantity=0;}
    return *this;
}


AndroidSoldier& AndroidSoldier::operator+(int i)
{
    _quantity += i;
    return *this;
}


AndroidSoldier& AndroidSoldier::operator-(int i)
{
    _quantity -= i;
    if(_quantity < 0){ _quantity=0;}
    return *this;
}


AndroidSoldier& AndroidSoldier::operator=(const AndroidSoldier& other)
{
    if(this==&other){return *this;}
    _type=other._type;
    _quantity=other._quantity;
    return *this;
}


AndroidSoldier& AndroidSoldier::operator*(int i)
{
    _quantity *= i;
    return *this;
}


std::ostream& operator<<(std::ostream& os, const AndroidSoldier& p)
{
    os<< "typ: " << p._type << ", ilosc sztuk: " << p._quantity << "\n";
    return os;
}