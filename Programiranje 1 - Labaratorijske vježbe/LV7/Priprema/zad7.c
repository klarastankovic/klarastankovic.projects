#include <stdio.h>

int funkcija(const char *str)
{
    int r = 0, z = 1;

    if (*str == '-')
    {
        z = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        r = r * 10 + (*str - '0');
        str++;
    }

    return r * z;
}

int main(void)
{
    char s[7];

    scanf("%6s", s);

    printf("%d", funkcija(s));

    return 0;
}