#include <stdio.h>

int funkcija(const char *str)
{
    int m = 0, v = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
        {
            if (*str >= 'a' && *str <= 'z')
                m++;
            else
                v++;
        }

        str++;
    }

    if (m > v)
        return -1;

    else if (m < v)
        return 1;

    else
        return 0;
}
int main(void)
{
    char s[100];

    fgets(s, sizeof(s), stdin);

    printf("%d", funkcija(s));

    return 0;
}