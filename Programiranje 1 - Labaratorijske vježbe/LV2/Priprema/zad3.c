#include <stdio.h>
#define PI 3,14159

int main(void) {
	double r, povrsina, opseg;
	
	printf("Unesite radijus:\n");
	scanf("%lf", &r);
	
	povrsina = r * r * PI;
	opseg = 2 * r * PI;
	
	printf("Povrsina kruga je %.3f, a opseg %.3f.", povrsina, opseg);
	
	return 0;
}
