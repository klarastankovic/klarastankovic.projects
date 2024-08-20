#include <stdio.h>

int main(void) {
	double x, a;
	int y;
	
	printf("Unesite 2 realna broja:\n");
	scanf("%lf %lf", &x, &a);
	
	y = x >= -a && x <= a;
	
	printf("%d", y);
	
	return 0;
}
