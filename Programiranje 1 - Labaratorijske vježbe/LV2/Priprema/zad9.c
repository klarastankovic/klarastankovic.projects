#include <stdio.h>

int main(void) {
	double a, b, c;
	
	printf("Unesite unesite 2 broja:\n");
	scanf("%lf %lf", &a, &b);
	
	printf("\nVarijable prije zamjene:\n");
	printf("%f %f", a, b);
	
	c = b;
	b = a;
	a = c;
	
	printf("\nVarijable nakon zamjene:\n");
	printf("%f %f", a, b);
	
	return 0;
}
