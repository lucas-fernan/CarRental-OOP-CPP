// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#ifndef CAR_H
#define CAR_H

using namespace std;

class Car {
    public:
        Car();  //default constructor
        Car(int id1, string type1);   // regular constructor
        Car(const Car& other);  //copy constructor
        virtual ~Car(); //destructor

        // geters & setters
        int getId() const; //returns id (no need for a setter for id because an id cannot be changed)
        string getType() const; //returns type (No need for setType because the type cannot be changed)
        bool isAvailable() const; // returns availability
        void setAvailability(bool newAvailability); // sets availability

        virtual void print() const = 0;

    protected:
        int id; //id
        string type;    //type
        bool availability;  //availability flag
};
#endif 