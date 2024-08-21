#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    do
    {
        scanf("%d", &n);
    } while (n <= 9 || n > 200);

    double *p = (double *)malloc(n * sizeof(double));

    srand((unsigned)time(NULL));

    int i;

    for (i = 0; i < n; i++)
        p[i] = -300 + (double)rand() / RAND_MAX * 600;

    int *ind = (int *)malloc((n / 2) * sizeof(int));

    for (i = 0; i < n / 2; i++)
    {
        int in;

        do
        {
            in = rand() % n;
        } while (ind[i] == i);

        ind[i] = in;
    }

    double sum = 0, ar;
    for (i = 0; i < n / 2; i++)
        sum += p[ind[i]];

    ar = (double)sum / (n / 2);

    printf("%.2f", ar);

    return 0;
}