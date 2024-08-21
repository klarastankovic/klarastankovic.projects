// Implementirati makro koji racuna  indeks s u binarnom pretrazivanju (s = (dg+gg)/2).
//U glavnoj funkciji ucitati 500 brojeva iz datoteke in.txt te s tipkovnice traziti unos
//broja koji trazimo u danom polju u intervalu [1, 1000].
//Ispisati poruku „Broj nije nadjen.“ ili „Broj je nadjen.“ s obzirom na rezultat pretrazivanja.

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

#define S(dg, gg) ((dg + gg) / 2)

int compare(const void* x, const void* y) {
    return(*(int*)x - *(int*)y);
}

int bin_search(int array[], int size, int x) {
    int dg = 0, gg = size - 1, s;
    
    while(dg <= gg) {
        s = S(dg, gg);
        
        if(x == array[s])
            return 1;
        else if(x > array[s])
            dg = s + 1;
        else if(x < array[s])
            gg = s - 1;
    }
    
    return 0;
}

int  main(void) {
	FILE *fp = fopen("in.txt", "r");
	if(fp == NULL)
	    return -1;
	    
    int num[500], i;
    for(i = 0; i < 500; i++)
        fscanf(fp, "%d", &num[i]);
    
    fclose(fp);
    
    int n;
    do {
        scanf("%d", &n);
    } while(n < 1 || n > 1000);
    
    qsort(num, 500, sizeof(int), compare);
    
    printf("REZULTATI:\n");
    if(bin_search(num, 500, n) == 1)
        printf("Broj je nadjen.");
    else
        printf("Broj nije nadjen.");
	
	return 0;
}