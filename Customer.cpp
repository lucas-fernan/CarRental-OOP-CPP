// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Customer.h"

using namespace std;

//default constructor
Customer::Customer() {
    id = 0;
    name = "";
    address = "";
    telNum = "";
}

// regular constructor
Customer::Customer(int id1, string name1, string address1, string telNum1) {
    id = id1;
    name = name1;
    address = address1;
    telNum = telNum1;
}

//copy constructor
Customer::Customer(const Customer& other) {
    id = other.id;
    name = other.name;
    address = other.address;
    telNum = other.telNum;
}

//destructor
Customer::~Customer() {}

// returns id
int Customer::getId() const {
    return id;
}

// returns name
string Customer::getName() const {
    return name;
}

// sets name
void Customer::setName(string newName) {
    name = newName;
}

//returns address
string Customer::getAddress() const {
    return address;
}

// sets address
void Customer::setAddress(string newAddress) {
    address = newAddress;
}

// returns telephone number
string Customer::getTelNum() const {
    return telNum;
}

 // sets telephone number
void Customer::setTelNum(string newTelNum) {
    telNum = newTelNum;
}



