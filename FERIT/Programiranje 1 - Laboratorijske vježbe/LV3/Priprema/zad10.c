#include <stdio.h>

int main(void) {
	int suma = 0, k = 0, i;
	float ar;
	
	printf("Troznamenkasti brojevi cija je zadnja znamenka djeljiva s 3:\n");
	
	for(i = 100; i < 1000; i++) {
		if(i % 10 % 3 == 0) {
			printf("%d ", i);
			
			suma += i;
			k++;
		}	
	}
	
	ar = (float) suma / k;
	
	printf("\nNjihova aritmeticka sredina: %.2f", ar);
	
	return 0;
}
