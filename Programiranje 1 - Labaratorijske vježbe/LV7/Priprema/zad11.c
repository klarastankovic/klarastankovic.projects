#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void zamjena(char *str, int max)
{
    srand((unsigned)time(NULL));

    int i;

    for (i = 0; i < max && str[i] != '\0'; i++)
        if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
        {
            char new = (rand() % 2 == 0) ? (char)(rand() % 26 + 'A') : (char)(rand() % 26 + 'a');

            str[i] = new;
        }
}

int main(void)
{
    char s[51];

    fgets(s, sizeof(s), stdin);

    zamjena(s, sizeof(s) - 1);

    printf("%s", s);

    return 0;
}