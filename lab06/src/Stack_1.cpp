#include <iostream>
#include "Stack_1.h"

        Stack_1::Stack_1()
        {
            for(int i = 0; i < Stack_1::SIZE; i++)
                array[i] = 0;
            this->counter = 0;
        }



        Stack_1::~Stack_1()
        {
            
        }


        int Stack_1::Pop()
        {
            if (counter <= 0)
            {
                std::cout<< "#BLAD: Obiekt pusty" << std::endl;
                return -1;
            }

            this->counter--;
            array[counter] = 0;
            return array[counter];
        }


        void Stack_1::Push(int value)
        {
            if ( this->counter >= SIZE )
            {
                std::cout<< "#BLAD: Obiekt zapelniony" << std::endl;
            }
            array[this->counter] = value;
            this->counter++;
        }


        void Stack_1::Print()
        {
            std::cout << "#Zawartosc obiektu: \n";
            if (this->counter == 0 )
                return;
  

            for ( int i =0; i < SIZE; i++ )
                std::cout << array[i] << ",";

            std::cout << "\n";
        }



        bool Stack_1::IsEmpty()
        {
            return this->counter == 0;
        }

        bool Stack_1::IsFull()
        {
            return this->counter == Stack_1::SIZE;
        }


        int Stack_1::Size()
        {
            return this->counter+1;
        }

        void Stack_1::Clear()
        {
            this->counter = 0;
            for ( int i =0; i < SIZE; i++ )
                this->array[i] = 0;
        }