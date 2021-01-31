//
// Created by Mariot Tsitoara on 30/01/2021.
//

#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "music.h"

void play_music(step *start, void(*on_strum)(uint16_t), void(*on_wait)()) {
    step *i = start;
    for (; i != NULL ; i = i->next) {
        for (int j = 0; j < i->number_of_strums; ++j) {
            on_strum(i->interval);
        }
        if (i->next != NULL) {
            on_wait(i->next->chord);
        }
    }
}

step *create_step(char *chord, uint16_t interval, uint16_t number_of_strums) {
    step *i = malloc(sizeof(step));
    i->chord = strdup(chord);
    i->interval = interval;
    i->number_of_strums = number_of_strums;
    i->next = NULL;
    return i;
}

step *create_music(char *chords) {
    char delim[] = ",";
    char *ptr = strtok(chords, delim);
    step *start = create_step(ptr, 500, 4);
    step *previous = start;
    ptr = strtok(NULL, delim);
    while(ptr != NULL)
    {
        step *next = create_step(ptr, 500, 4);
        previous->next = next;
        previous = next;
        ptr = strtok(NULL, delim);
    }
    return start;
}

void release_music(step *start) {
    step *i = start;
    step *next = NULL;
    for (; i != NULL; i = next) {
        next = i->next;
        free(i->chord);
        free(i);
    }
}