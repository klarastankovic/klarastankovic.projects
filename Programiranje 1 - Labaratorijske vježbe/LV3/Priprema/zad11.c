#include <stdio.h>

int main(void) {
	char n;
	int k = 0; 
	
	printf("Unesite znak (za izlaz unesite q)\n");
	do {
		printf("Unesite znak: ");
		scanf(" %c", &n);
		k++;
	} while(n != 'q');
	
	printf("\nUneseno je %d znakova prije q.", k-1);
	
	return 0;
}
