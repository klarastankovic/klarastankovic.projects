/* U ovoj aktivnosti možete slobodno testirati VPL sustav */
#include<stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    
    int *p = &x;
    printf("%d %p\n", *p, p);
    
    if(*p > 0)
        *p *= 2;
    
    else
        *p /= 2;
    
    printf("%d %p", *p, p);
    
    return 0;
}