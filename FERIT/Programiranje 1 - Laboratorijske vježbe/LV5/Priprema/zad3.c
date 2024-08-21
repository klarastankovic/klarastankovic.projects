#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int loto[7], i, x, j;
    
    srand(time(NULL));
    
    printf("Izvuceni brojevi:\n");
    for(i = 0; i < 7; i++) {
        x = rand() % 49 + 1;
            
        j = 0;
        while(j != i) {
            if(loto[j] != x) {
                 loto[i] = x;
                 j++;
            }
            
            else {
                x = rand() % 49 + 1;
                j = 0;
            }
        }
        
        printf("%d ", x);
    }
    
    return 0;
}
