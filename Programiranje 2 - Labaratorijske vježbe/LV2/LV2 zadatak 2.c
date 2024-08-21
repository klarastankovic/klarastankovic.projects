/* Obratite pozornost na format ulaznih podataka za pojedinog ucenika. 
 * Ulazni podaci za svakog ucenika su formata:
Pero
Peric
3000103921082
2.12
1.1.1992.
 * gdje su vrijednosti redom: ime, prezime, matbr, prosjek i datum.
 * S obzirom na ulazne podatke formirajte strukturu. Pripazite na veličinu podatka za matbr te format zapisa datuma (točke nakon dana, mjeseca i godine)
 */
#include <stdio.h>
#include <string.h>

struct datum {
    int dan;
    int mjesec;
    int godina;
};

struct ucenik {
    char ime[40];
    char prezime[40];
    int matbr;
    float prosjek;
    struct datum rodjendan;
};

int main(void)
{
    struct ucenik ucenici[40];
    int i, n;
    float najbolji_prosjek;
    char najbolji[40];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%s", ucenici[i].ime);
        scanf("%s", ucenici[i].prezime);
        scanf("%d", &ucenici[i].matbr);
        scanf("%f", &ucenici[i].prosjek);
        scanf("%d.%d.%d.", &ucenici[i].rodjendan.dan, &ucenici[i].rodjendan.mjesec, &ucenici[i].rodjendan.godina);
        
        if(ucenici[i].prosjek > najbolji_prosjek || i == 0) {
            najbolji_prosjek = ucenici[i].prosjek;
            strcpy(najbolji, ucenici[i].ime);
            strcat(najbolji, " ");
            strcat(najbolji, ucenici[i].prezime);
        }
    }
    
    printf("REZULTATI:\n");
    printf("%s", najbolji);
    
    
}
