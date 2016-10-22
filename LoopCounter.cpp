/*
LoopCounter.cpp -Definition of LoopCounter
By Near lg, 14/08/2016
Lanzado bajo licencia BSD---
*/

#include "LoopCounter.h"

// Returns the moment in a period with duration
// 0 - Is in the 'duration'
// 1 - Is in the last moment: just after the duration
// -1 - Is during the period but out of the duration
int LoopCounter::getMomentEachDuring(long period, long duration, long& count) {
    int moment = -1;
    if(count >= period && count < period + duration){
        moment = 0;
    } else if(count >= period + duration) {
        count = 0;
        moment = 1;
    }
    return moment;
}

// Returns if, each a period, is the moment or not
bool LoopCounter::isNowEach(long period, long& count) {
    bool is = false;
    if(count >= period) {
        count = 0;
        is = true;
    }
    return is;
}
