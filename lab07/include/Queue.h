#ifndef QUEUE_H
#define QUEUE_H



class Queue
{
    /** @brief funkcja sprawdza czy tablica jest pusta
    * funkcja sprawdza czy tablica jest pusta
    * @return  jak jest pusta to zwraca 1, a jak nie - 0
    */
    virtual int IsEmpty() = 0;


    /** @brief funkcja sprawdza czy tablica jest pelna
    * funkcja sprawdza czy tablica jest pelna
    * @return  jak jest pelna to zwraca 1, a jak nie - 0
    */
    virtual int IsFull() = 0;


    /** @brief funkcja usuwa element tablicy
    * funkcja usuwa ostatni element tablicy
    * @return nic nie zwraca
    */
    virtual int Dequeue() = 0;


    /** @brief funkcja wstawia element do tablicy
    * funkcja wstawia element do tablicy
    * @return  nic nie zwraca
    */
    virtual void Enqueue(int n) = 0;


    /** @brief funkcja wypisuje elementy tablicy
    * funkcja wypisuje elementy tablicy
    * @return  nic nie zwraca
    */
    virtual void Print() = 0;


    /** @brief funkcja sprawdza ilosc elementow tablicy
    * funkcja sprawdza ilosc elementow tablicy
    * @return  funkcja zwraca ilosc elementow tablicy
    */
    virtual int Size() = 0;


    /** @brief funkcja czysci tablice
    * funkcja ustawia ilosc elementow na 0
    * @return  nic nie zwraca
    */
    virtual void Clear() = 0;
};

#endif