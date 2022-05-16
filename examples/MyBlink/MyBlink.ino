/*
  Blinker

  Arduino library template that blinks an led.

  Build and flash using arduino-cli:
  make compile FQBN=arduino:avr:uno
  make upload FQBN=arduino:avr:uno

  Copyright 2022 Peter Milne
  Released under GNU GENERAL PUBLIC LICENSE
  Version 3, 29 June 2007
*/

#include "Blinker.h"

Blinker led = Blinker(LED_BUILTIN, 500);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  led.blink();
}
