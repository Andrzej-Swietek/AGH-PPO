#ifndef QUEUE_4_H
#define QUEUE_4_H
#include "Queue.h"
#include <vector>

using namespace std;

class Queue_4 : public Queue
{
public:
     /** @brief Konstruktor Domyślny Queue_2
    *  @constructor
    */
    Queue_4();

    /** @brief funkcja sprawdza czy tablica jest pusta
    * funkcja sprawdza czy tablica jest pusta
    * @return  jak jest pusta to zwraca 1, a jak nie - 0
    */
    int IsEmpty();


    /** @brief funkcja sprawdza czy tablica jest pelna
    * funkcja sprawdza czy tablica jest pelna
    * @return  jak jest pelna to zwraca 1, a jak nie - 0
    */
    int IsFull();


    /** @brief funkcja usuwa element tablicy
    * funkcja usuwa ostatni element tablicy
    * @return nic nie zwraca
    */
    int Dequeue();


    /** @brief funkcja wstawia element do tablicy
    * funkcja wstawia element do tablicy
    * @return  nic nie zwraca
    */
    void Enqueue(int n);


    /** @brief funkcja wypisuje elementy tablicy
    * funkcja wypisuje elementy tablicy
    * @return  nic nie zwraca
    */
    void Print();


    /** @brief funkcja sprawdza ilosc elementow tablicy
    * funkcja sprawdza ilosc elementow tablicy
    * @return  funkcja zwraca ilosc elementow tablicy
    */
    int Size();


    /** @brief funkcja czysci tablice
    * funkcja ustawia ilosc elementow na 0
    * @return  nic nie zwraca
    */
    void Clear();

private:
    vector<int> _arr;
    int _n_el;
};

#endif