#include <stdio.h>
#include <ctype.h>

char maloslovo(char c)
{
    if (c >= 'A' && c <= 'Z')
        return tolower(c);

    else
        return c;
}

int main(void)
{
    char s;

    scanf("%c", &s);

    printf("%c", maloslovo(s));

    return 0;
}