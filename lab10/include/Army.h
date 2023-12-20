#ifndef ARMY_H
#define ARMY_H


class Army {

    /** @brief Funkcja usuwa element tablicy
    * Funkcja usuwa ostatni element tablicy
    * @return nic nie zwraca
    */
    virtual void Remove();


    /** @brief Funkcja wypisuje elementy tablicy
    * Funkcja wypisuje elementy tablicy
    * @return nic nie zwraca
    */
    virtual void Print();


    /** @brief Funkcja czysci tablice
    * Funkcja ustawia ilosc elementow na 0
    * @return nic nie zwraca
    */
    virtual void Clear();
};

#endif