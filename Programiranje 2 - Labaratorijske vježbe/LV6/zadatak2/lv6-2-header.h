#ifndef HEADER_H
#define HEADER_H

typedef struct artikl {
    char ime[50];
    float cijena;
    int kolicina;
} ARTIKL;

void ucitavanje(ARTIKL*, int);
ARTIKL* najveci(ARTIKL*, int);

#endif //HEADER_H