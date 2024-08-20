/* U ovoj aktivnosti možete slobodno testirati VPL sustav */
#include<stdio.h>

int main(void) {
    int broj, i, p=0;
    
    printf("Unesite 10 cijelih brojeva\n");
    
    for(i=0; i<10; i++) {
        printf("Unesite broj: ");
        scanf(" %d", &broj);
        
        if(broj%2==0)
            p++;
    }
    
    printf("Postotak parnih brojeva je %d %%.", 100*p/10);
    
    return 0;
}