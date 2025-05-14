// Lucas Fernandez 40311109
// Yann Otchoun 40310742
#include <iostream>
using namespace std;

#ifndef TIME_H
#define TIME_H

class Time {
    public:
        Time();
        Time(int hour, int minute, int second);
        void setTime(int hour, int minute, int second);
        void printTime() const;

    private:
        int hour;
        int minute;
        int second;
};

#endif