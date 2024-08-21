#include <stdio.h>

int faktorijel(int x)
{
    if (x == 0 || x == 1)
        return 1;
    else
        return x * faktorijel(x - 1);
}

int zbroj(int x)
{
    int sum = 0, z;

    if (x < 0)
        x = -x;

    while (x != 0)
    {
        z = x % 10;
        sum += faktorijel(z);
        x /= 10;
    }

    return sum;
}

int main(void)
{
    int x = 123, y = -321;

    printf("%d  %d", zbroj(x), zbroj(y));

    return 0;
}