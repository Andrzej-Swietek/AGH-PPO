#ifndef STACK_4_H
#define STACK_4_H

#include<iostream>
#include<vector>

class Stack_4
{
    public:
        /**
         * @constructor
        */
        Stack_4();


        /**
         * @destructor
        */
        ~Stack_4();

        /**
         * @brief Method that gets the top element of the stack
         * @return value of last element on stack
        */
        int Pop();


        /**
         * @brief Method that adds one more element to the stack
         * @param[in] value - the actual value we want to add the the stack
         * @return void
        */
        void Push(int value);


        /**
         * @brief Method that prints all items on stack
         * @return void
        */
        void Print();


        /**
         * @brief Method that checks if stack is empty
         * @return true or false depending on the state of stack
        */
        bool IsEmpty();

        /**
         * @brief Mthod that checks if stack has reached its maximum capacity
         * @return true false depending on its fullness
        */
        bool IsFull();

        /**
         * @brief Method that gets the current size of stack
         * @return value of how big is the stack 
        */
        int Size();

        /**
         * Method that removes all elements from stack
        */
        void Clear();
    private: 
        std::vector<int> array;   
        int counter;
};
#endif