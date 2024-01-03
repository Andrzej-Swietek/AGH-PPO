#ifndef FUNCTOR_H
#define FUNCTOR_H

#include <iostream>
#include <map>
#include<algorithm>

class Functor
{
public:

    /** @brief Functor default Construtor
     * @return no return value
    */
    Functor();


    /** @brief Functor default Denstrutor
     * @return no return value
    */
    ~Functor();


    /** @brief Parentecies operator overload
     * @return bool value if a is bigger than b 
    */
    bool operator() (int a, int b);


    /** @brief Method printing overall summary
     * @return void
    */
    void wypiszStatystyki();


private:
    std::map<std::string, int> _stats;

};

#endif