/*
  LoopCounter.h - Descripción de la librería
By Near lg, 14/08/2016
Lanzado bajo licencia BSD--- 
*/
#ifndef LoopCounter_h
#define LoopCounter_h

class LoopCounter {
    public:
    // Returns if, each a period, is the moment or not
    static bool isNowEach(long period, long& count);
    
    // Returns the moment in a period with duration
    // 0 - Is in the 'duration'
    // 1 - Is in the last moment: just after the duration
    // -1 - Is during the period but out of the duration
    static int getMomentEachDuring(long period, long duration, long& count);
};
#endif
