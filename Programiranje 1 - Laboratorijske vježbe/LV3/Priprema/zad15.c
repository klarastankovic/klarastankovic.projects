#include <stdio.h>

int main(void) {
	float n, max;
	int i;
	
	printf("Unesite 5 realnih brojeva\n");
	
	for(i = 0; i < 5; i++) {
		do {
			printf("Unesite realni broj: ");
			scanf("%f", &n);
		} while(n <= -100 || n > 50);
		
		if(i == 0 || max < n)
			max = n;
	}
	
	printf("Najveci broj je %f.", max);
	
	return 0;
}
