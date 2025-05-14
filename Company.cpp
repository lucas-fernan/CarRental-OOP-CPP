// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Car.h"
#include "Company.h"
#include "Customer.h"
#include "Rental.h"

using namespace std;

//default constructor
Company::Company() {
    name = "";
    cars = new Car*[capacity];
    customers = new Customer*[capacity];
    rentals = new Rental[capacity];
    for (int i = 0; i < capacity; i++) {
        cars[i] = nullptr;
        customers[i] = nullptr;
    }
    numCars = 0;
    numCustomers = 0;
    numRentals = 0;
}

// regular constructor
Company::Company(string name1) {
    name = name1;
    cars = new Car*[capacity];
    customers = new Customer*[capacity];
    rentals = new Rental[capacity];
    for (int i = 0; i < capacity; i++) {
        cars[i] = nullptr;
        customers[i] = nullptr;
    }
    numCars = 0;
    numCustomers = 0;
    numRentals = 0;
}

//copy constructor
Company::Company(const Company& other) {
    name = other.name;
    cars = new Car*[capacity];
    customers = new Customer*[capacity];
    rentals = new Rental[capacity];
    numCars = other.numCars;
    numCustomers = other.numCustomers;
    numRentals = other.numRentals;

    for (int i = 0; i < numCars; i++) {
        cars[i] = other.cars[i];
    }
    for (int i = numCars; i < capacity; i++) {
        cars[i] = nullptr;
    }

    for (int i = 0; i < numCustomers; i++) {
        customers[i] = other.customers[i];
    }
    for (int i = numCustomers; i < capacity; i++) {
        customers[i] = nullptr;
    }

    for (int i = 0; i < numRentals; i++) {
        rentals[i] = other.rentals[i];
    }


}

//destructor
Company::~Company() {
    delete[] cars;
    delete[] customers;
    delete[] rentals;
}

//returns name
string Company::getName() const {
    return name;
}

// sets name
void Company::setName(string name1) {
    name = name1;
}

// adds a car to the array cars
void Company::addCar(Car* car) {
    if (numCars < capacity) {
        cars[numCars] = car;
        numCars++;
        return;
    } 
    cout << "Car couldn't be added, max capacity reached" << endl;
}

// removes a car from the array cars
void Company::removeCar(int id) {
    for (int i = 0; i < numCars; i++) {
        if (cars[i]->getId() == id) {
            for (int j = i; j < numCars - 1; j++) {
                cars[j] = cars[j+1];
            }
            numCars--;
            return;
        }
    }
    cout << "Car couldn't be found!" << endl;

}



// prints the info of each car in the array cars
void Company::listAllCars() const {
    if (numCars>0) {
        for (int i = 0; i < numCars; i++) {
            cars[i]->print();
        }        
    } else {
        cout << "No cars in the company" << endl;
    }

}

//searches for a car in the array cars and returns true if found
bool Company::searchCar(int id) const {
    for (int i = 0; i < numCars; i++) {
        if (cars[i]->getId() == id) {
            return true;
        }
    }
    return false;
}



// adds a customer to the array customers
void Company::addCustomer(Customer* customer) {
    if (numCustomers < capacity) {
        customers[numCustomers] = customer;
        numCustomers++;
        return;
    }
    cout << "Customer couldn't be added, limit reached" << endl;
}

// removes a customer from the array customers
void Company::removeCustomer(int id) {
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i]->getId() == id) {
            for (int j = i; j < numCustomers-1; j++) {
                customers[j] = customers[j+1];
            }
            numCustomers--;
            return;
        }
    }
    cout << "Customer with ID " << id << " couldn't be found" << endl;
}

// lists all customers from the array customers
void Company::listCustomers() const {
    if (numCustomers > 0) {
        for (int i = 0; i < numCustomers; i++) {
            customers[i]->print();
        }      
    } else {
        cout << "No customers in this company" << endl;
    }
}

// searches for a customer in the array customers and returns true if found
bool Company::searchCustomer(int id) const {
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i]->getId() == id) {
            return true;
        }
    }
    return false;
}


// adds a rental to the array rentals by dynamically creating a rental object
void Company::addRental(int id, Date rentalDate, Date returnDate, Customer* customer, Car* car) {
    if (car->isAvailable()) {
        rentals[numRentals] = Rental(id, rentalDate, returnDate, customer, car);
        numRentals++;
        car->setAvailability(false);
        return;
    }
    cout << "Car is not available" << endl;
}

// removes a rental from the array rentals
void Company::removeRental(int id) {
    for (int i = 0; i < numRentals; i++) {
        if (rentals[i].getId() == id) {
            rentals[i].getCar()->setAvailability(true);
            for (int j = i; j < numRentals - 1; j++) {
                rentals[j] = rentals[j+1];
            }
            numRentals--;
            return;
        }
    }
    cout << "Rental with ID " << id << " couldn't be found" << endl;
}

// lists all rentals from the array rentals
void Company::listRentals() const {
    if (numRentals > 0) {
        for (int i = 0; i < numRentals; i++) {
            rentals[i].print();
        }
    } else {
        cout << "There are no rentals in this company" << endl;
    }
}

// searches for a rental in the array rentals and returns true if found
bool Company::searchRental(int id) const {
    for (int i = 0; i < numRentals; i++) {
        if (rentals[i].getId() == id) {
            return true;
        }
    }
    return false;
}
