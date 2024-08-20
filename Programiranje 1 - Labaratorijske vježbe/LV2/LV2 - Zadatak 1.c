/* U ovoj aktivnosti možete slobodno testirati VPL sustav */
#include <stdio.h>
#include <math.h>


int main(void) {
    double x, a;
    int y;
    
    printf("Unesite 2 realna broja:\n");
    scanf("%lf %lf", &x, &a);

    y = x > -a && x < a;
    
    printf("Je li broj unutar intervala?\n%d", y);
    
    return 0;
}