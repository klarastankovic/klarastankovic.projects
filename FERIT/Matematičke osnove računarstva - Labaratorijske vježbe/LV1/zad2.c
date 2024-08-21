#include <stdio.h>
//Za unesene brojeve a,b i c koji predstavljaju stranice trokuta ispisi opseg i povrsinu trokuta.

int main(void){
	int a,b,c,o;
	float p;
	
	printf("Unesite stranice trokuta: ");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a+b>c && b+c>a && a+c>b)
		{
			o=a+b+c;
			p=o/2;
			printf("Opseg trokuta je %d.\nPovrsina trokuta je %.4f.",o,p);
		}
	else
	{
		printf("Niste unijeli stranice trokuta");
	}
	
	/*
	if (a>b && b>c)
	{
		if (b+c>a)
			{
				o=a+b+c;
				p=o/2;
				printf("Opseg trokuta je %d.\nPovrsina trokuta je %.4f.",o,p);
			}
		
		else
		{
			printf("Niste unijeli stranice trokuta");
		}
	}
	
	else if (b>a && a>c)
	{
		if (a+c>b)
			{
				o=a+b+c;
				p=o/2;
				printf("Opseg trokuta je %d.\nPovrsina trokuta je %.4f.",o,p);
			}
			
		else
		{
			printf("Niste unijeli stranice trokuta.");
		}
	}
	
	else if (c>b && c>b)
	{
		if (a+b>c)
			{
				o=a+b+c;
				p=o/2;
				printf("Opseg trokuta je %d.\nPovrsina trokuta je %.4f.",o,p);
			}
		else
		{
			printf("Niste unijeli stranice trokuta");
		}
	}
	
	else
	{
		printf("Niste unijeli stranice trokuta");
	}
	*/
		
	return 0;
}
