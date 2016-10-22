#include <LoopCounter.h>

long counter = 0;
long period = 5000;
long duration = 2000;

void setup() {
  Serial.begin(9600);
}

void loop() {
    myDelay(1000);
    if(LoopCounter::isNowEach(period, counter)){
        Serial.println("Is now each");
    } else {
        Serial.println("Is NOT now each");
    }
}

void myDelay(long miliSec) {
    delay(miliSec);
    counter += miliSec;
}
