#include <stdio.h>

int main() {
	float a[12], sum, ar;
	int n, i, br;
	
	do {
		printf("Unesite broj vrijednosti polja:\n");
		scanf("%d", &n);
	} while(n <= 2 || n > 12);
	
	printf("\nUnesite elemente polja:\n");
	for(i = 0; i < n; i++) {
		scanf("%f", &a[i]);
		
		sum = 0;
		br = 0;
		
		if(a[i] > 0)
			sum += a[i];
			br++;
	}
	
	ar = sum / br;
	
	printf("\nIzmijenjeno polje:\n");
	for(i = 0; i < n; i++){
		if(a[i] < ar)
			a[i] = ar;
		
		printf("%f\t", a[i]);
	}
	
	return 0;
}
