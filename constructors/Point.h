//
// Created by andrzej on 03.12.23.
//

#ifndef ARRAY_POINT_H
#define ARRAY_POINT_H

#include<iostream>

class Point
{
public:

    /** @brief Kontruktor Domniemany
     *
     * Konstruktor domniemany to taki, który można
     * wywołać bez żadnych argumentów
     */
    Point();


    /**
     * Lista Inicjalizacyjna
     *
     * @param[in] x
     * @param[in] y
     */
    Point(int x, int y): _x(x), _y(y)
    {
        // ...
    }

    /**
     * 4 Konstruktory w 1 - z wartościami domyślnymi
     *
     * Kolejność wykonywania zależy od kolejności definicji w klasie a destruktora odwrotny
     *
     * @param[in] x
     * @param[in] y
     * @param[in] name
     */
    Point(int x=0, int y=0, const std::string& name = "") : _x(x), _y(y), _name(name), _cxx{1010}
    {std::cout << "Konstruktor Point(" << _name << ").\n"; }


    /**
     * Konstruktor kopiujący
     *
     *  - Przyjmuje referencję
     *  - Tworzy kopię istniejącego obiektu
     *  - Często sam kompilator tworzy
     *  - Jeżeli używamy 'new' w programie to tworzymy go
     *  - Jeśli używamy smart_pointerów to nie musimy
     *  - Jak go robimy prawie napewno chemy overloadować operator=
     *
     * @param point
     */
    Point(const Point &point);


    /**
     * Konstruktor kopiujący z dodatkowym parametrem
     * @param point
     * @param name
     */
    Point(const Point &point, std::string &name);


    /**
     * Konstruktpr Delegowany
     *
     * Wywołanie istniejącego konstruktora aby dodać więcej pól
     *
     * @param x
     * @param y
     * @param name
     * @param cxx
     */
    Point(int x, int y, const std::string &name, int cxx): Point(x,y,name)
    {
        this->_cxx = cxx;
    }


    ~Point();

    static Point Center(int x, int y);

private:
    int _x;
    int _y;
    std::string _name;
    int _cxx;


    /** Konstruktor prywatny
     * możemy zrobić funkcje statyczną wywołująca go tp. GetInstance itd
    */
    Point(int x, int y, int cxx)
    {
        this->_x = x; this->_y = y;
        this->_name = "srodek";
        this->_cxx = 0;
    }
};


inline Point Point::Center(int x, int y)
{
    return Point(x,y,2);
}

#endif //ARRAY_POINT_H
