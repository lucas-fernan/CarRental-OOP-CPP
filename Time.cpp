// Lucas Fernandez 40311109
// Yann Otchoun 40310742
#include <iostream>
#include "Time.h"
using namespace std;

Time::Time() {
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int hour, int minute, int second) {
    this->hour = (hour >= 0 && hour < 24) ? hour : 0;
    this->minute = (minute >= 0 && minute < 60) ? minute : 0;
    this->second = (second >= 0 && second < 60) ? second : 0;
}

void Time::setTime(int hour, int minute, int second) {
    this->hour = (hour >= 0 && hour < 24) ? hour : 0;
    this->minute = (minute >= 0 && minute < 60) ? minute : 0;
    this->second = (second >= 0 && second < 60) ? second : 0;
}

void Time::printTime() const {
    cout << hour << ":" << minute << ":" << second;
}