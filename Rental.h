// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Date.h"
#include "Customer.h"
#include "Car.h"

using namespace std;

#ifndef RENTAL_H
#define RENTAL_H

class Rental {
    public:
        Rental();   //default constructor
        Rental(int id1, Date rentalDate1, Date returnDate1, Customer* customer1, Car* car1);    // regular constructor
        Rental(const Rental& other);    //copy constructor
        ~Rental();  //destructor

        int getId() const;  // returns id
        Date getRentalDate() const; // returns rentalDate
        Date getReturnDate() const; // returns returnDate
        void changeDate(Date newRentalDate, Date newReturnDate);    // sets rentalDate and ReturnDate
        Customer* getCustomer() const;  // returns pointer of customer 
        Car* getCar() const;    // returns pointer of car
        void changeCustomer(Customer* newCustomer); // sets customer
        void changeCar(Car* newCar);    // sets car

        void printCustomer() const; // prints customer information
        void printCar() const;  // prints car information
        void printDate() const; // prints both dates
        void print() const; // prints all information about the rental


    private:
        int id;
        Date rentalDate;
        Date returnDate;
        Customer* customer;
        Car* car;
};
#endif