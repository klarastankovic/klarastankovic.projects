#include <stdio.h>

double arsr(int x)
{
    int sum = 0, k = 0, i;
    float ar;

    for (i = 1; i <= x; i++)
        if (x % i == 0)
        {
            sum += i;
            k++;
        }

    ar = sum / k;

    return ar;
}

int main()
{
    int x;

    scanf("%d", &x);
    if (x < 0)
        x = -x;

    printf("%.2f", arsr(x));

    return 0;
}