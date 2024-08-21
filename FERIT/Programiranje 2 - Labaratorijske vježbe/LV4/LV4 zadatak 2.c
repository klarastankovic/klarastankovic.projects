#include <stdio.h>

struct artikl {
  char ime[30];
  int kolicina;
  float cijena;
};

int main(void)
{
  struct artikl *max;
  //ovdje ide vas kod: definirajte polje struktura,
  //uspisite podatke u strukture, pronadjite najvecu cijenu i
  //dodjelite adresu pokazivacu max
  int n;
  do {
  scanf("%d", &n);
  } while(n >= 10);
  
  struct artikl artikli[10];
  max = &artikli[0];
  
  int i;
  for(i = 0; i < n; i++) {
      scanf("%s", artikli[i].ime);
      scanf("%d", &artikli[i].kolicina);
      scanf("%f", &artikli[i].cijena);
      
      if(artikli[i].cijena > max->cijena)
        max = &artikli[i];
  }

  // ispis ne dirati, mora koristiti pokazivac max
  printf("REZULTATI:\n");
  printf("cijena: %.2f, kolicina: %d", max->cijena, max->kolicina);
  return 0;
}
