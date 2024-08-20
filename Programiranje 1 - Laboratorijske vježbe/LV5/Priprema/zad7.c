#include <stdio.h>
#include <string.h>

int main(void) {
	char s[81], *p = s;
	int br;
	
	printf("Unesite string:\n");
	fgets(s, sizeof(s), stdin);
	
	s[strcspn(s, "\n")] = '\0';
	
	br = 0;
	while((p = strstr(p, "ma")) != NULL) {
		br++;
		p += 2;
	}
	
	printf("Broj ponavljanja sloga 'ma': %d", br);
	
	return 0;
}
