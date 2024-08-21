#include <stdio.h>

int main() {
	int a[20], i, b = -1, p[20];
	
	printf("Unesite elemente polja:\n");
	for(i = 0; i < 20; i++){
		do {
			scanf("%d", &a[i]);
			b++;
		} while(a[i] < 0 || a[i] > 9);
		p[i] = b;
		b = -1;
	}
	
	for(i = 0; i < 20; i++)
		printf("a[%d] ponovila se %d puta.\n", i, p[i]);
	
	return 0;
}
