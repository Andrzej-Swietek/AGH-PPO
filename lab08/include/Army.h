#ifndef ARMY_H
#define ARMY_H

#include<iostream>
#include <vector>

#include "Soldier.h"

using namespace std;


class Army 
{
public: 

    /**
     * @constructor - Default constructor
    */
    Army();

    /**
     * @constructor 
     * @param[in] s1 - reference to soilder
    */
    Army(AndroidSoldier s1);

    /**
     * @constructor 
     * @param[in] s1 - reference to soilder
     * @param[in] s2 - reference to soilder
    */
    Army(AndroidSoldier s1, AndroidSoldier s2);


     /** @brief Konstruktor z parametrami
    @param[in] n dlugosc tablicy t
    @param[in] t tablica wskaznikow na obiekt klasy AndroidSoldier
    @return nic nie zwraca
    */
    Army(int n, AndroidSoldier *t[]);


    /** @brief Konstruktor z parametrem
    @param[in] v vector zawierajacy obiekty klasy AndroidSoldier
    @return nic nie zwraca
    */
    Army(vector<AndroidSoldier> v);


    /** @brief Konstruktor kopiujacy
    @param[in] a stala referencja do obiektu klasy Army
    @return nic nie zwraca
    */
    Army(const Army &a);


    /** @brief Konstruktor przenoszacy
    @param[in] a stala referencja rvalue do obiektu klasy Army
    @return nic nie zwraca
    */
    Army(Army &&a);


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


    /** @brief method that adds to vector another soldier
     * @param[in] s - reference to newly added soldier  
    */
    void Add(AndroidSoldier s);

private: 
    vector<AndroidSoldier> _arr;
    int _empty = 1;
};

#endif