/*Napisati C program koji će učitati cijeli broj te u datoteku naziva suma.txt te upisati sumu njegovih znamenaka.
Za traženje sume znamenaka broja koristiti rekurziju.
NAPOMENA: Zadatak pokazati nastavniku na satu, VPL nema testcase-ove.*/
#include "nekiheader.h"

int rek(int broj) {
    int sum = 0;
    if(broj != 0) {
        sum = broj % 10 + rek(broj / 10);;
    }
    else
        return sum;
}

int main(void) {
    int broj;
    scanf("%d", &broj);
    
    FILE *dat = fopen("suma.txt", "w");
    
    int sum = rek(broj);
    
    fprintf(dat, "%d", sum);
    fclose(dat);
    
    printf("%d", sum);
    
    return 0;
}