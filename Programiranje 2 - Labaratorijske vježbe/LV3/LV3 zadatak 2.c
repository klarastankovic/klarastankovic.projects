#include<stdio.h>
#include<stdlib.h>
int najveci (int **a, int n, int m);

int main(){
        // a je matrica, m i n su dimenzije matrice
        int **a, m, n;
        
        // zbog testinih slucajeva potrebno je prvo unijeti velicinu n, a tek zatim m
        do{
            //upis i provjera scanf-a za n
            scanf("%d", &n);
        }while(n < 2 || n > 5);//uvjeti za n
        do{
            //upis i provjera scanf-a za m
            scanf("%d", &m);
        }while(m < 2 || m > 8);//uvjeti za m
        
        //ovdje ide vas kod za upis dimenzija matrice i elemenata u matricu
        //pogledajte primjer 3 u LV
        a = (int** )malloc(n * sizeof(int*));
        
        if(a == NULL)
            return 0;
            
        for(int i = 0; i < n; i++) {
            *(a + i) = (int*)malloc(m * sizeof(int));
            
            if(*(a + i) == NULL)
                return 0;
        }
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                scanf("%d", (*(a + i) + j));
        
        //Ispis rezultata
        printf("\nREZULTATI:\n");
        printf("%d", najveci (a,n,m));
        return 0;
        
        for(int i = 0; i < n; i++)
            free(*(a + i));
        
        free(a);
        a = NULL;
}
int najveci (int **a, int n, int m){
        //ova funkcija treba vratiti vrijednost najveceg elementa u predanoj matrici
       //ovdje ide vas kod
       int max = a[0][0];
       
       for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(max < *(*(a + i) + j))
                max = *(*(a + i) + j);
        
        return max;
}
