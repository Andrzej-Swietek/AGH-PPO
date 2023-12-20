#ifndef ARMY_B_H
#define ARMY_B_H

#include<iostream>
#include <vector>


#include "AndroidSoldier.h"

using namespace std;


class ArmyB
{
public:

    /** @brief Konstruktor domyslny
    * @return nic nie zwraca
    */
    ArmyB();


    /** @brief Konstruktor kopiujacy
    * @param[in] w stala referencja do obiektu klasy WarehouseC
    * @return nic nie zwraca
    */
    ArmyB(const ArmyB &w);


    /** @brief Kopiujacy operator przypisania
    * @param[in] w stala referencja do obiektu klasy WarehouseC
    * @return zwraca referencje do obiektu
    */
    ArmyB &operator=(const ArmyB& other);


    /** @brief Destruktor
    * @return nic nie zwraca
    */
    ~ArmyB();


    /** @brief Funkcja usuwa element tablicy
    * Funkcja usuwa ostatni element tablicy
    * @return nic nie zwraca
    */
    void Remove();


    /** @brief Funkcja wstawia element do tablicy
    * Funkcja wstawia element do tablicy
    * @return nic nie zwraca
    */
    void Add(AndroidSoldier p);


    /** @brief funkcja wypisuje elementy tablicy
    * Funkcja wypisuje elementy tablicy
    * @return nic nie zwraca
    */
    void Print();


    /** @brief funkcja czysci tablice
    * Funkcja ustawia ilosc elementow na 0
    * @return nic nie zwraca
    */
    void Clear();

private:
    AndroidSoldier * _array;
    int _size;
    int _number_of_element;
};
#endif