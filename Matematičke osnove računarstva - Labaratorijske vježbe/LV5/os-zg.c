#include <stdio.h>
#include <math.h>

int main()
{
    int a1, a2, b1, b2, c1, c2, h, m;

    scanf("%d %d %d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2, &h, &m);

    if (abs(h * 60 + m - (a1 * 60 + a2)) < abs(h * 60 + m - (b1 * 60 + b2)) && abs(h * 60 + m - (a1 * 60 + a2)) < abs(h * 60 + m - (c1 * 60 + c2)))
        printf("%d %d", a1, a2);

    else if (abs(h * 60 + m - (a1 * 60 + a2)) > abs(h * 60 + m - (b1 * 60 + b2)) && abs(h * 60 + m - (b1 * 60 + b2)) < abs(h * 60 + m - (c1 * 60 + c2)))
        printf("%d %d", b1, b2);

    else if (abs(h * 60 + m - (c1 * 60 + c2)) < abs(h * 60 + m - (b1 * 60 + b2)) && abs(h * 60 + m - (a1 * 60 + a2)) > abs(h * 60 + m - (c1 * 60 + c2)))
        printf("%d %d", c1, c2);

    else
        printf("");

    return 0;
}
