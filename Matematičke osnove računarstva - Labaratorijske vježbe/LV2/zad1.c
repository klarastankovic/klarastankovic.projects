//Napisi program koji ce za uneseni radijus i visinu valjka ispisati DA ako je volumen >=1 L, a NE ako je <1 L 
#include <stdio.h>
#define pi 3.14

int main(void){
	float r,h,V;
	
	scanf("%f %f", &r,&h);
	
	V=r*r*pi*h*1000;
	
	if(V>=1)
		printf("DA");
	else
		printf("NE");
	
	return 0;
}
