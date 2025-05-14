// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Date.h"
#include "Customer.h"
#include "Car.h"
#include "Rental.h"

using namespace std;


//default constructor
Rental::Rental() {
    id = 0;
    customer = nullptr;
    car = nullptr;
}

// regular constructor
Rental::Rental(int id1, Date rentalDate1, Date returnDate1, Customer* customer1, Car* car1) : rentalDate(rentalDate1), returnDate(returnDate1) {
    id = id1;
    customer = customer1;
    car = car1;
}

//copy constructor
Rental::Rental(const Rental& other) {
    id = other.id;
    rentalDate = other.rentalDate;
    returnDate = other.returnDate;
    customer = other.customer;
    car = other.car;
}

//destructor
Rental::~Rental() {} // The objects pointed to shouldn't be deleted since the cars shouldn't be destroyed


// returns id
int Rental::getId() const {
    return id;
}

// returns rentalDate
Date Rental::getRentalDate() const {
    return rentalDate;
}

// returns returnDate
Date Rental::getReturnDate() const {
    return returnDate;
}

// sets rentalDate and ReturnDate
void Rental::changeDate(Date newRentalDate, Date newReturnDate) {
    rentalDate = newRentalDate;
    returnDate = newReturnDate;
}

// returns pointer of customer 
Customer* Rental::getCustomer() const {
    return customer;
}

// returns pointer of car
Car* Rental::getCar() const {
    return car;
}

// sets customer
void Rental::changeCustomer(Customer* newCustomer) {
    customer = newCustomer;
}

// sets car
void Rental::changeCar(Car* newCar) {
    car = newCar;
}

// prints customer information
void Rental::printCustomer() const {
    if (customer) {
        customer->print();
    }
    else {
        cout << "There is no customer assigned" << endl;
    }
}

// prints car information
void Rental::printCar() const {
    if (car) {
        car->print(); 
    }
    else {
        cout << "There is no car assigned" << endl;
    }
}

// prints both dates
void Rental::printDate() const {
    cout << "Rental date: ";
    rentalDate.printDate();
    cout << "\nReturn date: ";
    returnDate.printDate();
    cout << endl;
}

// prints all information about the rental
void Rental::print() const {
    cout << "Rental:" << endl;
    cout << "Rental ID: " << id << endl;
    printDate();
    printCustomer();
    printCar();
}