#include <stdio.h>

int main(void) {
	float n[10], min, max;
	int i;
	
	printf("Unesite 10 realnih brojeva:\n");
	for(i = 0; i < 10; i++)
		scanf("%f", &n[i]);
	
	min = n[0];
	max = n[0];
	
	for(i = 0; i < 10; i++) {
		if(min > n[i])
			min = n[i];
		
		if(max < n[i])
			max = n[i];
	}
	
	printf("\nNajmanji je %f, najveci je %f.", min, max);
	
	return 0;
}
