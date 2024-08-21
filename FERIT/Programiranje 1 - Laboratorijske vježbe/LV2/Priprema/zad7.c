#include <stdio.h>

int main(void) {
	int x, uvjet, y;
	
	printf("Unesite cijeli broj:\n");
	scanf("%d", &x);
	
	uvjet = x % 2 != 0 && x > 20;
	y = uvjet * 1234;
	
	printf("%d", y);
	
	return 0;
}
