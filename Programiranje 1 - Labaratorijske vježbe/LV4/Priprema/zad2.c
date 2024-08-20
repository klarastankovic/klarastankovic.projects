#include <stdio.h>

int main() {
	float a[10], min, max;
	int n, i;
	
	printf("Unesite elemente polja:\n");
	for(i = 0; i < 10; i++) {
		scanf("%f", &a[i]);
		
		if(a[i] < min || i == 0) min = a[i];
		
		if(a[i] > max || i == 0) max = a[i];
	}
	
	if(min == max) printf("Najmanja i najveca vrijednost jednake su %f", min);
	else printf("Najmanja vrijednost je %f, a najveca %f", min, max);
	
	return 0;
}
