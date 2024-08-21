#include <stdio.h>

int prva(int x)
{
    while (x >= 10)
    {
        x = x / 10;
    }

    return x;
}

int main(void)
{
    int p[10], i, sum = 0;
    double sr;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &p[i]);

        sum += prva(p[i]);
    }

    sr = (double)sum / 10;

    printf("%.2f", sr);

    return 0;
}