#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
    int n;

    do
    {
        scanf("%d", &n);
    } while (n <= 5 || n > 20);

    srand((unsigned)time(NULL));

    double t;
    double *p = (double *)malloc(n * sizeof(double));
    int i, j;
    double min = *p, max = *p;

    for (i = 0; i < n; i++)
    {
        t = 10 + (double)rand() / RAND_MAX * (1000 - 10);
        for (j = 0; i < t; i++)
        {
            p[j] = -10 + (double)rand() / RAND_MAX * 10;

            if (p[j] < min)
                min = p[j];

            if (p[j] > max)
                max = p[j];
        }
        printf("%.2f", fabs(min - max));
    }

    return 0;
}