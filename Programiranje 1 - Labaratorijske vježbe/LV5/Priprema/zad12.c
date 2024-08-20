#include <stdio.h>
#include <string.h>

int main(void) {
	char s[111];
	int i;
	
	printf("Unesite string:\n");
	fgets(s, sizeof(s), stdin);
	s[strcspn(s, "\n")] = '\0';
	
	for (i = 0; s[i] != '\0'; i++) {
       	if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
       	else if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
    }
    
    printf("Konacan string:\n%s", s);
    
	return 0;
}
