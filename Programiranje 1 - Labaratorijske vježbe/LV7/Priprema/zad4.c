#include <stdio.h>
#include <math.h>

double f(double *x, int n)
{
    int i;
    double sum = 0;

    for (i = 1; i < n - 1; i++)
    {
        sum += fabs(i * pow(x[i + 1], 2) - 1);
    }

    return x[1] * sum;
}

int main(void)
{
    double p[10];
    int i;

    for (i = 0; i < 10; i++)
        scanf("%lf", &p[i]);

    printf("%.2f", f(p, 10));

    return 0;
}