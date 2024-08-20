#include <stdio.h>

int main(void) {
	int x, g, t, d;
	
	printf("Unesite cijeli broj:\n");
	scanf("%d", &x);
	
	g = x / 365;
	t = (x%365) / 7;
	d = x - (g * 365 + t * 7);
	
	printf("%d godina %d tjedana i %d dana", g, t, d);
	
	return 0;
}
