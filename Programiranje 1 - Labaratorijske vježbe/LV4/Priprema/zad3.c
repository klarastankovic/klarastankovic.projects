#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[12], i, sum = 0;
	double ar;
	
	printf("Unesite elemente polja:\n");
	for(i = 0; i < 12; i++) {
		scanf("%d", &a[i]);
		sum += abs(a[i]);
	}
	
	ar = sum / 12;
	
	printf("\nIzmijenjeno polje:\n");
	for(i = 0; i < 12; i++) {
		if(a[i] > 0)
			a[i] = ar;
		
		printf("%d\n", a[i]);
	}
			
	return 0;
}
