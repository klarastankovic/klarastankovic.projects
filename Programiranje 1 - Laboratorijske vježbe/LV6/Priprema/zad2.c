#include <stdio.h>
#include <math.h>

double trokut(double a, double b, double c)
{
    if (a + b > c && b + c > a && a + c > b)
        return 1;
    else
        return 0;
}

double povrsina(double a, double b, double c)
{
    double s, p;
    int k;

    k = trokut(a, b, c);

    if (k == 1)
    {
        s = (a + b + c) / 2;
        p = sqrt(s * (s - a) * (s - b) * (s - c));

        return p;
    }

    else
        return 0;
}

int main(void)
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("%.2f", povrsina(a, b, c));

    return 0;
}