#include <stdio.h>

int main() {
	float a[12];
	int q, i;
	
	do { 
		printf("Unesite broj vrijednosti polja:\n");
		scanf("%d", &q);
	} while(q < 5 || q > 12);
	
	printf("\nUnesite elemente polja:\n");
	for(i = 0; i < q; i++){
		scanf("%f", &a[i]);
		
		if(i % 2 == 0)
			a[i] /= 10;
		
		if(i % 2 != 0)
			a[i] /= -10;
	}
	
	printf("\nKonacno polje:\n");
	for(i = 0; i < q; i++)
		printf("%f\t",a[i]);
	
	return 0;
}
