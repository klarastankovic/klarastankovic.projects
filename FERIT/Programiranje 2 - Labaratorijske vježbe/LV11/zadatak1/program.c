#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, polje[500];
    
    FILE *fp = fopen("in1.txt", "r");
    for(i = 0; i < 500; i++)
        fscanf(fp, "%d", &polje[i]);
    fclose(fp);
    
    int N;
    do {
        scanf("%d", &N);
    } while(N < 1 || N > 999);
    
    int brojac = 0, koraci = 1;
    for(i = 0; i < 500; i++) {
        if(N == polje[i]) {
            brojac = 1;
            break;
        }
        koraci++;
    }
    
    printf("REZULTATI:\n");
    if(brojac == 1)
        printf("Broj %d je pronadjen nakon %d koraka.", N, koraci);
    else
        printf("Broj %d nije pronadjen.", N);
    
    return 0;
}