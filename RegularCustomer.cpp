// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Customer.h"
#include "RegularCustomer.h"

using namespace std;

//default constructor
RegularCustomer::RegularCustomer() : Customer() {
    loyaltyPoints = 0;
}

// regular constructor
RegularCustomer::RegularCustomer(int id, string name, string address, string telNum) : Customer(id, name, address, telNum) {
    loyaltyPoints = 0;   
}

//copy constructor
RegularCustomer::RegularCustomer(const RegularCustomer& other) : Customer(other) {
    loyaltyPoints = other.loyaltyPoints;
}

//destructor
RegularCustomer::~RegularCustomer() {}

//returns "Regular Customer"
string RegularCustomer::getType() const {
    return "Regular Customer";
}

// prints information of customer
void RegularCustomer::print() const {
    cout << "Customer type: Regular Customer" << endl;
    cout << "Customer ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Telephone number: " << telNum << endl;
    cout << "loyalty points: " << loyaltyPoints << endl;
}

// adds loyalty points to the customer
void RegularCustomer::addLoyaltyPoints(int points) {
    loyaltyPoints += points;
}