#ifndef MYHEADER_H
#define MYHEADER_H

typedef struct artikl {
  char *naziv;
  float cijena;
  int kolicina;
} Artikl;
typedef struct racun {
  char *prodavac;
  char *kupac;
  Artikl *artikli;
  int  broj_artikala;
  float ukupan_iznos;
} Racun;


/* Ukoliko koristite dodatne funkcije mozete ih navesti nakon ovog komentara */


#endif
