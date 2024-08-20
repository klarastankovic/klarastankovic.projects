#include <stdio.h>

int main(void) {
	int n, i, j, prost = 1;
	
	printf("Unesite cijeli broj: ");
	
	do {
		scanf("%d", &n);
	} while(n < 100);
	
	printf("Prosti brojevi od 2 do %d su:\n", n);
	
	for(i = 2; i <= n; i++) {
		for(j = 2; j <= i / 2; j++) {
			if(i % j == 0) {
				prost = 0;
				break;
			}
		}
		
		if(prost)
			printf("%d ", i);
		
		prost = 1;
	}
	
	return 0;
}
