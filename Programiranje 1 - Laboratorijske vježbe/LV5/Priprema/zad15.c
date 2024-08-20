#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char s[61];
	int i, q = 0, z, r;
	
	printf("Unesite string:\n");
	fgets(s, sizeof(s), stdin);
	s[strcspn(s, "\n")] = '\0';
	
	for(i = 0; s[i] != '\0'; i++) {
		z = tolower(s[i]);
		
		if(z == 'a' || z == 'e' || z == 'i' || z == 'o' || z == 'u') q++;
	}
	
	r = 2 * q;
	if(r < 32) r = 32;
	
	for(i = 0; s[i] != '\0'; i++)
		if(s[i] > r)
			s[i] = (char)r;
	
	printf("Izmijenjeni string:\n%s", s);
	
	return 0;
}
