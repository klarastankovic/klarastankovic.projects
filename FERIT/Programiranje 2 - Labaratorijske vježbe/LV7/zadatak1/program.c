//Datoteka Dat.txt iz koje cete citati vec je stvorena, ali njen sadrzaj
//nemojte mijenjati, inace nece proci testcaseovi

#include <stdio.h>

int main(void) {
    char ime[50] = "", prezime[50] = "";
    
    FILE *pf = fopen("Dat.txt", "r");
    if(pf == NULL)
        return 1;
        
    int b;
    fscanf(pf, "%d", &b);
    
    fclose(pf);
    pf = fopen("Studenti.txt", "w");
    if(pf == NULL)
        return 1;
        
    int i;
    printf("REZULTATI:\n");
    for(i = 0; i < b; i++) {
        scanf(" %s %s", ime, prezime);
        printf("%s %s\n", ime, prezime);
        fprintf(pf, "%s %s\n", ime, prezime);
    }
        

    
    fclose(pf);
    
    return 0;
}