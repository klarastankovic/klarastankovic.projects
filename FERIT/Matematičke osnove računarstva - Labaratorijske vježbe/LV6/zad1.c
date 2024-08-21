#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(b-a == c-b) printf("%d", c + (c-b));
	else printf("%.2f", (float) c * (c/b));
		
	return 0;
}
