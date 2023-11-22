//
// Created by andrzej on 22.11.23.
//

// Stack.cpp
#include "Stack.h"
#include <iostream>

Stack::Stack()
{
}

int Stack::Pop()
{
    std::cerr << "#Error: Pop is not implemented in the derived class." << std::endl;
    return -1;
}

void Stack::Push(int value)
{
    std::cerr << "#Error: Push is not implemented in the derived class." << std::endl;
}

void Stack::Print() const
{
    std::cerr << "#Error: Print is not implemented in the derived class." << std::endl;
}

bool Stack::IsEmpty() const
{
    std::cerr << "#Error: IsEmpty is not implemented in the derived class." << std::endl;
    return true;
}

bool Stack::IsFull() const
{
    std::cerr << "#Error: IsFull is not implemented in the derived class." << std::endl;
    return false;
}

int Stack::Size() const
{
    std::cerr << "#Error: Size is not implemented in the derived class." << std::endl;
    return 0;
}

void Stack::Clear()
{
    std::cerr << "#Error: Clear is not implemented in the derived class." << std::endl;
}
