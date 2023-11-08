#include <iostream>
class Car {
private:
    int id;
    bool state;
    double tankCapacity;
    double consumption;
    double fuel;
public:
    // Constructor
    Car() : id(0), state(false), tankCapacity(0.0), consumption(0.0), fuel(0.0) {}
    // Setters
    void SetID(int newId) {
        id = newId;
    }
    void SetState(bool newState) {
        state = newState;
    }
    void SetTankCapacity(double newCapacity) {
        tankCapacity = newCapacity;
    }
    void SetConsumption(double newConsumption) {
        consumption = newConsumption;
    }
    void SetFuel(double newFuel) {
        fuel = newFuel;
    }
    // Presentation method
    void Presentation() {
        std::cout << "### Prezentacja ###" << std::endl;
        std::cout << "Identyfikator samochodu: " << id << std::endl;
        std::cout << "Samochod jest " << (state ? "wlaczony" : "wylaczony") << std::endl;
        std::cout << "Pojemnosc baku wynosi " << tankCapacity << " litrow" << std::endl;
        std::cout << "Srednie spalanie wynosi " << consumption << " litrow / 100 km" << std::endl;
        std::cout << "W baku jest " << fuel << " litrow paliwa" << std::endl;
    }
    // Drive method
    void Drive(double distance) {
        std::cout << "### Jazda ###" << std::endl;
        if (!state) {
            std::cout << "BLAD: Wlacz silnik" << std::endl;
        } else if (fuel <= 0) {
            std::cout << "BLAD: Brak paliwa, zatankuj" << std::endl;
        } else if (distance < 0) {
            std::cout << "BLAD: Niepoprawny dystans" << std::endl;
        } else {
            double fuelNeeded = (consumption * distance) / 100.0;
            if (fuelNeeded > fuel) {
                std::cout << "BLAD: Brak wystarczajacej ilosci paliwa" << std::endl;
            } else {
                fuel -= fuelNeeded;
                std::cout << "Przejechales " << distance << " km" << std::endl;
            }
        }
    }
    // Start method
    void Start() {
        if (state) {
            std::cout << "BLAD: Silnik jest juz wlaczony" << std::endl;
        } else {
            state = true;
            std::cout << "Silnik zostal wlaczony" << std::endl;
        }
    }
    // Stop method
    void Stop() {
        if (!state) {
            std::cout << "BLAD: Silnik jest juz wylaczony" << std::endl;
        } else {
            state = false;
            std::cout << "Silnik zostal wylaczony" << std::endl;
        }
    }
    // Refuel method
    void Refuel(double amount) {
        std::cout << "### Tankowanie ###" << std::endl;
        if (amount <= 0) {
            std::cout << "BLAD: Niepoprawna ilosc paliwa do zatankowania" << std::endl;
        } else {
            fuel += amount;
            std::cout << "Zatankowales " << amount << " litrow" << std::endl;
        }
    }
};
class Service {
public:
    // Test method for a Car object
    void Test(Car* car, double distance) {
        std::cout << "#############################################################" << std::endl;
        std::cout << "### Test serwisowy ###" << std::endl;
        car->Refuel(car->GetTankCapacity()); // Refuel to full
        car->Start();
        car->Drive(distance);
        car->Stop();
        std::cout << "### Koniec testu serwisowego ###" << std::endl;
    }
    // Test method for a Car object using a pointer
    void Test(Car* car, double distance) {
        std::cout << "#############################################################" << std::endl;
        std::cout << "### Test serwisowy ###" << std::endl;
        car->Refuel(car->GetTankCapacity()); // Refuel to full
        car->Start();
        car->Drive(distance);
        car->Stop();
        std::cout << "### Koniec testu serwisowego ###" << std::endl;
    }
    // Test method for a Car object by passing a copy
    void TestCopy(Car car, double distance) {
        std::cout << "#############################################################" << std::endl;
        std::cout << "### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###" << std::endl;
        car.Refuel(car.GetTankCapacity()); // Refuel to full
        car.Start();
        car.Drive(distance);
        car.Stop();
        std::cout << "### Koniec testu serwisowego ###" << std::endl;
    }
};
