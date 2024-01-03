#ifndef S_H
#define S_H

#include<iostream>
#include <vector>

// #include "Army.h"

using namespace std;


class AndroidSoldier
{
    friend class Army;
    friend int Compare(const AndroidSoldier &a, const AndroidSoldier &b);

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


    /**
     * ============ LAB 09 ============
    */

    /** @constructor - converting constructor
     * @return no return
    */
    explicit AndroidSoldier(int type);


    /** @brief Method that converts class object explicitly to integer
     *  @return no return
     */    
    explicit operator int();


    /** @brief Method overloading string convertion
     * Allows implicit convertion
     * @retrun no return
    */
    operator string();


    /** @brief Method returning graphical representation of solider as string
     * @return text - string
    */
    string ToString();

private:
    int _type, _quan;
};


/** @brief Comparator function for AndroidSoldiers
 *  Compares quantities of given 2 objects
 * 
 * @return isBigger - int value - just like in C custom comparator
*/
int Compare(const AndroidSoldier &a, const AndroidSoldier &b);


#endif