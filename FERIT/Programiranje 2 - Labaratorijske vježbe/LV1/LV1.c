#include <stdio.h>

int main(void)
{
    int broj;
    
    printf("Unesite cijeli broj: ");
    scanf("%d", &broj);
    
    int bin[32], i, predznak = 1;
    
    if(broj < 0)
    {
        predznak = -1;
    }
    
    int pom = broj * predznak;
    
    for(i = 31; i >= 0; i--)
    {
        bin[i] = pom % 2;
        pom /= 2;
    }
    
    int prvaJedinica = 1;
    if(predznak < 0)
    {
        for(i = 31; i >= 0; i--)
        {
            if(prvaJedinica == 1)
            {
                if(bin[i] == 0)
                    bin[i] = 1;
                else
                    bin[i] = 0;
            }
            
            if(bin[0] == 1)
                prvaJedinica = 1;
        }
    }
    
    printf("Binarni zapis: ");
    for(i = 0; i < 32; i++)
        printf("%d", bin[i]);
    
    return 0;
}