#include <stdio.h>
#include <math.h>

int maint(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (abs(38 - a) > abs(38 - b))
        printf("%d", b);

    else if (abs(38 - a) < abs(38 - b))
        printf("%d", a);

    else
        printf("jednake su udaljenosti");

    return 0;
}