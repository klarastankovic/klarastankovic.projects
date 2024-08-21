#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void unos(FILE *p, TOCKA *toc, TROKUT *tro, int n, int m) {
    int i;
    for(i = 0; i < n; i++)
        fscanf(p, "%f %f %f\n", &toc[i].x, &toc[i].y, &toc[i].z);
    
    int a, b, c;
    for(i = 0; i < m; i++) {
        fscanf(p, "%d %d %d\n", &a, &b, &c);
        tro[i].t1 = &toc[a];
        tro[i].t2 = &toc[b];
        tro[i].t3 = &toc[c];
    }
}

float udaljenost(TOCKA *a, TOCKA *b) {
    float dx = a->x - b->x;
    float dy = a->y - b->y;
    float dz = a->z - b->z;
    
    return sqrt(pow(dx, 2) + pow(dy, 2) + pow(dz, 2));
}

float opseg(TROKUT *t) {
    float a = udaljenost(t->t2, t->t3);
    float b = udaljenost(t->t1, t->t3);
    float c = udaljenost(t->t1, t->t2);
    
    return a + b + c;
}

float maxOpseg(TROKUT *t, int m) {
    float max = opseg(&t[0]);
    
    int i;
    for(i = 1; i < m; i++)
        if(max < opseg(&t[i]))
            max = opseg(&t[i]);
            
    return max;
}