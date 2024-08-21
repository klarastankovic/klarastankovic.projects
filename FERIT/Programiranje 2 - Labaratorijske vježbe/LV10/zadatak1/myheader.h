#ifndef MYHEADER_H
#define MYHEADER_H

#include <stdio.h>

typedef struct tocka {
    float x;
    float y;
    float z;
} TOCKA;

typedef struct trokut {
    TOCKA *t1;
    TOCKA *t2;
    TOCKA *t3;
} TROKUT;

void unos(FILE*, TOCKA*, TROKUT*, int, int);
float udaljenost(TOCKA, TOCKA);
float opseg(TROKUT);
float maxOpseg(TROKUT*, int);

#endif