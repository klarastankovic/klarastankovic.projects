#include <stdio.h>

int zbroj(int x)
{
    int sum = 0;

    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main(void)
{
    int m, i;

    do
    {
        scanf("%d", &m);
    } while (m <= 3 || m > 18);

    int p[m];

    for (i = 0; i < m; i++)
        scanf("%d", &p[i]);

    int *max = p;

    for (i = 1; i < m; i++)
        if (zbroj(*(p + i)) > zbroj(*max))
            max = p + i;

    printf("%d", *max);

    return 0;
}