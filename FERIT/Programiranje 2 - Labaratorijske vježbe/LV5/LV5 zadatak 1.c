

#include <stdio.h>
#include <math.h>


typedef struct tocka {
    float x;
    float y;
    float z;
} Tocka;
typedef struct trokut {
    struct tocka *t1;
    struct tocka *t2;
    struct tocka *t3;
} Trokut;

void unesiTocke(Tocka*, int);
void unesiTrokute(Trokut*, Tocka*, int);
float pronadjiNajveciOpseg(Trokut* , int );

/* Ukoliko koristite dodatne funkcije mozete ih navesti nakon ovog komentara */
float razlika(int, int);
float udaljenost(Tocka*, Tocka*);
float opseg(Trokut*);

int main(void)
{
  int n, m;
  Tocka tocke[100];
  Trokut trokuti[100];
  float opseg;

  printf("Upisi broj tocaka koje zelis unijeti: ");
  scanf("%d", &n);

  printf("Upisi broj trokuta koje zelis unijeti: ");
  scanf("%d", &m);

  unesiTocke(tocke, n);
  unesiTrokute(trokuti, tocke, m);

  opseg = pronadjiNajveciOpseg(trokuti, m);

  printf("REZULTATI:\n");
  printf("%.2f", opseg);

	return 0;
}

//ovdje pisete implementaciju potrebnih funkcija. 
void unesiTocke(Tocka* tocke, int n) {
    int i;
    
    for(i = 0; i < n; i++)
        scanf("%f%f%f", &tocke[i].x, &tocke[i].y, &tocke[i].z);
}

void unesiTrokute(Trokut* trokuti, Tocka* tocke, int m) {
    int i;
    int a, b, c;
    
    for(i = 0; i < m; i++) {
        scanf("%d%d%d", &a, &b, &c);
        
        trokuti[i].t1 = &tocke[a];
        trokuti[i].t2 = &tocke[b];
        trokuti[i].t3 = &tocke[c];
    }
}

float razlika(int a, int b) {
    return b - a;
}

float udaljenost(Tocka *a, Tocka *b) {
    float dx = razlika(a->x, b->x);
    float dy = razlika(a->y, b->y);
    float dz = razlika(a->z, b->z);
    
    return sqrt(pow(dx, 2) + pow(dy, 2) + pow(dz, 2));
}

float opseg(Trokut *t) {
    float a = udaljenost((t->t2), (t->t3));
    float b = udaljenost((t->t1), (t->t3));
    float c = udaljenost((t->t1), (t->t2));
    
    return a + b + c;
}

float pronadjiNajveciOpseg(Trokut* trokuti, int m) {
    float maxOpseg = opseg(&trokuti[0]);
    
    int i;
    for(i = 0; i < m; i++) {
        if(maxOpseg < opseg(&trokuti[i]))
            maxOpseg = opseg(&trokuti[i]);
    }
    
    return maxOpseg;
}