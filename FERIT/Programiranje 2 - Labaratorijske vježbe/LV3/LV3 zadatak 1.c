#include<stdio.h>
int main(){

char *mjeseci[]={ "sijecanj", "veljaca", "ozujak", "travanj", "svibanj", "lipanj", "srpanj", "kolovoz", "rujan", "listopad", "studeni", "prosinac"};
int mjesec;

//Ovdje ide vas kod
scanf("%d", &mjesec);

printf("REZULTATI:\n");
if(mjesec >= 1 && mjesec <= 12)
    printf("%s", mjeseci[mjesec - 1]);
else
    printf("Nekorektan broj mjeseca");

return 0;
}
