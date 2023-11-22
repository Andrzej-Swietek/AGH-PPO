#include <iostream>
#include "Stack_2.h"


Stack_2::Stack_2()
{
    this->counter = 0;
}

Stack_2::~Stack_2()
{
    
}

int Stack_2::Pop()
{
    if (this->counter <= 0)
    {
        std::cout<< "#BLAD: Obiekt pusty" << std::endl;
        return -1;
    }

    this->counter--;
    return arr[counter];
}


void Stack_2::Push(int value)
{
    if ( this->counter >= 4 )
    {
        std::cout<< "#BLAD: Obiekt zapelniony" << std::endl;
        return;
    }
    arr[this->counter] = value;
    this->counter++;
}


void Stack_2::Print()
{
    std::cout << "#Zawartosc obiektu: \n";
    if (this->counter == 0 )
        return;


    for ( int i =0; i < this->counter; i++ )
        std::cout << arr[i] << ",";

    std::cout << "\n";
}



bool Stack_2::IsEmpty()
{
    return this->counter == 0;
}

bool Stack_2::IsFull()
{
    return this->counter == 4;
}


int Stack_2::Size()
{
    return this->counter+1;
}

void Stack_2::Clear()
{
    this->counter = 0;
    for ( int i = 0; i < this->counter; i++ )
        arr[i] = 0;
}