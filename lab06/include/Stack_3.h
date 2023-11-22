#ifndef STACK_3_H
#define STACK_3_H

class Stack_3
{
    public:
        /**
         * @constructor
        */
        Stack_3(int size);


        /**
         * @destructor
        */
        ~Stack_3();

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
        int* array = nullptr;
        int counter = 0;
        int size = 4;
};
#endif