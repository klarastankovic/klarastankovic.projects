#include <stdio.h>

int main(void) {
	int n;
	
	do {
		printf("Unesite prirodan broj: ");
		scanf("%d", &n);
	} while(n < 1);
	
	do {
		printf("%d", n%10);
		n /= 10;
		
		if(n != 0)
			printf("__");
	} while (n != 0);
	
	return 0;
}
