#include "myheader.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    TOCKA *tocke;
    TROKUT *trokuti;
    
    FILE *fp = fopen("model.txt", "r");
    if(fp == NULL)
        return 1;
        
    fscanf(fp, "%d\n%d\n", &n, &m);
    
    tocke = (TOCKA*) malloc(n * sizeof(TOCKA));
    if(tocke == NULL)
        return 1;
    
    trokuti = (TROKUT*) malloc(m * sizeof(TROKUT));
    if(trokuti == NULL)
        return 1;
    
    unos(fp, tocke, trokuti, n, m);
    fclose(fp);
    
    float max = maxOpseg(trokuti, m);
    printf("REZULTATI:\n");
    printf("%.2f", max);
    
    free(tocke);
    free(trokuti);
    
    return 0;
}