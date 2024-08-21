//Napisi program koji ce za pocetnu poziciju topa t1,t2 i pocetnu poziciju skakaca (konja) s1, s2 ispisati: 1. DA-NE (moze li t pojesti s), 2. DA-NE (moze li s pojesti t)
#include <stdio.h>
#include <math.h>

int main(void){
	int t1,t2,s1,s2;
	
	t1=unos(t1);
	t2=unos(t2);
	s1=unos(s1);
	s2=unos(t2);
		
	if(s1==t1 || s2==t2)
		printf("DA ");
	else
		printf("NE ");
		
	if(abs(t1)==abs(s1+2) && abs(t2)==abs(s2+1))   //ili if(abs((t1-s1)*(t2-s2))==2)
		printf("DA");
	else
		printf("NE");
	
	return 0;
}

int unos(int x){
	scanf("%d",&x);
	return x;
}

//4,4,2,3 -> NE DA
//1,1,1,5 -> DA NE
