#include <stdio.h>
#include <string.h>

int main(void) {
	char r[221];
	int sum = 0, br = 0, i;
	
	printf("Unesite recenicu:\n");
	fgets(r, sizeof(r), stdin);
	r[strcspn(r, "\n")] = '\0';
	
	for(i = 0; r[i] != '\0'; i++)
		if(r[i] != ' ' && r[i] != '.') {
			sum += r[i];
			br++;
		}
	
	printf("Srednja vrijednost ASCII vrijednosti:\n%.2f", (double)sum / br);
	
	return 0;
}
