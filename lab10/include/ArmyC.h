#ifndef ARMY_C_H
#define ARMY_C_H

#include<iostream>
#include <vector>


#include "AndroidSoldier.h"

using namespace std;

class ArmyC
{
public:
    /** @brief Konstruktor domyslny
    * @return nic nie zwraca
    */
    ArmyC();


    /** @brief Konstruktor kopiujacy
    * @param[in] w stala referencja do obiektu klasy ArmyC
    * @return nic nie zwraca
    */
    ArmyC(const ArmyC &w);


    /** @brief Konstruktor przenaszacy
    * @param[in] w stala referencja do obiektu klasy ArmyC
    * @return nic nie zwraca
    */
    ArmyC(ArmyC &&w);


    /** @brief Kopiujacy operator przypisania
    * @param[in] w stala referencja do obiektu klasy ArmyC
    * @return zwraca referencje do obiektu
    */
    ArmyC &operator=(const ArmyC& other);


    /** @brief Przenoszacy operator przypisania
    * @param[in] w stala referencja do obiektu klasy ArmyC
    * @return zwraca referencje do obiektu
    */
    ArmyC& operator=(ArmyC&& other);


    /** @brief Destruktor
    * @return nic nie zwraca
    */
    ~ArmyC();


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
    AndroidSoldier * _array;
    int _size;
    int _number_of_element;
};


#endif