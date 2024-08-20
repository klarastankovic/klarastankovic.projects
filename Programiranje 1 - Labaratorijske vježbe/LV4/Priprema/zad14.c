#include <stdio.h>

int main() {
	float a[16][16], sum, ar;
	int m, i, j;
	
	do { 
		printf("Unesite dimenzije matrice:\n");
		scanf("%d", &m);
	} while(m <= 3 || m >= 16 || m % 2 == 0);
	
	printf("\nUnesite elemente matrice:\n");
	for(i = 0; i < m; i++)
		for(j = 0; j < m; j++)
			scanf("%f", &a[i][j]);
			
	sum = 0;
	for(i = 0; i < m; i++)
		for(j = 0; j < m; j++)
			if(i != m / 2 || j != m / 2)
				sum += a[i][j];
	
	ar = sum / (m-1);
	
	a[m/2][m/2] = ar;
	
	printf("\nIzmijenjena matrica:\n");
	for(i = 0; i < m; i++) {
		for(j = 0; j < m; j++) {
			printf("%f\t", a[i][j]);
		}
		printf("\n");
	}
		
	
	return 0;
}
