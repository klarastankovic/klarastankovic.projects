#include <stdio.h>

int binarni(int x)
{
    int b = 0, f = 1;

    while (x != 0)
    {
        b += (x % 2) * f;
        x /= 2;
        f *= 10;
    }

    return b;
}

int main(void)
{
    int x;

    do
    {
        scanf("%d", &x);
    } while (x < 1 || x > 128);

    printf("%d", binarni(x));

    return 0;
}