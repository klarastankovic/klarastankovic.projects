#include "myheader.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    Racun novi;
    int n;
    char string[100];
    
    FILE *fp = fopen("racun.txt", "r");
    fscanf(fp, "%d\n", &n);
    
    novi.artikli = (Artikl*) malloc(n * sizeof(Artikl));
    
    int i;
    float suma = 0;
    for(i = 0; i < n; i++) {
        Artikl trenutni = novi.artikli[i];
        
        fscanf(fp, "%f\n", &trenutni.cijena);
        fscanf(fp, "%d\n", &trenutni.kolicina);
        
        suma += (trenutni.cijena * trenutni.kolicina);
    }
    
    printf("REZULTATI:\n");
    printf("Ukupan iznos racuna: %.2f", suma);
    
    free(novi.artikli);
    fclose(fp);
    
    return 0;
}
