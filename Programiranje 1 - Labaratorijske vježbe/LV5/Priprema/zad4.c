#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int p[100], i;
	
	printf("Popunjeno polje:\n");
	for(i = 0; i < 100; i++){
		do {
			p[i] = rand() % 2021 - 1010;
		} while(p[i] % 6 != 0);
		
		printf("%d ", p[i]);
	}
	
	return 0;
}
