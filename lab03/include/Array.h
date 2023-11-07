#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>


/** @brief function alocating on head and initializing new array
 * 
 * @param[in] size - how big array is supposed to be
 * @return pointer to new array
 * 
*/
int* InitArray(int size);

/** @brief function that modifies array to set its valu to givent sequence
 * @param[in] array
 * @param[in] size - how long your array is
 * @return void
 * 
*/
void CreateSequence(int* array, int size);



/** @brief Function that changes arrays length 
 * 
 * @param[in] array - pointer to array
 * @param[in] currentSize - how big array is at the moment
 * @param[in] newSize - the size we want to chnage it to
 * @return new pointer to longer array
 * 
*/
int* ChangeArraySize(int* array, int currentSize, int newSize);



/** @brief Function that deletes array
 * 
 * @param[in] array - pointer to array
 * @return void 
 * 
*/
void DeleteArray(int* array);

#endif