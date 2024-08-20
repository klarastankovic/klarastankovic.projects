#include <stdio.h>
#include <string.h>

int main(void) {
	char s[101], o[101];
	int i;
	
	printf("Unesite string:\n");
	fgets(s, sizeof(s), stdin);
	
	s[strcspn(s, "\n")] = '\0';
	
	for(i = 0; i < strlen(s); i++)
		o[i] = s[strlen(s) - i - 1];
	
	o[strlen(s)] = '\0';
	
	printf("Uneseni string:\n%s\n", s);
	printf("Obrnuti string:\n%s\n", o);
	
	return 0;
}
