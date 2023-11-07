#include "Array.h"

using namespace std;


int* InitArray(int size)
{
    int* arr = new int[size];
    return arr;
}


void CreateSequence(int* array, int size)
{
    int sum = 0;
    for ( int i = 0; i < size ; i++ ) 
    {
        array[i] = sum + i;
    }
}

void DeleteArray(int* array)
{
    delete[] array;
}


int* ChangeArraySize(int* array, int currentSize, int newSize)
{
    int* newArray = new int[newSize];
    for (int i = 0; i < newSize; i++)
    {
        if( i < currentSize ) {
            newArray[i] = array[i];
        } else {
            newArray[i] = 0;
        }
    }

    DeleteArray(array);
    return newArray;
}

