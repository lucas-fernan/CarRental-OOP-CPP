// Lucas Fernandez 40311109
// Yann Otchoun 40310742
#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

#ifndef DATE_H
#define DATE_H

class Date {

    public:
        Date();
        Date(int day, int month, int year, int hour, int minute, int second);
        void printDate() const;

    private:
        int day;
        int month;
        int year;
        Time time;
};

#endif