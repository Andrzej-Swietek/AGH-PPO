#ifndef SERVICE_H
#define SERVICE_H 

#include "IceMachine.h"
#include <iostream>

class Service 
{
    private:
        IceMachine* mashine; 
        double powder;

    public: 

    /**
     * @constructor
    */
    Service();
    /**
     * @destructor
    */
    ~Service();

    /** @brief method that tests original mashine 
     * @param[in] mashine - pointer to actual mashine
     * @param[in] number - its value
    */
    void Test(IceMachine* mashine, double number);


    /** @brief method that gets copy of mashine
     * @param[in] mashine copy of mashine
     * @param[in] number its value
    */
    void TestCopy(IceMachine mashineCpy, double number);
};

#endif