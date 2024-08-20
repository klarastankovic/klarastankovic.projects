#include <stdio.h>
#include <math.h>

double f(double *x, int n)
{
    int i;
    double sum = 0;

    for (i = 2; i < n - 1; i++)
        sum += fabs(x[i - 1] - pow(x[i + 1], 2) + pow(x[i], 3));

    return (double)1 / n * sum;
}

int main(void)
{
    double x[10];
    int i;

    for (i = 0; i < 10; i++)
        scanf("%lf", &x[i]);

    printf("%.2f", f(x, 10));

    return 0;
}