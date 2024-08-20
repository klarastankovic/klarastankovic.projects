#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int p[50], i;
	srand(time(NULL));
	
	printf("Prvi ispis:\n");
	for(i = 0; i < 50; i++) {
		p[i]= rand() % 201 - 100;
		printf("%d ", p[i]);
	}
	
	printf("\nDrugi ispis:\n");
	for(i = 0; i < 50; i++) {
		if(rand() % 100 == 22) p[i] *= 2;
		printf("%d ", p[i]);
	}
	
	return 0;
}
