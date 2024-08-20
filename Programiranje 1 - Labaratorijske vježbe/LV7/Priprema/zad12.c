#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void f(float *x, int n)
{
    srand((unsigned)time(NULL));

    int i;

    for (i = 0; i < n; i++)
    {
        do
        {
            x[i] = ((float)rand() / RAND_MAX) * 4 * n - 2 * n;
        } while (x[i] < -n || x[i] > 0);
    }
}

int main(void)
{
    float *s;

    s = (float *)malloc(800 * sizeof(float));

    f(s, 800);

    int i;

    for (i = 0; i < 800; i++)
        printf("%.2f", *(s + i));

    return 0;
}