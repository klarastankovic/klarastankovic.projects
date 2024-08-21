#include <stdio.h>

int razlika(int x)
{
    int max = 0, min = 9, z;

    while (x != 0)
    {
        z = x % 10;

        if (z < min)
            min = z;

        if (z > max)
            max = z;

        x = x / 10;
    }

    return max - min;
}

int main(void)
{
    int x = 26931;

    printf("%d", razlika(x));

    return 0;
}