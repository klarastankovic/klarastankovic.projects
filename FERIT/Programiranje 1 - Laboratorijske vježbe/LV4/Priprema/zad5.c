#include <stdio.h>

int main() {
	float a[9][9];
	int m, i, j;
	
	do { 
		printf("Unesite dimenzije kvadratne matrice:\n");
		scanf("%d", &m);
	} while(m < 3 || m > 9);
	
	printf("\nUnesite elemente matrice:\n");
	for(i = 0; i < m; i++)
		for(j = 0; j < m; j++)
			scanf("%f", &a[i][j]);
	
	float x;
	
	do { 
		printf("\nUnesite realan broj:\n");
		scanf("%f", &x); 
	} while(x <= 0 || x > 1);
	
	for(i = 0; i< m; i++)
		a[i][m-i-1] *= x;
		a[i][i] = a[i][m-i-1];
		
	printf("\nKonacna matrica:\n");
	for(i = 0; i < m; i++) {
		for(j = 0; j < m; j++)
			printf("%f\t", a[i][j]);
		printf("\n");
	}
	
	return 0;
}
