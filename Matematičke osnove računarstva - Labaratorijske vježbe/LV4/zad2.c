//Za zadane prirodne brojeve a, b, c i d ispisi sve prirodne brojeve izmedju a i b za koji pri djeljenju s c daju ostatak c (a je uvijek manji od b)

#include <stdio.h>

int main(void) {
	int a, b, c, d, i;
		
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	do {
		if (a%c==d) {
			for(i = a; i <= b; i += c)
				printf("%d ",i);
			break;
		}	
		a++;
	} while(a <= b);
	
	return 0;
}
