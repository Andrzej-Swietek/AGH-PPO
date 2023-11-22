#include "Stack_4.h"

#include <iostream>
#include<vector>

Stack_4::Stack_4()
{
    this->counter = 0;
}

Stack_4::~Stack_4()
{
    
}

int Stack_4::Pop()
{
    if( array.empty() )
    {
        std::cout<< "#BLAD: Obiekt pusty" << std::endl;
        return -1;
    }
    this->counter--;
    int val = array.back();
    array.pop_back();
    return val;
}


void Stack_4::Push(int value)
{
  array.push_back(value);
  this->counter++;
}


void Stack_4::Print()
{
    std::cout << "#Zawartosc obiektu: \n";
    if ( array.empty() )
        return;


    for ( int i =0; i < array.size(); i++ )
        std::cout << array[i] << ",";

    std::cout<< "\n";
}



bool Stack_4::IsEmpty()
{
    return array.empty();
}

bool Stack_4::IsFull()
{
    return false;
}


int Stack_4::Size()
{
    return array.size();
}

void Stack_4::Clear()
{
  while (!array.empty())
  {
    array.pop_back();
  }
}