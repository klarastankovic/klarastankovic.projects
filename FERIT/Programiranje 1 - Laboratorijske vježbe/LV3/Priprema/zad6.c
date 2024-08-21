#include <stdio.h>

int main(void) {
	char z[3];
	int min, i;
	
	for(i = 0; i < 3; i++) {
		printf("Unesite znak: ");
		scanf(" %c", &z[i]);
	}
		
	min = z[0];
	
	for(i = 1; i < 3; i++) {
		if(min > z[i])
			min = z[i];
	}
	
	printf("Najmanju ASCII vrijednost ima %c.\n", min);
	
	printf("Razlika preostalih brojeva od najmanjeg\n");
	for(i = 0; i < 3; i++) {
		if(min != z[i])
			printf("Za %c: %x\n", z[i], z[i] - min);
	}
	return 0;
}
