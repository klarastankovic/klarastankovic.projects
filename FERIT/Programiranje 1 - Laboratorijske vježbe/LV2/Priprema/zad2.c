#include <stdio.h>

int main(void) {
	int x, y, f;
	
	printf("Unesite cijeli broj:\n");
	scanf("%d", &x);
	
	y = x % 3;
	f = y < 1;
	
	printf("%d", f);
	
	return 0;
}
