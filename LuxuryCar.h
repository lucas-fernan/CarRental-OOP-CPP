// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Car.h"

#ifndef LUXURYCAR_H
#define LUXURYCAR_H

using namespace std;

class LuxuryCar : public Car {
    public:
        LuxuryCar(); //default constructor
        LuxuryCar(int id); // regular constructor
        LuxuryCar(const LuxuryCar& other);  // copy constructor
        virtual ~LuxuryCar();   // destructor

        virtual void print() const; // prints information

        // all data members are inherited
};
#endif
