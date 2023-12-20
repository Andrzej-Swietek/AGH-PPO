#ifndef ARMY_A_H
#define ARMY_A_H

#include<iostream>
#include <vector>

#include "AndroidSoldier.h"

using namespace std;


class ArmyA
{
public:
    /** @brief Konstruktor domyslny
    * @return nic nie zwraca
    */
    ArmyA();


    /** @brief Konstruktor z parametrem
    * @param[in] p obiekt klasy AndroidSoldier
    * @return nic nie zwraca
    */
    ArmyA(AndroidSoldier p);


    /** @brief Konstruktor kopiujacy
    * @param[in] w stala referencja do obiektu klasy ArmyA
    * @return nic nie zwraca
    */
    ArmyA(const ArmyA &w);


    /** @brief Funkcja usuwa element tablicy
    * funkcja usuwa ostatni element tablicy
    * @return nic nie zwraca
    */
    void Remove();


    /** @brief Funkcja wstawia element do tablicy
    * funkcja wstawia element do tablicy
    * @return nic nie zwraca
    */
    void Add(AndroidSoldier p);


    /** @brief Funkcja wypisuje elementy tablicy
    * funkcja wypisuje elementy tablicy
    * @return nic nie zwraca
    */
    void Print();


    /** @brief Funkcja czysci tablice
    * funkcja ustawia ilosc elementow na 0
    * @return nic nie zwraca
    */
    void Clear();

private:
    AndroidSoldier _array[10];
    int _number_of_element = 0;
    int _size = 10;
};


#endif