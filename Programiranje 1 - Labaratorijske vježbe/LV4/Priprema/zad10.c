#include <stdio.h>

int main() {
	float a[13], min, max, t;
	int n, i, imin, imax;
	
	do {
		printf("Unesite broj vrijednosti polja:\n");
		scanf("%d", &n);
	} while(n <= 3 || n >= 13);
	
	printf("\nUnesite elemente polja:\n");
	for(i = 0; i < n; i++)
		scanf("%f", &a[i]);
		
	min = a[0];
	max = a[0];
	imin = 0;
	imax = 0;
	
	for(i = 1; i < n; i++) {
		if(a[i] < min) {
			min = a[i];
			imin = i;
		}
		
		if(a[i] > max) {
			max = a[i];
			imax = i;
		}
	}
	
	t = a[imin];
	a[imin] = a[imax];
	a[imax] = t;
	
	printf("\nIzmijenjeno polje:\n");
	for(i = 0; i < n; i++)
		printf("%f\t", a[i]);
	
	return 0;
}
