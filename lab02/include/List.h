#ifndef LIST_H
#define LIST_H


// Element listy
struct slistEl
{
  slistEl * next;
  char data;
};

// Lista
struct slist
{
  slistEl * head;
};


/** @brief Inicjalizacja nowej linked listy
 * 
 * Funkcja przypisuje null do heada listy
 * 
 * @param[in] list wskaznik do listy
 * @return void funkcja nie zwraca wartosci
*/
void init(slist * list);


/** @brief Dodanie wartosci do Linked listy na jej koniec
 * 
* Funkcja dołącza nowy element jako element next dla obecnie osttaniego elementu listy
* 
* @param[in] list wskaznik do listy
* @param[in] c wartosc dodawanego elementu
* @return void funkcja nie zwraca wartosci
*/
void push_back(slist * list, char c);


/** @brief Usuwanie po zadanym elemencie
 * 
 * Funkcja usuwająca element po zadanym elemencie
 * 
 * @param[in] e wskaznik do elementu po ktorym usuwwamy element
*/
void delete_after(slistEl * e);


/** @brief Wyszukanie elementu w liscie.
*
* Funkcja przeszukuje liste w celu znalezienia podanego elementu.
*
* @param[in] list  wskaznik do listy
* @param[in] c  wartosc szukanego elementu 
* @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
* NULL jesli lista nie posiada elementu o wartosci c
*/
slistEl * find(slist * list, char c);


/** @brief Wypisywanie Linked listy
 * 
 * Funkcja wypisuje kolejno element po elemencie wartosci listy
 * 
 * @param list wskaznik do lisy
 * @return void funkcja nic nie zwraca
*/
void printl(slist * list);

#endif
