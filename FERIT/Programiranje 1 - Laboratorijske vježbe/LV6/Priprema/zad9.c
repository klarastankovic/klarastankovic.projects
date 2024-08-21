#include <stdio.h>

int zbroj(int x)
{
    int sum;

    do
    {
        sum = 0;

        if (x < 0)
            x = -x;

        while (x != 0)
        {
            sum += x % 10;
            x /= 10;
        }

        x = sum;
    } while (sum > 10);

    return sum;
}

int main(void)
{
    int x = 579859;

    printf("%d", zbroj(x));

    return 0;
}