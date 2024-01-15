#ifndef SOLDIER_H
#define SOLDIER_H

#include<iostream>


using std::cout;



class AndroidSoldier
{
    friend class Army;

public:

    /** @brief Default Constructor
    * @return no retrurn
    */
    AndroidSoldier();


    /** @brief Constructor with params
    * @param[in] t type
    * @param[in] q quantity
    * @return no return
    */
    AndroidSoldier(int t, int q);


    // ============ OPERATORS OVERLOAD  ============ 

    /** @brief Postincrementation operator overloading
    * @param[in] i operator signature
    * @return Temporaty object
    */
    AndroidSoldier operator++(int i);


    /** @brief Postincrementation operator overload
    * @return Reference to the object
    */
    AndroidSoldier& operator++();


    /** @brief Post-decrementation operator overload
    * @param[in] i operator signature
    * @return Temporary object
    */
    AndroidSoldier operator--(int i);


    /** @brief Pre-decrementation operator  overload
    * @return Reference to the object
    */
    AndroidSoldier& operator--();


    /** @brief Sum operator overload
    * @param[in] i added value
    * @return Reference to the object
    */
    AndroidSoldier& operator+(int i);


    /** @brief Subtraction operator overload
    * @param[in] i subtracted value
    * @return Reference to the object
    */
    AndroidSoldier& operator-(int i);


    /** @brief Copy assign operator 
    * @param[in] other const reference to object of class AndroidSoldier
    * @return Reference to the object
    */
    AndroidSoldier& operator=(const AndroidSoldier& other);


    /** @brief Multiplication operator overloading
    * @param[in] i value that we multiply with
    * @return ArmySoldier object reference
    */
    AndroidSoldier& operator*(int i);


    /** @brief Redirect stream operator overload 
     * 
     * Friend global function for cout << overload
     * 
    * @param[in] os ostream object reference
    * @param[in] p const reference of class AndroidSoldier
    * @return ostream reference
    */
    friend std::ostream& operator<<(std::ostream& os, const AndroidSoldier& p);
    
private:
    int _type, _quantity;
};



/** @brief Redirect stream operator overload 
 * 
 * Friend global function for cout << overload
 * 
* @param[in] os ostream object reference
* @param[in] p const reference of class AndroidSoldier
* @return ostream reference
*/
std::ostream& operator<<(std::ostream& os, const AndroidSoldier& p);



#endif