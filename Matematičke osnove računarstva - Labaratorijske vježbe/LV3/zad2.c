#include <stdio.h>

int main() {
	printf("Zamislio sam jedan broj od 1 do 100.\n\n");
	
	int x, tajni, n=0; 
	
	srand(time(0));
	tajni = rand() % 100 + 1;
	
	do {
		printf("Pogodi broj: ");
		scanf("%d", &x);
		n++;
		
		if (x < tajni)
			printf("Moj zamisljeni broj je veci.\n\n");
			
		if (x > tajni)
			printf("Moj zamisljeni broj je manji.\n\n");
		
	} while(x != tajni);
	
	printf("Bravo, pogodio si u %d-tom pokusaju.", n);
	
	return 0;
}
