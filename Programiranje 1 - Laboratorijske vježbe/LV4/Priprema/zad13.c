#include <stdio.h>

int main() {
	float a[12][10], sum, ar;
	int m, n, i, j;
	
	do { 
		printf("Unesite broj redaka matrice:\n");
		scanf("%d", &m);
	} while(m < 2 || m >= 12);
	
	do { 
		printf("\nUnesite broj stupaca matrice:\n");
		scanf("%d", &n);
	} while(n <= 4 || n > 10);
	
	printf("\nUnesite elemente matrice:\n");
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%f", &a[i][j]);
			
	printf("\nAritmeticka sredina svakog retka:\n");
    for (i = 0; i < m; i++) {
        sum = 0;
        for(j = 0; j < n; j++)
            sum += a[i][j];
            
        ar = sum / n;
        printf("Redak %d: %f\n", i + 1, ar);
    }
	
	return 0;
}
