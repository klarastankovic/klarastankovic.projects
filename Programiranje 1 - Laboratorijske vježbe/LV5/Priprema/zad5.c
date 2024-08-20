#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	float p[120];
	int i;
	
	for(i = 0; i < 120; i++) {
		do {
			p[i] = ((float)rand() / RAND_MAX) * 110 - 100; 
		} while(p[i] >= -50 && p[i] <= 0);
		
		if((float)rand() / RAND_MAX < 0.385) p[i] = ((float)rand() / RAND_MAX) * 24 - 25;
		
		printf("%.2f ", p[i]);
	}
	
	return 0;
}
