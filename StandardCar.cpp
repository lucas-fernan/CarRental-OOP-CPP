// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Car.h"
#include "StandardCar.h"

using namespace std;

//default constructor
StandardCar::StandardCar() : Car(0,"Standard") {}

// regular constructor
StandardCar::StandardCar(int id) : Car(id, "Standard") {}

// copy constructor
StandardCar::StandardCar(const StandardCar& other) : Car(other) {}

// destructor
StandardCar::~StandardCar() {}

// prints information
void StandardCar::print() const {
    cout << "Car ID: " << id << endl;
    cout << "Car type: Standard" << endl;
    cout << "Availability: " << (isAvailable() ? "Available" : "Not Available") << endl;
}

