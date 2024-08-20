#include <stdio.h>
#include <string.h>

int main(void) {
	char a[21], b[21], s[41];
	int i, j;
	
	printf("Unesite prvi string:\n");
	fgets(a, sizeof(a), stdin);
	a[strcspn(a, "\n")] = '\0';
	
	printf("Unesite drugi string:\n");
	fgets(b, sizeof(b), stdin);
	b[strcspn(b, "\n")] = '\0';
	
	for(i = 0; a[i] != '\0'; i++)
		s[i] = a[i];
	
	for(j = 0; b[j] != '\n'; j++)
		s[i + j] = b[j];
	
	s[i + j] = '\0';
	
	printf("Spojeni string:\n%s", s);
	
	return 0;
}
