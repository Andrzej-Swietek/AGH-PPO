#ifndef S_H
#define S_H

#include<iostream>
#include <vector>

// #include "Army.h"

using namespace std;


class AndroidSoldier
{
    friend class Army;

public:

    /**
     * @constructor - Default constructor
    */
    AndroidSoldier();

    /**
     * @constructor - basic army soldier constructor
    */
    AndroidSoldier(int type, int quan);


    /** @brief Method that prints army soldiers
     * @return void
    */
    void Print();


    /** @brief Method that removes all android soldiers
     * @return void
    */
    void Clear();


    /** @brief Method changing quantity
     * @param[in] q - new quantity
    */
    void SetCard(int q);

private:
    int _type, _quan;
};

#endif