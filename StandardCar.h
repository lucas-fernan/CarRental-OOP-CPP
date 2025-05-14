// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Car.h"

#ifndef STANDARDCAR_H
#define STANDARDCAR_H

using namespace std;

class StandardCar : public Car {
    public:
        StandardCar();  //default constructor
        StandardCar(int id);    // regular constructor
        StandardCar(const StandardCar& other);  // copy constructor
        virtual ~StandardCar(); // destructor

        
        virtual void print() const; // prints information

        // all data members are inherited
};
#endif