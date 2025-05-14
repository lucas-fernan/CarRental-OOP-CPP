// Lucas Fernandez 40311109
// Yann Otchoun 40310742
#include <iostream>
#include <string>
#include "Date.h"
#include "Time.h"
using namespace std;

Date::Date() {
    day = 0;
    month = 0;
    year = 0;
    time.setTime(0,0,0);
}

Date::Date(int day, int month, int year, int hour, int minute, int second) {
    this->day = (day > 0 && day < 32) ? day : 1;
    this->month = (month > 0 && month < 13) ? month : 1;
    this->year = year; 
    time.setTime(hour, minute, second);
}

void Date::printDate() const {
    cout << month << "/" << day << "/" << year << " ";
    time.printTime(); 
}