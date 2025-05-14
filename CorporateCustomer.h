// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Customer.h"


#ifndef CORPORATECUSTOMER_H
#define CORPORATECUSTOMER_H

using namespace std;

class CorporateCustomer : public Customer {
    public:
        CorporateCustomer();    //default constructor
        CorporateCustomer(int id, string name, string address, string telNum);  // regular constructor
        CorporateCustomer(const CorporateCustomer& other);  //copy constructor
        virtual ~CorporateCustomer();   //destructor

        virtual string getType() const; //returns "Corporate Customer"

        virtual void print() const; // prints information of customer

    // no new data members
};
#endif
