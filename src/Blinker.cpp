/*
  Copyright 2022 Peter Milne
  Released under GNU GENERAL PUBLIC LICENSE
  Version 3, 29 June 2007
*/

#include "Blinker.h"
#include "Arduino.h"

Blinker::Blinker(int led, int interval = INTERVAL) :
    _led{led}, _interval{interval} {}

void Blinker::blink() {
    digitalWrite(_led, HIGH);
    delay(_interval);
    digitalWrite(_led, LOW);
    delay(_interval);
}
