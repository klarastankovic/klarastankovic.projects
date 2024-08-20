//Napisite program koji ce za uneseni broj n i unesenih n duzina na brojevnom pravcu ispisati koliko od tih duzina nema dodir niti s jednom od preostalih duzina. 
//Duzine se unose kao ne parova brojaeva (pi, ki) gdje su pi i  ki pocetak i kraj i-te duzine, pi < ki, i = 1,2,...,n na brojevnom pravcu. n je najvise 100

#include <stdio.h>

int main(void) {
	int n, i, j, br, s = 0;
	
	scanf("%d", &n);
	
	int p[n], k[n];
	
	for(i = 0; i < n; i++) {
		scanf("%d %d", &p[i], &k[i]);
	}
	
	for(i = 0; i < n; i++) {
		br = 0;
		for(j = i; j < n; j++) {
			if(p[i] <= p[j] && p[j] <= k[i] || p[i] <= k[j] && k[j] <= k[i])
				br++;
		}
		if(br == 0)
			s++;
	}
	
	printf("%d", s);
	return 0;
}
