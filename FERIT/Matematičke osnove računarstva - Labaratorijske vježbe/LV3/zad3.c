//setaci se trebaju naci u jednoj tocki -> primjeri na papiru

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

float median(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);
	
    if (n % 2 == 0) {
        return (float)(arr[n/2 - 1] + arr[n/2]) / 2.0;
    }
    
    else {
        return arr[n/2];
    }
}

int main() {
	int n, i;
	float m;
	
	printf("Unesite broj setaca:\n");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("\nUnesite koordinate svih setaca:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\nTocka susreta: ");
    if (n == 2) {
    	for (i = arr[0]; i <= arr[1]; i++) {
    		printf("%d ", i);
		}
	}
	
	else {
		m = median(arr, n);
    	printf("%.0f", m);
	}
    
	return 0;
}
