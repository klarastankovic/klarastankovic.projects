/* U ovoj aktivnosti možete slobodno testirati VPL sustav */
#include<stdio.h>

int main(void) {
    int m;
    
    do {
        scanf("%d", &m);
    } while(m < 4 || m >= 19);
    
    int i, p[m];
    
    for(i = 0; i < m; i++)
        scanf("%d", (p + i));
        
    int *max = p, *min = p;
    
    for(i = 1; i < m; i++) {
        if(*max < *(p + i))
            max = p + i;
        
        if(*min > *(p + i))
            max = p + i;
    }
    
    printf("%d", *max - *min);
    
    return 0;
}