#include <stdio.h>

int main(void) {
	int n, i, k = 0;
	
	printf("Unesite cijeli broj: ");
	scanf("%d", &n);
	
	if(n < 0)
		n = -n;
		
	for(i = 1; i <= n; i++)
		if(n % i == 0) {
			printf("%d ", i);
			k++;
		}
	
	if(k == 0)
		printf("%d nema pozitivnih djelitelja.", n);

	return 0;
}
