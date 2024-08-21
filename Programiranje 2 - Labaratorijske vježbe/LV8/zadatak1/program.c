/*Kako bi autograder mogao uspjesno upisati strukturu u datoteku
morate koristiti ovako definirane strukture*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nekiheader.h"

FILE* dat;

/*struct podaci
{		
	char prezime[20];
	char ime[20];
	int sifra;
	char adresa[100];
	int br_tel;
};*/

int main(void) {
    int izbor;
    
    do {
        scanf("%d", &izbor);
        switch(izbor) {
            case 1: kreirajDatoteku();
                break;
            case 2: citajDatoteku();
                break;
            case 3: dodajClana();
                break;
            case 4: zavrsetak();
                break;
            default: printf("Pokusajte ponovo.\n");
    }
    } while(izbor != 4);
    
    return 0;
}

