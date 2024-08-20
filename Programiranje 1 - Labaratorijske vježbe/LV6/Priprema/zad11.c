#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int slucajni(int a, int b)
{
    return rand() % (b - a + 1) + a;
}

int main(void)
{
    srand(time(NULL));

    int x, y, i;

    do
    {
        x = slucajni(-100, 200);
        y = slucajni(-100, 200);
    } while (2 * x > y);

    for (i = 0; i < 100; i++)
        printf("%d  ", slucajni(x, y));

    return 0;
}