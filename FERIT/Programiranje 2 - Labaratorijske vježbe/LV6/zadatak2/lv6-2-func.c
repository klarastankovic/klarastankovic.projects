#include <stdio.h>

typedef struct artikl {
    char ime[50];
    float cijena;
    int kolicina;
} ARTIKL;

void ucitavanje(ARTIKL* artikl, int n) {
    int i;
    for(i = 0; i < n; i++) {
        scanf(" %[^\n]s", artikl[i].ime);
        scanf("%d", &artikl[i].kolicina);
        scanf("%f", &artikl[i].cijena);
    }
}

ARTIKL* najveci(ARTIKL *artikl, int n) {
    int i;
    ARTIKL *max = &artikl[0];
    for(i = 0; i < n; i++) {
        if(max->cijena < artikl[i].cijena) {
            max = &artikl[i];
        }
    }
    
    return max;
}