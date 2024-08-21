#include <stdio.h>

int main(void)
{
    int i, n;

    scanf("%d", &n);

    if (n % 3 == 2)
        printf("%d", n / 3 * 6 + 3);
    
    else if (n % 3 == 1)
        printf("%d", n / 3 * 6 + 1);
    
    else
        printf("%d", n / 3 * 6);

    return 0;
}
