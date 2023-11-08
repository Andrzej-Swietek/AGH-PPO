#include "IceMachine.h"
#include<iostream>

IceMachine::IceMachine()
{
    this->id = -1;
    this->state = false;
    this->capacity = 0.0;
    this->consumption = 0.0;
    this->powder = 0.0;
}

IceMachine::~IceMachine()
{
}


void IceMachine::SetID(int id)
{
    this->id = id;
}

void IceMachine::SetState(bool newState)
{
    this->state = newState;
}

void IceMachine::SetCapacity(double capacity)
{
    this->capacity = capacity;
}

void IceMachine::SetConsumption(double consumption)
{
    this->consumption = consumption;
}

void IceMachine::SetPowder(double powder)
{
    this->powder = powder;
}

void IceMachine::Start()
{
    std::cout << "### Uruchomienie maszyny do lodow wloskich ###" << std::endl;
    this->state = true;
    std::cout<< "maszyna do lodow wloskich zostala wylaczona \n" << std::endl;
}

void IceMachine::Stop()
{
    std::cout << "### Zatrzymanie maszyny do lodow wloskich ###" << std::endl;
    this->state = false;
    std::cout << "Maszyna do lodow wloskich zostala wylaczona \n" << std::endl;
}


void IceMachine::Make(int portions)
{
    std::cout << "### Robienie lodow ###" << std::endl;
    if( !this->state ) {
        std::cout << "BLAD: Wlacz maszyne do lodow wloskich \n" <<std::endl;
        return;
    }
    if (portions < 0)
    {
       std::cout<< "BLAD: Niepoprawna ilosc porcji \n" << std::endl;
       return;
    }

    std::cout << "Zrobiles" << portions << " porcji lodow \n";
    this->powder -= portions * this->consumption;
    
}

void IceMachine::Reload(double powder)
{
    if( !this->state ) {
        std::cout << "BLAD: Wlacz maszyne do lodow wloskich \n" <<std::endl;
        return;
    }
    this->powder = powder;
}


void IceMachine::Presentation() 
{
    std::cout<< "### Prezentacja ###" << std::endl;
    std::cout<<  "Identyfikator maszyny do lodow wloskich:" << this->id << std::endl; 
    std::cout<<  "Maszyna do lodow wloskich jest wylaczona: " << this->state << std::endl;
    std::cout<< "Pojemnosc maszyny do lodow wloskich wynosi 2 kilogramy/kilogramow" << std::endl;
    std::cout<< "Srednia wydajnosc wynosi" << this->consumption <<" kilogramow na 1 porcje" << std::endl;
    std::cout<< "W maszynie do lodow wloskich jest " << this->powder << " kilogramow proszku \n" << std::endl;
}