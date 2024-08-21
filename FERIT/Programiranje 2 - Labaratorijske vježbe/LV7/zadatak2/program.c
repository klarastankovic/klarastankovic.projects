#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *pf = fopen("in.txt", "r");
    if(pf == NULL)
        return 1;
        
    int m, n;
    fscanf(pf, "%d %d", &m, &n);
    fclose(pf);
    
    float **A = (float**) malloc(m * sizeof(float*));
    int i, j;
    for(i = 0; i < m; i++) {
        A[i] = (float*) malloc(n * sizeof(float));
        for(j = 0; j < n; j++) {
            scanf("%f", &A[i][j]);
        }
    }
    
    // for(i = 0; i < m; i++) {
    //     for(j = 0; j < n; j++) {
    //         scanf("%f", &A[i][j]);
    //     }
    // }
    
    
    pf = fopen("out.txt", "w");
    if(pf == NULL)
        return 1;
    
        
    printf("REZULTATI:\n");
    for(i = 0; i < m - 1; i++) {
        for(j = 1; j < n; j++) {
            printf("%.2f\t", A[i][j]);
            fprintf(pf, "%.2f\t", &A[i][j]);
        }
        fprintf(pf, "\n");
        printf("\n");
    }
    
    fclose(pf);
    
    return 0;
}