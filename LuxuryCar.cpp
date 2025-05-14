// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Car.h"
#include "LuxuryCar.h"

using namespace std;

//default constructor
LuxuryCar::LuxuryCar() : Car(0, "Luxury") {}

// regular constructor
LuxuryCar::LuxuryCar(int id) : Car(id, "Luxury") {}

// copy constructor
LuxuryCar::LuxuryCar(const LuxuryCar& other) : Car(other) {}

// destructor
LuxuryCar::~LuxuryCar() {}


// prints information
void LuxuryCar::print() const {
    cout << "Car ID: " << id << endl;
    cout << "Car type: Luxury" << endl;
    cout << "Availability: " << (isAvailable() ? "Available" : "Not Available") << endl;
}

