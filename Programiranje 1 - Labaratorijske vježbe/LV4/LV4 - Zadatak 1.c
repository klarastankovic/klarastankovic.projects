/* U ovoj aktivnosti možete slobodno testirati VPL sustav */
#include<stdio.h>

int main(void) {
    float p[10], min, max;
    int i;
    
    printf("Unesite elemente polja:\n");
    for(i = 0; i < 10; i++) {
        scanf("%f", &p[i]);
        
        if(p[i] < min || i == 0)
            min = p[i];
        
        if(p[i] > max || i == 0)
            max = p[i];
    }
    
    if(min == max)
        printf("\nNajmanja i najveca vrijednost je %f", min);
    
    else
        printf("\nNajmanja vrijednost je %f, a najveca %f", min, max);
    
    return 0;
}