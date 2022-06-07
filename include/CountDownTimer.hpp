//
// Created by mmoraes on 01/02/19.
//

#pragma once

class CountDownTimer {
public:
    CountDownTimer();
    CountDownTimer(long time);
    void start(long time);
    bool timeout();
    void reset();

private:
    long time;
    long endTime;
};

