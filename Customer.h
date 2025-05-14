// Lucas Fernandez 40311109
#include <iostream>
#include <string>

using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {
    public:
        Customer(); //default constructor
        Customer(int id1, string name1, string address1, string telNum1); // regular constructor
        Customer(const Customer& other);    //copy constructor
        virtual ~Customer();    //destructor

        // getters and setters
        int getId() const;  // returns id
        string getName() const; // returns name
        void setName(string newName);   // sets name
        string getAddress() const;  //returns address
        void setAddress(string newAddress); // sets address
        string getTelNum() const;   // returns telephone number
        void setTelNum(string newTelNum);   // sets telephone number
        virtual string getType() const = 0;

        virtual void print() const = 0;


    protected:
        int id;
        string name;
        string address;
        string telNum;
};
#endif