#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int p[40], br, je, i, j;
	
	for(i = 0; i < 40; i++) {
		do {
			br = rand() % 101 - 30;
			
			je = 0;
			for(j = 0; j < i; j++)
				if (p[j] == br) {
					je = 1;
					break;
				}
		} while(je);
		
		p[i] = br;
		printf("%d ", p[i]);
	}
	
	return 0;
}
