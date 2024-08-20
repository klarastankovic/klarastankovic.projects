#include <stdio.h>

int main(void){
	char x, y, t;
	
	scanf("%c %c", &x, &y);
	
	t=y;
	y=x;
	x=t;
	
	printf("%c %d %o %x\n", x, x, x);
	printf("%c %d %o %x", y, y, y);

	return 0;
}
