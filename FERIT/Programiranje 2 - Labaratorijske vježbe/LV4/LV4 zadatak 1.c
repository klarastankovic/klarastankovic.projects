#include <stdio.h>
#include <math.h>

typedef struct tocka {
    int x;
    int y;
    int z;
} TOCKA;

typedef struct trokut {
    TOCKA *t1;
    TOCKA *t2;
    TOCKA *t3;
} TROKUT;

double razlika(int a, int b) {
    return b - a;
}

double udaljenost(TOCKA *a, TOCKA *b) {
    int dx = razlika(a->x, b->x);
    int dy = razlika(a->y, b->y);
    int dz = razlika(a->z, b->z);
    
    return sqrt(pow(dx, 2) + pow(dy, 2) + pow(dz, 2));
}

double opseg(TROKUT *t) {
    double a = udaljenost(t->t2, t->t3);
    double b = udaljenost(t->t1, t->t3);
    double c = udaljenost(t->t1, t->t2);
    
    double s = a + b + c;
    return s;
}

int main(void) {
    int n, m;
    
    scanf("%d %d", &n, &m);
    
    TOCKA tocke[10];
    TROKUT trokuti[10];
    
    int i;
    for(i = 0; i < n; i++)
        scanf("%d %d %d", &tocke[i].x, &tocke[i].y, &tocke[i].z);
        
    for(i = 0; i < m; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        
        trokuti[i].t1 = &tocke[a];
        trokuti[i].t2 = &tocke[b];
        trokuti[i].t3 = &tocke[c];
    }
    
    double maxOpseg = opseg(&trokuti[0]);
    for(i = 0; i < m; i++)
        if(maxOpseg < opseg(&trokuti[i]))
            maxOpseg = opseg(&trokuti[i]);

    printf("REZULTATI:\n");
    printf("%.2f\n", maxOpseg);
    
    return 0;
}