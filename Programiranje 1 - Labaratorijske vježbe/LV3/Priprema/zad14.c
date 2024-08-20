#include <stdio.h>

int main(void) {
	int n, max,  k = 0, kmax, i, j;
	
	do {
		printf("Unesite cijeli broj: ");
		scanf("%d", &n);
	} while(n <= 2);
	
	for(i = 3; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			if(i % j == 0)
				k++;
		}
		
		if(i == 3 || kmax < k) {
			kmax = k;
			max = i;
		}
		
		k = 0;
	}
	
	printf("Broj s najvise pozitivnih djelitelja je %d i ima ih %d.", max, kmax);
	
	return 0;
}
