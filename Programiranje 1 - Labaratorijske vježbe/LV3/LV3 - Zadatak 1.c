/* U ovoj aktivnosti možete slobodno testirati VPL sustav */
#include<stdio.h>

int main(void) {
    char ocjena;
    int a=0, b=0, c=0, d=0, e=0, f=0;
    
    printf("Unesite ocjenu A-F (za izlaz '!')\n");
    
    do {
        printf("Unesite ocjenu: ");
        scanf(" %c", &ocjena);
        
        switch(ocjena) {
            case 'A':
            case 'a':
                a++; break;
            case 'B':
            case 'b': 
                b++; break;
            case 'C':
            case 'c': 
                c++; break;
            case 'D':
            case 'd':
                d++; break;
            case 'E':
            case 'e': 
                e++; break;
            case 'F':
            case 'f': 
                f++; break;
            case '!':
                printf("Uneseno je:\nA = %d\nB = %d\nC = %d\nD = %d\nE = %d\nF = %d", a,b,c,d,e,f); break;
            default:
                printf("Nepoznata ocjena. Pokusajte ponovno.\n");
        }
    } while(ocjena != '!');
    
    return 0;
}