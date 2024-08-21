/* U ovoj aktivnosti možete slobodno testirati VPL sustav */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[101], o[101];
    int i;
    
    printf("Unesite string:\n");
    fgets(s, sizeof(s), stdin);
    
    for(i = 0; i < strlen(s); i++)
        o[i] = s[strlen(s) - i - 1];
    
    o[strlen(s)] = '\0';
    
    printf("\nUneseni string:\n%s\n", s);
    printf("\nObrnuti string:%s", o);
    
    return 0;
}