#include <stdio.h>

int main(void) {
	int n, i, prost = 1;
	
	do {
		printf("Unesite cijeli broj: ");
		scanf("%d", &n);
	} while(n <= 1);
	
	for(i = 2; i <= n / 2; i++) {
		if(n % i == 0) {
			prost = 0;
			break;
		}
	}	
		
	if(prost)
		printf("%d je prost broj.", n);
		
	else
		printf("%d nije prost broj.", n);
	
	return 0;
}
