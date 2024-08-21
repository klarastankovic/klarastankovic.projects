#include <stdio.h>

int main(void) {
	int a, b, c, uvjet;
	
	printf("Unesite duljinu 3 stranice:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	uvjet = (a + b) > c && (b + c) > a && (a + c) > b;
	
	printf("\nPostoji li trokuts takvim stranicama?\n");
	printf("%d", uvjet);
	
	return 0;
}
