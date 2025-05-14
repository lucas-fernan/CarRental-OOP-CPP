// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Customer.h"


#ifndef REGULARCUSTOMER_H
#define REGULARCUSTOMER_H

using namespace std;

class RegularCustomer : public Customer {
    public:
        RegularCustomer();  //default constructor
        RegularCustomer(int id, string name, string address, string telNum);    // regular constructor
        RegularCustomer(const RegularCustomer& other);  //copy constructor
        virtual ~RegularCustomer(); //destructor

        virtual string getType() const; //returns "Regular Customer"

        virtual void print() const; // prints information of customer

        void addLoyaltyPoints(int points);  // adds loyalty points to the customer

    private:
        int loyaltyPoints; // customers receive 100 points per rental
};
#endif

