//
// Created by Mariot Tsitoara on 30/01/2021.
//

#ifndef PLAYALONG_MUSIC_H
#define PLAYALONG_MUSIC_H

typedef struct step {
    char* chord;
    int interval;
    int number_of_strums;
    struct step *next;
} step;

void play_music(step *start, void (*on_strum)(uint16_t), void(*on_wait)());
step *create_step(char *chord, uint16_t interval, uint16_t number_of_strums);
step *create_music(char *chords);
void release_music(step *start);

#endif //PLAYALONG_MUSIC_H
