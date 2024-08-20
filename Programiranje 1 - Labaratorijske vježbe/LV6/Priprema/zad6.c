#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fun(double a, double b, double c)
{
    double y;

    y = pow(a, 3) - (double) (a * c) / (abs(b) + pow(10, -3)) + 5 * pow(c, 2);

    return y;
}

int main(void)
{
    double x1 = 1.2, x2 = -4.1, x3 = 2.825;

    printf("%lf", fun(x1, x2, x3));

    return 0;
}