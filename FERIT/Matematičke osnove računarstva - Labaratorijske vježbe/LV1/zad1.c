#include <stdio.h>
//Napisi program koji ce za unesene prirodne brojeve a i b ispisati njihov zbroj, razliku i umnozak.

int main(void){
	int a,b;
	
	printf("Unesite prvi cijeli broj: ");
	scanf("%d",&a);
	printf("Unesite drugi cijeli broj: ");
	scanf("%d",&b);
	
	printf("Zbroj je %d.\nRazlika je %d.\nUmnozak je %d.",a+b,a-b,a*b);
	
	return 0;
}
