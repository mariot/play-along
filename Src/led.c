//
// Created by Mariot Tsitoara on 30/01/2021.
//
#include <stdio.h>
#include <unistd.h>

#include "led.h"

void on_strum(uint16_t interval) {
    printf("Strum\n");
    sleep(interval / 1000);
}

void on_chord(char* chord) {
    printf("Chord: %s\n", chord);
}

void on_wait(char* chord) {
    printf("Wait for chord: %s\n", chord);
}
