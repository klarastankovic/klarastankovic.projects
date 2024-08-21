#include <stdio.h>
#include <stdlib.h>

int** allocateMatrix(int n, int m) {
    int i;
    int** M = NULL;
    
    M = (int**)malloc(n * sizeof(int*));
    if(M == NULL)
        return NULL;
        
    for(i = 0; i < n; i++) {
        M[i] = (int*)malloc(m * sizeof(int));
        
        if(M[i] == NULL)
            return NULL;
    }
    
    return M;
}

void inputMatrix(int** M, int n, int m) {
    int i, j;
    
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d", (*(M + i) + j));
}

void printMatrix(int** M, int n, int m) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++)
            printf("%d\t", M[i][j]);
        printf("\n");
    }
}

int matrixTimesK(int** M, int n, int m, int K) {
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            M[i][j] = K * M[i][j];
}