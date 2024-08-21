#include <stdio.h>
#include <string.h>

int main(void) {
	char a[51], b[51];
	int i, vs1 = 0, vs2 = 0, ms1 = 0, ms2 = 0;
	
	printf("Unesite prvi string:\n");
	fgets(a, sizeof(a), stdin);
	a[strcspn(a, "\n")] = '\0';
	
	printf("Unesite drugi string:\n");
	fgets(b, sizeof(b), stdin);
	b[strcspn(b, "\n")] = '\0';
	
	for(i = 0; a[i] != '\0'; i++)
		if(isupper(a[i])) vs1++;
		
	for(i = 0; b[i] != '\0'; i++)
		if(isupper(b[i])) vs2++;
	
	if(vs1 < vs2) printf("String s manje velikih slova:\n%s\n", a);
	else if(vs1 > vs2) printf("String s manje velikih slova:\n%s\n", b);
	else {
		for(i = 0; a[i] != '\0'; i++)
			if(islower(a[i])) ms1++;
		
		for(i = 0; b[i] != '\0'; i++)
			if(islower(b[i])) ms2++;
			
		if(ms1 < ms2) printf("String s manje velikih slova:\n%s\n", a);
		else if(ms1 > ms2) printf("String s manje velikih slova:\n%s\n", b);
		else printf("Oba stringa imaju isti broj malih slova:\n%s\n%s", a, b);
	}
		
	return 0;
}
