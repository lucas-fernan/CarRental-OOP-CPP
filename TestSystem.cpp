// Lucas Fernandez 40311109
#include <iostream>
#include <string>
#include "Car.h"
#include "Company.h"
#include "StandardCar.h"
#include "LuxuryCar.h"
#include "Customer.h"
#include "Date.h"
#include "RegularCustomer.h"
#include "CorporateCustomer.h"
#include "Rental.h"

using namespace std;

int main() {

    // testing car hierarchy 
    StandardCar* sc1 = new StandardCar(111);
    StandardCar* sc2 = new StandardCar(222);
    StandardCar* sc3 = new StandardCar(*sc1);
    cout << "Info on cars: ----------------------------------------" << endl;
    cout << "sc1: " << endl;
    sc1->print();
    cout << "sc2:" << endl;
    sc2->print();
    cout << "sc3:" << endl;
    sc3->print();

    LuxuryCar* lc1 = new LuxuryCar(001);
    LuxuryCar* lc2 = new LuxuryCar(002);
    LuxuryCar* lc3 = new LuxuryCar(*lc1);
    cout << "lc1: " << endl;
    lc1->print();
    cout << "lc2:" << endl;
    lc2->print();
    cout << "lc3:" << endl;
    lc3->print();

    cout << endl;

    RegularCustomer* rc1 = new RegularCustomer(1000, "Lucas Fernandez", "123 Hello street", "514-111-1111");
    RegularCustomer* rc2 = new RegularCustomer(2000, "Homer Simpson", "742 Evergreen Terrace", "514-222-1111");
    RegularCustomer* rc3 = new RegularCustomer(*rc2);
    cout << "Info on Customers----------------------------------------" << endl;
    rc1->addLoyaltyPoints(100);
    rc2->addLoyaltyPoints(250);
    cout << "rc1:" << endl;
    rc1->print();
    cout << "rc2:" << endl;
    rc2->print();
    cout << "rc3:" << endl;
    rc3->print();

    CorporateCustomer* cc1 = new CorporateCustomer(1001, "Peter Griffin", "31 Spooner Street", "514-333-1111");
    CorporateCustomer* cc2 = new CorporateCustomer(1002, "Gregory House", "11 Hospital Street", "514-444-1111");
    CorporateCustomer* cc3 = new CorporateCustomer(*cc1);
    cout << "cc1:" << endl;
    cc1->print();
    cout << "cc2:" << endl;
    cc2->print();
    cout << "cc3:" << endl;
    cc3->print();

    cout << endl;

    Date* d1 = new Date(18, 3, 2025, 14, 0, 0);
    Date* d2 = new Date(19, 3, 2025, 14, 0, 0);
    Date* d3 = new Date(20, 3, 2025, 10, 0, 0);
    Date* d4 = new Date(21, 3, 2025, 10, 0, 0);
    Date* d5 = new Date(22, 3, 2025, 10, 0, 0);
    Date* d6 = new Date(23, 3, 2025, 10, 0, 0);
    Date* d7 = new Date(24, 3, 2025, 10, 0, 0);
    Date* d8 = new Date(25, 3, 2025, 10, 0, 0);
    Date* d9 = new Date(26, 3, 2025, 10, 0, 0);
    Date* d10 = new Date(27, 3, 2025, 10, 0, 0);

    Company* coenCars = new Company("CoenCars");

    coenCars->addCar(sc1);
    coenCars->addCar(sc2);
    coenCars->addCar(lc1);
    coenCars->addCar(lc2);

    coenCars->addCustomer(rc1);
    coenCars->addCustomer(rc2);
    coenCars->addCustomer(cc1);
    coenCars->addCustomer(cc2);

    cout << "All cars in CoenCars:----------------------------------------" << endl;
    coenCars->listAllCars();
    cout << "\nAll customers in CoenCars:----------------------------------------" << endl;
    coenCars->listCustomers();

    if (coenCars->searchCar(222)) {
        cout << "Car with ID 222 was found" << endl;
    } else {
        cout << "Car with ID 222 was NOT found" << endl;
    }

    if (coenCars->searchCar(321)) {
        cout << "Car with ID 222 was found" << endl;
    } else {
        cout << "Car with ID 222 was NOT found" << endl;
    }

    coenCars->addRental(990, *d1, *d2, rc1, sc1);
    coenCars->addRental(991, *d3, *d4, rc2, sc2);
    coenCars->addRental(992, *d5, *d6, cc1, lc1);
    coenCars->addRental(993, *d7, *d8, cc2, lc2);

    cout << "\n\nListing all rentals:----------------------------------------" << endl;
    coenCars->listRentals();

    coenCars->removeRental(990);
    coenCars->removeRental(991);
    coenCars->removeRental(992);

    cout << "\nRentals left in CoenCars after removing three rentals:----------------------------------------" << endl;
    coenCars->listRentals();



    coenCars->removeCar(222);
    coenCars->removeCar(001);
    cout << "\nCars left in CoenCars after removing two cars:----------------------------------------" << endl;
    coenCars->listAllCars();

    coenCars->removeCustomer(1000);
    coenCars->removeCustomer(2000);
    coenCars->removeCustomer(1001);
    cout << "\nCustomers left in CoenCars after removing three customers:----------------------------------------" << endl;
    coenCars->listCustomers();








    return 0;
}