#include <stdio.h>

int main(void){
	short int x;
	double y;
	
	scanf("%hd %lf", &x, &y);
	printf("%d %f", x, y);
	
	return 0;
}
