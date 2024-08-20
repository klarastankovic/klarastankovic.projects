#include <stdio.h>
#include <string.h>

int main(void) {
	char s[81], z;
	int i, sum = 0, br = 0;
	
	printf("Unesite string:\n");
	fgets(s, sizeof(s), stdin);
	s[strcspn(s, "\n")] = '\0';
	
	printf("\nUnesite znak:\n");
	scanf(" %c", &z);
	
	for(i = 0; s[i] != '\0'; i++) {
		sum += s[i];
		br++;
	}
	
	for(i = 0; s[i] != '\0'; i++)
		if(s[i] <= (double)(sum / br)) s[i] = z;
	
	printf("Izmijenjeni string:\n%s", s);
	
	return 0;
}
