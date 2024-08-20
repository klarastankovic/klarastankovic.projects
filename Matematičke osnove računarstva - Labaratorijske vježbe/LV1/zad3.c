#include <stdio.h>
//Za unesene brojeve a i b, zamijeni sadrzaje tih varijabli bez koristenja trece varijable

int main(void)
{
	int a,b;
	
	printf("Unesite 2 broja: ");
	scanf("%d %d",&a,&b);
	
	a=a+b; //a=a*b;  a=a xor b
	b=a-b; //b=a/b;  b=a xor b
	a=a-b; //a=a/b;  a=a xor b
	
	printf("Prvi broj %d.\nDrugi broj %d",a,b);
	
	return 0;
}
