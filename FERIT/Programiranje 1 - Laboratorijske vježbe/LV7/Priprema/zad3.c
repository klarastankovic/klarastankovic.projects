#include <stdio.h>

int main(void)
{
    int m, i;

    do
    {
        scanf("%d", &m);
    } while (m < 4 || m >= 19);

    int p[m];

    for (i = 0; i < m; i++)
    {
        scanf("%d", &p[i]);
    }

    int *min = p, *max = p;

    for (i = 1; i < m; i++)
    {
        if (*(p + i) < *min)
            min = p + i;

        if (*(p + i) > *max)
            max = p + i;
    }

    printf("%d", *max - *min);

    return 0;
}