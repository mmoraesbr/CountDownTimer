#include <Arduino.h>
#include <CountDownTimer.hpp>

CountDownTimer printInterval;

void setup() {
  printInterval.start(1000);
}

void loop() {

  // if have passed one second
  if (printInterval.timeout()) {
    // print Hello
    Serial.println("Hello");
    // and reset printInterval to wait another one second
    printInterval.reset();
  }
}
