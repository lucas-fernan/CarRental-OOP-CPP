// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

//default constructor
Car::Car() {
    id = 0;
    type = "";
    availability = true;
}

// regular constructor
Car::Car(int id, string type) {
    this->id = id;
    this->type = type;
    availability = true;
}

//copy constructor
Car::Car(const Car& other) {
    id = other.id;
    type = other.type;
    availability = other.availability;
}

//destructor
Car::~Car() {}


//returns id
int Car::getId() const {
    return id;
}

//returns type
string Car::getType() const {
    return type;
}

// returns availability
bool Car::isAvailable() const {
    return availability;
}

 // sets availability
void Car::setAvailability(bool newAvailability) {
    availability = newAvailability;
}