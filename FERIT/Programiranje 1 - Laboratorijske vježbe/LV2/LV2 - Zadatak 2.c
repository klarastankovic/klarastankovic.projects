/* U ovoj aktivnosti možete slobodno testirati VPL sustav */
#include <stdio.h>

int main(void) {
    int e, f, g, h;
    const int a = 1000;
    const float b = 10.5;
    const double c = 2,F;
    const char d = 'A';
    
    e = sizeof(a);
    f = sizeof(b);
    g = sizeof(c);
    h = sizeof(d);
    
    printf("Memorija u bajtima:\n");
    printf("%d %d %d %d", e, f, g, h);
    
    return 0;
}