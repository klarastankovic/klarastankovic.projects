/* U ovoj aktivnosti možete slobodno testirati VPL sustav */
#include<stdio.h>
#include <ctype.h>

char maloSlovo(char c) {
    if(c >= 'A' && c <= 'Z')
        return tolower(c);
    
    else    return c;
}

int main(void) {
    char s;
    
    scanf("%c", &s);
    
    printf("%c", maloSlovo(s));
    
    return 0;
}