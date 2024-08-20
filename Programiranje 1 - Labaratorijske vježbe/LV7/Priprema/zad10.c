#include <stdio.h>

int zbrojASCII(char *str)
{
    int sum = 0;

    while (*str != '\0')
    {
        sum += *str;

        str++;
    }

    return sum;
}

int main(void)
{
    char s[60];

    fgets(s, sizeof(s), stdin);

    int sum = zbrojASCII(s);

    if (sum % (strlen(s) - 1) == 0)
        printf("Dobiveni zbroj djeljiv je s duljinom stringa.");

    else
        printf("Dobirveni zbroj nije djeljiv s duljinom stringa.");

    return 0;
}