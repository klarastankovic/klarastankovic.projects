#include <stdio.h>

int main() {
	float a[13][13];
	int m, i, j;
	
	do { 
		printf("Unesite dimenzije kvadratne matrice:\n");
		scanf("%d", &m);
	} while(m <= 3 || m >= 13);
	
	printf("\nUnesite elemente matrice:\n");
	for(i = 0; i < m; i++)
		for(j = 0; j < m; j++)
			scanf("%f", &a[i][j]);
	
	printf("\nElementi ispod sporedne dijagonale i iznad glavne dijagonale cija je vrijednost veca od 0:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++) {
            if (i > j && a[i][j] > 0)
                printf("%f ", a[i][j]);
                
            else if (i < j && a[i][j] > 0)
            	printf("%f ", a[i][j]);
        }
        
	return 0;
}
