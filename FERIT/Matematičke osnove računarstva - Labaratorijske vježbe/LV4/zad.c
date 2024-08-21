//Ispisi sve brojeve od 20 do 200 koji su djeljivi s 5.
//Ispis: 20, 25, 30, 35, ..

#include <stdio.h>

int main(void) {
	int i;
	
	for (i = 20; i <= 200; i++) { //for (i = 20; i <= 200; i++)
		if (i%5==0)
			printf("%d, ",i);	
	}
	
	return 0;
}
