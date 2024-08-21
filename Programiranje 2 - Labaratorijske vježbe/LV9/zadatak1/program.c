/*Rekurzija prima jednu cjelobrojnu vrijednost koja je visina piramide. 
U datoteku piramida.txt, koju ćete kreiratiiz programa,  „nacrtati“ piramidu od znakova '*' koja može imati maksimalnu visinu 30 redova. 
U main() dijelu učitati visinu piramide te pozvati rekurziju. Primjer piramide je prikazan niže.
n=5
     *
    *** 
   *****
  *******
 *********
 */

#include <stdio.h>
#include <stdlib.h>

void rek(int height, int broj) {
    FILE *dat = fopen("piramida.txt", "w");
    
    int i;
    
    if(height != 0) {
        for(i = 0; i < height - 1; i++){
            printf(" ");
            fprintf(dat, " ");
        }
        
        for(i = 0; i < (broj - height + 1) * 2 - 1; i ++) {
            printf("*");
            fprintf(dat, "*");
        }
        
        printf("\n");
        fprintf(dat, "\n");
        rek(height - 1, broj);
    }
    
        
    
    printf("\n");
    
    fclose(dat);
}

int main(void) {
    int broj;
    
    do {
        scanf("%d", &broj);
    } while(broj <= 0 || broj > 30);
    
    rek(broj, broj);
    
    return 0;
}