#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char s[121];
	int ms = 0, vs = 0, uk = 0, i;
	
	printf("Unesite string:\n");
	fgets(s, sizeof(s), stdin);
	
	s[strcspn(s, "\n")] = '\0';
	
	for(i = 0; s[i] != '\0'; i++) {
		if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
			uk++;
			if(islower(s[i])) ms++;
			else if(isupper(s[i])) vs++;
		}
	}
	
	printf("Postotak malih slova: %.2f%%\n", (double)ms / uk * 100);
	printf("Postotak malih slova: %.2f%%\n", (double)vs / uk * 100);
	
	return 0;
}
