//Napisi program koji ce za unesenu poziciju lovca l1,l2 i unesenu poziciju kralja k1,k2 ispisati: 1. DA/NE (moze li lovac pojesti kralja), 2. DA/NE (moze li kralj pojesti lovca)
#include <stdio.h>
#include <math.h>

int main(void){
	int l1,l2,k1,k2;
	
	l1=unos(l1);
	l2=unos(l2);
	k1=unos(k1);
	k2=unos(k2);
	
	if(abs(k1-l1)==abs(k2-l2))
		printf("DA ");
	else
		printf("NE ");
		
	if(abs(k1-l1)==1 && abs(k2-l2)==1 || abs((k1-l1)*(k2-l2))==1)
		printf("DA");
	else
		printf("NE");

	return 0;
}

int unos(int x){
	scanf("%d",&x);
	return x;
}

//1,1,2,8 -> NE NE
//2,4,3,5 -> DA DA
//2,4,4,6 -> DA NE
