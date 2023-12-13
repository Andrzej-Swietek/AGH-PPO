#ifndef W
#define W

#include <vector>
#include <string>

using namespace std;

class Warehouse;

class Product
{
    friend class Warehouse;

    /** @brief Funkcja porownujaca
    @param[in] a Product 1
    @param[in] b Product 2
    @return zwraca wynik porownania
    */
    friend int Compare(const Product &a, const Product &b);

public:
    /** @brief Konstruktor domyslny
    @return nic nie zwraca
    */
    Product();

    /** @brief Konstruktor z parametrem, do rzutowania
    @return nic nie zwraca
    */
    explicit Product(int id);

    /** @brief Konstruktor z parametrami
    @param[in] t typ
    @param[in] q ilosc
    @return nic nie zwraca
    */
    Product(int t, int q);

    /** @brief Funkcja konwertujaca na int
    @return nic nie zwraca
    */
    explicit operator int();

    /** @brief Funkcja konwertujaca na string
    @return nic nie zwraca
    */
    operator string();

    /** @brief Funkcja generujaca string
    @return zwraza string z danymi produktu
    */
    string ToString();

    /** @brief funkcja printujaca
    funkcja wyswietla w terminalu wlasciwosci obiektu
    @return nic nie zwraca
    */
    void Print();

    /** @brief funkcja zmieniajaca pole obiektu
    Funkcja zmienia ilosc obiektu
    @param[in] q ilosc
    @return  nic nie zwraca
    */
    void SetCard(int q);

private:
    int _type, _quan;

};


class Warehouse
{
public:
    /** @brief Konstruktor domyslny
    @return nic nie zwraca
    */
    Warehouse();

    /** @brief Konstruktor z parametrem
    @param[in] p obiekt klasy Product
    @return nic nie zwraca
    */
    Warehouse(Product p);

    /** @brief Konstruktor z parametrami
    @param[in] p1 obiekt klasy Product
    @param[in] p2 obiekt klasy Product
    @return nic nie zwraca
    */
    Warehouse(Product p1, Product p2);

    /** @brief Konstruktor z parametrami
    @param[in] n dlugosc tablicy t
    @param[in] t tablica wskaznikow na obiekt klasy Product
    @return nic nie zwraca
    */
    Warehouse(int n, Product *t[]);

    /** @brief Konstruktor z parametrem
    @param[in] v vector zawierajacy obiekty klasy Product
    @return nic nie zwraca
    */
    Warehouse(vector<Product> v);

    /** @brief Konstruktor kopiujacy
    @param[in] w stala referencja do obiektu klasy Warehouse
    @return nic nie zwraca
    */
    Warehouse(const Warehouse &w);

    /** @brief Konstruktor przenoszacy
    @param[in] w stala referencja rvalue do obiektu klasy Warehouse
    @return nic nie zwraca
    */
    Warehouse(Warehouse &&w);

    /** @brief Funkja konwertujaca na int
    @return nic nie zwraca
    */
    explicit operator int();


    /** @brief funkcja usuwa element tablicy
    funkcja usuwa ostatni element tablicy
    @return nic nie zwraca
    */
    void Remove();

    /** @brief funkcja wstawia element do tablicy
    funkcja wstawia element do tablicy
    @return nic nie zwraca
    */
    void Add(Product p);

    /** @brief funkcja wypisuje elementy tablicy
    funkcja wypisuje elementy tablicy
    @return nic nie zwraca
    */
    void Print();

    /** @brief funkcja czysci tablice
    funkcja ustawia ilosc elementow na 0
    @return nic nie zwraca
    */
    void Clear();

private:
    vector<Product> _arr;
    int _empty = 1;
};



#endif