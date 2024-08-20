#include <stdio.h>

int main(void) {
	float a, b, c;
	int k = 0;
	
	printf("Unesite duljine 3 stranice: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a+b > c && b+c > a && a+c > b){
		if(a == b && b == c)
			printf("Trokut je jednakostranican.");
		else if(a == b || b == c || a == c)
			printf("Trokut je jednakokracan.");
		else
			printf("Trokut je raznostranican.");
	}
		
	else
		printf("Trokut ne postoji.");
	
	return 0;
}
