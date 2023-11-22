#include "Stack_3.h"

#include <iostream>




Stack_3::Stack_3(int size)
{
    this->counter = size;
    this->size = size;
    this->array = new int[size];
    for (int i=0; i < size; i++) 
    {
        array[i] = 0;
    }
}

Stack_3::~Stack_3()
{
    delete[] array;
}

int Stack_3::Pop()
{
    if (this->counter <= 0)
    {
        std::cout<< "#BLAD: Obiekt pusty" << std::endl;
        return -1;
    }

    this->counter--;
    return array[counter];
}


void Stack_3::Push(int value)
{
    if ( this->counter >= this->size )
    {
        delete[] array;
        array = new int[2*this->size];
    }
    array[this->counter] = value;
    this->counter++;
}


void Stack_3::Print()
{
    std::cout << "#Zawartosc obiektu: \n";
    if (this->counter == 0 )
        return;


    for ( int i =0; i < this->counter; i++ )
        std::cout << array[i] << ",";

    std::cout << "\n";
}



bool Stack_3::IsEmpty()
{
    return this->counter == 0;
}

bool Stack_3::IsFull()
{
    return this->counter == this->size;
}


int Stack_3::Size()
{
    return this->counter+1;
}

void Stack_3::Clear()
{
    this->counter = 0;
    for ( int i = 0; i < this->counter; i++ )
        array[i] = 0;
}