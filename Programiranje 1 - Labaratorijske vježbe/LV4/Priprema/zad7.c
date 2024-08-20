#include <stdio.h>

int main() {
	float a[16][16], min, max;
	int m, i, j;
	
	do { 
		printf("Unesite dimenzije kvadratne matrice:\n");
		scanf("%d", &m);
	} while(m <= 3 || m >= 16);
	
	printf("\nUnesite elemente matrice:\n");
	for(i = 0; i < m; i++)
		for(j = 0; j < m; j++)
			scanf("%f", &a[i][j]);
	
	min = a[0][1];
	
	for(i = 0; i < m-1; i++)
		for(j = m-1-i ; j < m-1; j++)
			if(a[i][j] < min)
				min = a[i][j];
				
	max = a[1][0];
	
	for(i = 1; i < m; i++)
		for(j = 0 ; j < i; j++)
			if(a[i][j] > max)
				max = a[i][j];
	
	printf("Element iznad sporedne dijagonale s najmanjom vrijednosti: %f\n", min);
    printf("Element ispod glavne dijagonale s najvecom vrijednosti: %f\n", max);
    
	return 0;
}
