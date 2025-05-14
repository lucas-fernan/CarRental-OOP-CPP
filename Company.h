// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Car.h"
#include "Customer.h"
#include "Rental.h"
#include "Date.h"
#ifndef COMPANY_H
#define COMPANY_H

using namespace std;

class Company {
    public:
        Company();  //default constructor
        Company(string name1);  // regular constructor
        Company(const Company& other);  //copy constructor
        ~Company(); //destructor

         // geters & setters
        string getName() const; //returns name
        void setName(string name1); // sets name

        // functions on the array cars
        void addCar(Car* car);  // adds a car to the array cars
        void removeCar(int id); // removes a car from the array cars
        void listAllCars() const;   // prints the info of each car in the array cars
        bool searchCar(int id) const;   //searches for a car in the array cars and returns true if found

        // functions on the array customers
        void addCustomer(Customer* customer);   // adds a customer to the array customers
        void removeCustomer(int id);    // removes a customer from the array customers
        void listCustomers() const; // lists all customers from the array customers
        bool searchCustomer(int id) const;  // searches for a customer in the array customers and returns true if found

        // functions on the rental array
        void addRental(int id, Date rentalDate, Date returnDate, Customer* customer, Car* car); // adds a rental to the array rentals by dynamically creating a rental object
        void removeRental(int id);  // removes a rental from the array rentals
        void listRentals() const;   // lists all rentals from the array rentals
        bool searchRental(int id) const;    // searches for a rental in the array rentals and returns true if found
        


    private:
        string name;
        Car** cars;
        int numCars;
        Customer** customers;
        int numCustomers;
        Rental* rentals;
        int numRentals;
        static const int capacity = 1000;
};
#endif