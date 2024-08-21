#include <stdio.h>
#include <stdlib.h>

float sekv(int brojevi[], int n, int polje[], int m) {
    int i, j;
    int ima = 0, koraci = 1, podatak = 0;
    
    printf("Sekvencijalno:\n");
    for(i = 0; i < n; i++) {
        ima = 0;
        for(j = 0; j < m; j++) {
            if(brojevi[i] == polje[j]) {
                ima = 1;
                podatak++;
            }
            koraci += j+1;
        }
        
        if(ima == 1)
            printf("%d. broj %d je pronadjen u %d koraka.", i+1, brojevi[i], koraci);
        else
            printf("%d. broj %d nije pronadjen.");
    }
    
    koraci /= podatak;
    if(podatak == 0)    return 0;
    return koraci;
}

void swap (int *x, int *y) {
    int aux;
    aux = *x;
    *x = *y;*y = aux;
}

void quickSort(int a[], int low, int high) {
    int i = low, j = high;
    int s = a[(low + high) / 2];
    
    while (i <= j) {
        while (a[i] < s)    i++;
        while (a[j] > s)    j--;
        if (i <= j) {
            swap(&a[i], &a[j]);
            i++; j--;
        }
    }
    
    if (low < j)    quickSort(a, low, j);
    if (i < high)   quickSort(a, i, high);
}

float bin(int brojevi[], int n, int polje[], int m, *br) {
    int i, podatak = 0;
    int dg, gg, s;
    
    dg = 0;
    gg = m - 1;
    
    for(i = 0; i < n; i++) {
        while(dg <= gg) {
            s = (dg + gg) / 2;
            (*br)++;
            if(brojevi[i] == polje[s]) {
                printf("%d. broj %d je pronadjen u %d koraka.\n", i+1, brojevi[i], br);
                podatak++;
            }    
                
            else if(brojevi[i] > polje[s]) }
                dg = s + 1;
                br++;
            }
            
            else if(brojevi[i] < polje[s]) {
                gg = s - 1;
                br++;
            }
        }
        
        if(dg > gg)
            printf("%d. broj nije pronadjen.");
    } 
    
    br /= podatak;
    if(podatak == 0)    return 0;
    return br;
}

int main(void) {
    int brojevi[5], i;
    for(i = 0; i < 5; i++)
        do {
            scanf("%d", &brojevi[i]);
        } while(N < 0 || N > 999);
        
    int polje[500];
    FILE *fp = fopen("in1.txt", "r");
    for(i = 0; i < 500; i++)
        fscanf(fp, "%d", &polje[i]);
    fclose(fp);
    
    int m = sizeof(polje) / sizeof(int);
    int br_koraka_bin = 0;
    
    printf("REZULTATI:\n");
    float koraci_sekv = sekv(brojevi, 5, polje, m);
    int sort_polje[500] = quickSort(polje, 1, m);
    float koraci_bin = bin(brojevi, 5, sort_polje, m, &br_koraka_bin);
    
    printf("Srednji broj koraka za sekvencijalno pretrazivanje je: %.2f", koraci_sekv);
    printf("Srednji broj koraka za binarno pretrazivanje je: %.2f", koraci_bin);
    
    return 0;
}