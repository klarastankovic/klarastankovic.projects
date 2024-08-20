#include <stdio.h>

int main() {
	int a[10], i, j, p, bp;
	
	printf("Unesite polje od 10 elemenata:\n");
	for(i = 0; i < 10; i++)
		scanf("%d", &a[i]);
		
	bp = 0;
	printf("\nProsti brojevi u polju:\n");
	for(i = 0; i < 10; i++) {
		p = 1;
		
		if(a[i] <= 1)
			p = 0;
		else
			for(j = 2; j * j <= a[i]; j++)
				if(a[i] % j == 0) {
					p = 0;
					break;
				}

		if(p) {
			printf("%d\t", a[i]);
			bp++;
		}		
	}
	
	printf("\nUkupno prostih brojeva u polju: %d", bp);
	
	return 0;
}
