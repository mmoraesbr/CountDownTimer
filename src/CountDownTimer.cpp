//
// Created by mmoraes on 01/02/19.
//

#include "CountDownTimer.hpp"
#include <Arduino.h>

CountDownTimer::CountDownTimer() {}

CountDownTimer::CountDownTimer(long time) {
    start(time);
}

void CountDownTimer::start(long time) {
    this->time = time;
    this->endTime = millis() + time;
}


bool CountDownTimer::timeout() {
    return millis() >= this->endTime;
}

void CountDownTimer::reset() {
    start(time);
}

