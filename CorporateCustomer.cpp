// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Customer.h"
#include "CorporateCustomer.h"

using namespace std;

//default constructor
CorporateCustomer::CorporateCustomer() : Customer() {}

// regular constructor
CorporateCustomer::CorporateCustomer(int id, string name, string address, string telNum) : Customer(id, name, address, telNum) {}

//copy constructor
CorporateCustomer::CorporateCustomer(const CorporateCustomer& other) : Customer(other) {}

//destructor
CorporateCustomer::~CorporateCustomer() {}

//returns "Corporate Customer"
string CorporateCustomer::getType() const {
    return "Corporate Customer";
}

// prints information of customer
void CorporateCustomer::print() const {
    cout << "Customer type: Corporate Customer" << endl;
    cout << "Customer ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Telephone number: " << telNum << endl;
}