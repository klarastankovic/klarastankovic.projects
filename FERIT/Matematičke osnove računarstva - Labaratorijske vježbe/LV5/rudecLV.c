#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findDistance( int p[],int i, int n, int c){
    int counter=0;
    for(i =i; p[i]!=c; i++){
            counter++;
    }
    return counter;
}

int main (void){
    int n,i;
    printf("Unesite koliko broje zelite unijeti: ");
    scanf("%d", &n);
    int p[n],c1=0,c2=0,br=0;
    for (i = 0; i<n;i++){
        printf("Unesite %d.broj: ",i+1);
        scanf("%d",&p[i]);
    }

    for ( i = 0; i<n; i++){
        if ( i == 0 || p[i]!=c1 && p[i]!=c2 && c2!=0 &&((findDistance(p,i,n,c1)>findDistance(p,i,n,c2)&& (findDistance(p,i,n,c2)!=0 && findDistance(p,i,n,c1)!=0))  || (findDistance(p,i,n,c1)==0 && findDistance(p,i,n,c2)!=0 )  )){
            c1=p[i];
            br++;
           
        }
        if ( p[i]!=c1 && p[i]!=c2 && ((findDistance(p,i,n,c2)>findDistance(p,i,n,c1) && (findDistance(p,i,n,c2)!=0 && findDistance(p,i,n,c1)!=0)) || (findDistance(p,i,n,c2)==0 && findDistance(p,i,n,c1)!=0 )  )){
            c2 = p[i];
             br++;
          
        }
        
        
       
    }
    printf("\n%d puta je morao promijeniti.",br);
}