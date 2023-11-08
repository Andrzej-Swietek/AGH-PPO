#include "Service.h"
#include <iostream>

Service::Service()
{
    this->mashine = nullptr;
    this->powder =0.0;
}

Service::~Service()
{

}

void Service::Test(IceMachine* mashine, double number)
{
    this->mashine = mashine;
    this->powder = number;

    std::cout << "### Test serwisowy ###\n 1. Wsyp proszek do pelna: \n ### Wsypywanie proszku ### Wsypales 0.35 kilogram/kilogramow proszku \n 2. Przebieg testowy: 10 porcji: \n ### Uruchomienie maszyny do lodow wloskich ### \n Maszyna do lodow wloskich zostala wlaczona \n" << std::endl;
    this->mashine->SetState(true);
    this->mashine->Start();
    this->mashine->SetPowder(this->powder);
    this->mashine->Make(10);
    this->mashine->Presentation();
    this->mashine->Stop();
}

 void Service::TestCopy(IceMachine mashineCpy, double number)
 {
    this->mashine = &mashineCpy;
    this->powder = number;

    std::cout << "### Test serwisowy ###\n 1. Wsyp proszek do pelna: \n ### Wsypywanie proszku ### Wsypales 0.35 kilogram/kilogramow proszku \n 2. Przebieg testowy: 10 porcji: \n ### Uruchomienie maszyny do lodow wloskich ### \n Maszyna do lodow wloskich zostala wlaczona \n" << std::endl;
    this->mashine->SetState(true);
    this->mashine->Start();
    this->mashine->SetPowder(this->powder);
    this->mashine->Make(10);
    this->mashine->Presentation();
    this->mashine->Stop();
 }