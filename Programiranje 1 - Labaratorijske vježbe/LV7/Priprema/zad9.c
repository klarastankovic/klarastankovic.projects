#include <stdio.h>

float arSredina(int *p, int n)
{
    int sum = 0, i;

    for (i = 0; i < n; i++)
        sum += *(p + i);

    return (float)sum / n;
}

void zamjena(int *p, int n)
{
    float sr = arSredina(p, n);
    int i;

    for (i = 0; i < n; i++)
        if (*(p + i) < sr)
            *(p + i) = sr;
}

int main(void)
{
    int n;

    do
    {
        scanf("%d", &n);
    } while (n <= 3 || n > 16);

    int p[n], i;

    for (i = 0; i < n; i++)
        scanf("%d", &*(p + i));

    zamjena(p, n);

    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));

    return 0;
}