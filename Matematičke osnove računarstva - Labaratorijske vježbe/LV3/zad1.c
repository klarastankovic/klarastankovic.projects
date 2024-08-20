//Napisi program koji racuna BMI (ITM) - unosi tezinu u kg i visinu u m. 
#include <stdio.h>

int main() {
	float m, h, ITM; 
	
	printf("Aplikacija za racunanje ITM-a\n\n");
	
	printf("Unesite masu i visinu:\n");
	scanf("%f %f", &m, &h);
	
	ITM = m / (h*h);
	
	printf("Vas ITM (%.1f) Vam govori:\n", ITM);
	if (ITM < 18.5)
		printf("Pothranjenost");
	else if (ITM < 25)
		printf("Idealna tezina");
	else if (ITM < 30)
		printf("Umjerena debljina");
	else if (ITM < 40)
		printf("Znacajna debljina");
	else
		printf("Patoloska pretilost");
	
	printf("\n\nHvala na uporabi!");
	return 0;
}
