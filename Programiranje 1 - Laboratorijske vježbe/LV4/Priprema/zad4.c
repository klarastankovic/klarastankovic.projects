#include <stdio.h>

int main() {
	int A[3][4], B[3][4], i, j;
	
	printf("Unesite elemente matrice A dimenzija 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matrica B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 3; j >= 0; j--) {
            B[i][j] = A[i][j];
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}
