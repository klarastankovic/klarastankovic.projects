#include <stdio.h>

int main(void)
{
    int br;

    scanf("%d", &br);

    int *p = &br;

    printf("%d  %p", *p, p);

    if (*p > 0)
        *p *= 2;
    else
        *p /= 2;

    printf("%d  %p", *p, p);

    return 0;
}