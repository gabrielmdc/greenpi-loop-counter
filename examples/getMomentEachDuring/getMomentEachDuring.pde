#include <LoopCounter.h>

long counter = 0;
long period = 5000;
long duration = 2000;

void setup() {
  Serial.begin(9600);
}

void loop() {
    myDelay(1000);
    switch(LoopCounter::getMomentEachDuring(period, duration, counter)) {
    case -1:
      Serial.println("Is during the period but out of the duration");
      break;
    case 0:
      Serial.println("Is in the 'duration'");
      break;
    case 1:
      Serial.println("Is in the last moment: just after the duration");
      break;
  }
}

void myDelay(long miliSec) {
    delay(miliSec);
    counter += miliSec;
}
