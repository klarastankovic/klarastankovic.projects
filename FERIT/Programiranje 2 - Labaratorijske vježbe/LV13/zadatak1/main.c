// 1.	Korisnik treba unijeti cjelobrojnu vrijednost u rasponu od 1 do 7, 
//pri čemu 1 predstavlja ponedjeljak, a 7 nedjelju. 
//Ispisati poruku „Vikeeeend!“ ako je unesen broj koji označava neradne dane ili
//poruku „Radis jos %d dana do vikenda.“ ako je unesen broj koji označava radne dane.
//Za dane u tjednu koristiti enumeraciju.

#include <stdio.h>

enum DAN {
  pon = 1, uto, sri, cet, pet, sub, ned  
};
int main(void) {
    enum DAN d;
    
    do {
        scanf("%d", &d);
    } while(d < 1 || d > 7);
    
    printf("REZULTATI:\n");
    if(d >= sub)
        printf("Vikeeeend!");
    else
        printf("Radis jos %d dana do vikenda.", sub - d - 1);
    
    return 0;
}
