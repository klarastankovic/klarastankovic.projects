#include <stdio.h>

int main(void) {
	int n, i, p = 0;
	
	printf("Unesite 10 prirodnih brojeva\n");
				
	for(i = 0; i < 10; i++) {
		do {
			printf("Unesite broj: ");
			scanf("%d", &n);
		} while(n < 1);
		
		if(n % 2 == 0)
			p++;
	}
	
	printf("%d %%", 100*p/10);
	
	return 0;
}
