//
// Created by andrzej on 03.12.23.
//

#ifndef ARRAY_POINT_H
#define ARRAY_POINT_H

#include<iostream>
#include <string>
#include <utility>

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


    /**
     * Konstruktor przenoszący
     *
     *  - Argumentem jest tzw. referencja do nienazwanych zmiennych istniejących tylko w trakcie wyznaczania
     *      wartości wyrażenia
     *
     *  - Generalnie umożliwia przenoszenie obiektów, zapobiegając kosztownemu kopiowaniu
     *
     *  - Typowo konstruktor tego typu uruchamiany jest kiedy obiekt jest inicjalizowany używając wartości tymczasowej
     *
     * @param point R-wartość referencja do obiektu, którego zasoby chcemy przenieść
     */
    Point(Point&& point) noexcept
            : _x(std::exchange(point._x, 0)),
              _y(std::exchange(point._y, 0)),
              _name(std::move(point._name)),
              _cxx(std::exchange(point._cxx, 0))
    {
        std::cout << "Konstruktor przenoszący Point(" << _name << ").\n";
    }

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


/**
 * std::exchange:
 * Jest funkcją szablonową dostępna od C++14.
 * Służy do wymiany (zamiany) wartości obiektu na nową wartość.
 * Zwraca poprzednią wartość obiektu, przed zamianą.
 * Jest bezpieczna i wygodna w użyciu, szczególnie w kontekście jednoczesnego pobrania starej wartości i przypisania nowej.
 * Przydatna w przypadku przenoszenia zasobów i jednoczesnej inicjalizacji obiektu na nowo.
 * Przykład użycia std::exchange:
 * ```cpp
 * int old_value = std::exchange(some_variable, new_value);
 *```
 */


/**
* std::move:
 * Jest to funkcja, ale często używana jako operator, dostępna od C++11.
 * Służy do oznaczania obiektu jako przenoszalnego (r-value), co pozwala na skorzystanie z semantyki przenoszenia (move semantics).
 * Nie wykonuje fizycznej zamiany wartości obiektu, a jedynie informuje kompilator, że można skorzystać z przenoszenia zamiast kopiowania.
 * Jest bardziej ogólna niż std::exchange i jest używana głównie w kontekście semantyki przenoszenia.
 * Przykład użycia std::move:
 * some_function(std::move(some_variable));
*/

/**
*  W przykładowym konstruktorze przenoszącym możemy zobaczyć użycie std::exchange do jednoczesnego przeniesienia wartości i ustawienia domyślnej dla obiektu,
 * a std::move do przeniesienia wartości typu std::string.
*/