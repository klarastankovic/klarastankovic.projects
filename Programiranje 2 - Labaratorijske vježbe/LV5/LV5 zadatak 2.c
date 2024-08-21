/*
Primjer kako bi izgledalo izvodjenje programa, 
prema ovom redosljedu trebate upisivati podatke u strukture.
Ispis racuna se izvodi sam (ne treba editirati tu funkciju). 

Unesi ime kupca: Petar Kupcevic 
Unesi ime prodavaca: Ivan Prodavacevic
Unesi broj artikala: 4
Unesi ime artikla: Pivo Osjecko 0.5l
Unesi cijenu artikla: 5.99
Unesi kolicinu pojedinog artikla: 120
Unesi ime artikla: Brandy Badel 1l
Unesi cijenu artikla: 69.99
Unesi kolicinu pojedinog artikla: 5
Unesi ime artikla: Vino Crno Ribar 1l
Unesi cijenu artikla: 12.99
Unesi kolicinu pojedinog artikla: 55
Unesi ime artikla: Coca Cola 2l
Unesi cijenu artikla: 12.99
Unesi kolicinu pojedinog artikla: 20

REZULTATI:
Kupac: Petar Kupcevic
Prodavac: Ivan Prodavacevic
-----------------------------
Artikli: 
rb   naziv                    kolicina    cijena    ukupno
1    Pivo Osjecko 0.5l         120        5.99       718.80
2    Brandy Badel 1l           5          69.99      349.95
3    Vino Crno Ribar 1l        55         12.99      714.45
4    Coca Cola 2l              20         12.99      259.80

Ukupan iznos racuna: 2043.00
*/



#include <stdio.h>


typedef struct artikl {
  char naziv[50];
  float cijena;
  int kolicina;
} Artikl;
typedef struct racun {
  char prodavac[50];
  char kupac [50];
  Artikl artikli[10];
  int  broj_artikala;
  float ukupan_iznos;
} Racun;


void ispisRacuna(Racun *r) {
  int i;
  float cijena;
  int kolicina;
  printf("REZULTATI:\n");
  printf("Kupac: %s\n", r->kupac);
  printf("Prodavac: %s\n", r->prodavac);
  printf("-----------------------------\n");
  printf("Artikli: \n");
  printf("rb   naziv                    kolicina    cijena    ukupno\n");
  for (i = 0; i < r->broj_artikala; i++) {
    cijena = r->artikli[i].cijena;
    kolicina = r->artikli[i].kolicina;
    printf("%-4d %-25s %-10d %-10.2f %.2f\n", i+1, r->artikli[i].naziv, kolicina, cijena, kolicina*cijena);
  
    r->ukupan_iznos += r->artikli[i].cijena * r->artikli[i].kolicina;      
  }
  printf("\nUkupan iznos racuna: %.2f", r->ukupan_iznos);
}

/* ovu funkciju trebate napisati prema uputama iz zadatka*/

void unesiPodatkeRacuna(Racun *r) {
    scanf(" %[^\n]s", r->kupac);
    scanf(" %[^\n]s", r->prodavac);
    
    do {
        scanf("%d", &r->broj_artikala);
    } while(r->broj_artikala <= 0 || r->broj_artikala >= 10);
    
    int i;
    for(i = 0; i < r->broj_artikala; i++) {
        scanf(" %[^\n]s", r->artikli[i].naziv);
        scanf("%f", &r->artikli[i].cijena);
        scanf("%d", &r->artikli[i].kolicina);
    }
}

int main(void)
{
  int n, m;
  Racun racun;

  unesiPodatkeRacuna(&racun);

  ispisRacuna(&racun);

	return 0;
}

