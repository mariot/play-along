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

void play_music(step *start, void(*on_chord)(char*), void (*on_strum)(int), void(*on_wait)(char*));
step *create_step(char *chord, int interval, int number_of_strums);
step *create_music(char *chords);
void release_music(step *start);

#endif //PLAYALONG_MUSIC_H
