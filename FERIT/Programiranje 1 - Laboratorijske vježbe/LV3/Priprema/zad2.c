#include <stdio.h>

int main(void) {
	int n, i, j;
	
	printf("Unesite cijeli broj: ");
	do { scanf("%d", &n);
	} while(n < 5 || n > 25);
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
