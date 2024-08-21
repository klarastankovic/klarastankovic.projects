/* U ovoj aktivnosti možete slobodno testirati VPL sustav */
#include<stdio.h>

int funkcija(int x) {
    int max = x % 10, min = x % 10, z;
    
    while(x != 0) {
        z = x % 10;
        
        if(z > max) max = z;
        if(z < min) min = z;
        
        x /= 10;
    }
    
    return max - min;
}

int main(void) {
    printf("Razlika najvece i najmanje znamenke: %d", funkcija(26931));
    
    return 0;
}