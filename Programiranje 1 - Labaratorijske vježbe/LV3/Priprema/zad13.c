#include <stdio.h>

int main(void) {
	int n;
	float x;
	
	printf("Unesite bodove s LV-a: ");
	
	do {
		scanf("%d", &n);
	} while(n < 0 || n > 28);
	
	x = 100*n/28*20/100;
	
	printf("\nBodovi s LV-a iznose %.2f %% ocjene kolegija.", x);
	return 0;
}
