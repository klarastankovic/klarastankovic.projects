#include <stdio.h>

int main() {
	float a[13][15], sum, ar;
	int m, n, i, j;
	
	do { 
		printf("Unesite broj redaka matrice:\n");
		scanf("%d", &m);
	} while(m < 3 || m >= 13);
	
	do { 
		printf("\nUnesite broj stupaca matrice:\n");
		scanf("%d", &n);
	} while(n < 2 || n >= 15);
	
	printf("\nUnesite elemente matrice:\n");
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%f", &a[i][j]);
	
	printf("\nAritmeticka sredina svakog stupca:\n");
    for(j = 0; j < n; j++) {
        sum = 0;
        
        for(i = 0; i < m; i++) {
            sum += a[i][j];
        }
        
        ar = sum / m;
        
        printf("Stupac %d: %lf\n", j + 1, ar);
    }
    
	return 0;
}
