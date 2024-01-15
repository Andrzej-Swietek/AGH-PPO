#ifndef ARMY_H
#define ARMY_H

#include<iostream>
#include<ostream>

#include "AndroidSoldier.h"

using std::cout;


class Army
{
public:

    /** @brief Default onstructor
    * @return no return
    */
    Army();


    /** @brief Copy Constructor
    * @param[in] a const reference to object of class Army
    * @return no return
    */
    Army(const Army &a);


    // ============ OPERATORS OVERLOAD  ============ 


    /** @brief Sum operator overload
    * @param[in] i Added value
    * @return Reference to the object
    */
    Army& operator+(int i);


    /** @brief Subtraction operator overload
    * @param[in] i subtracted value
    * @return Reference to the object
    */
    Army& operator-(int i);


    /** @brief Multiplication operator overload
    * @param[in] i value that we multiply with
    * @return Army object reference
    */
    Army& operator*(int i);


    /** @brief Subscription operator overload
    * @param[in] i index
    * @return Reference to ArmySoldier object at given index
    */
    AndroidSoldier& operator[](int i);


    /** @brief Copy assign operator 
    * @param[in] other const reference to object of class Army
    * @return Reference to the object
    */
    Army& operator=(const Army& other);


    /** @brief Redirect stream operator overload 
     * 
     * Friend global function for cout << overload
     * 
    * @param[in] os ostream object reference
    * @param[in] p const reference of class Army
    * @return ostream reference
    */
    friend std::ostream& operator<<(std::ostream& os, const Army& w);


    // ============ METHODS  ============ 

    /** @brief Method that adds new soldier
     * 
    * Inserts new element to the table if possible
    * 
    * @return void
    */
    void Add(AndroidSoldier p);


    /** @brief Method that prints army soldiers
    * @return void
    */
    void Print();


    /** @brief Method that removes all android soldiers
     * @return void
    */
    void Clear();


    /** @brief Method that removes last element of array/vector
     * @retrun void
    */
    void Remove();


private:
    AndroidSoldier _arr[10];
    int _number_of_elements = 0;
    int _size = 10;
};


std::ostream& operator<<(std::ostream& os, const Army& a);


#endif