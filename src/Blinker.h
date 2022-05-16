/*
  Copyright 2022 Peter Milne
  Released under GNU GENERAL PUBLIC LICENSE
  Version 3, 29 June 2007
*/

#ifndef _BLINKER_H_
#define _BLINKER_H_

#define INTERVAL 2000 // ms

class Blinker {
    private:
    int _led;
    int _interval;
    public:
    Blinker(int led, int interval);
    void blink();
};

#endif
