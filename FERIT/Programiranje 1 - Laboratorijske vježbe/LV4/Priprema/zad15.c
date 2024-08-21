#include <stdio.h>

int main() {
	float a[15], min, max;
	int n, i;
	
	do {
		printf("Unesite broj vrijednosti polja:\n");
		scanf("%d", &n);
	} while(n <= 5 || n > 15);
	
	printf("\nUnesite elemente polja:\n");
	for(i = 0; i < n; i++) {
		scanf("%f", &a[i]);
		
		if(a[i] < min || i == 0)
			min = a[i];
			
		if(a[i] > max || i == 0)
			max = a[i];
	}
	
	printf("\nUneseno polje:\n");
	for(i = 0; i < n; i++)
		printf("%f\t", a[i]);
		
	printf("\nNormalizirano polje:\n");
	for(i = 0; i < n; i++) {
		a[i] = (a[i] - min) / (max - min);
		printf("%f\t", a[i]);
	}
		
	return 0;
}
