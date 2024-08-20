#include <stdio.h>

void zamijeni(float *p, int n)
{
    int i;

    for (i = 0; i < n / 2; i++)
    {
        float t = p[i];
        p[i] = p[n - 1 - i];
        p[n - 1 - i] = t;
    }
}

int main(void)
{
    int n, i;

    do
    {
        scanf("%d", &n);
    } while (n <= 5 || n >= 11);

    float p[n];

    for (i = 0; i < n; i++)
        scanf("%f", &p[i]);

    if (n % 2 == 0)
    {
        zamijeni(p, n);

        for (i = 0; i < n; i++)
            printf("%.2f ", p[i]);
    }

    else
        printf("Neparan broj elemenata. Zamjena nije moguca");

    return 0;
}