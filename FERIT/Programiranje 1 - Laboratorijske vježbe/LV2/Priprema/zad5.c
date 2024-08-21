#include <stdio.h>

int main(void) {
	const int a = 1000;
	const double b = 10.5;
	const float c = '2f';
	const char d = 'A';
	
	printf("Memorija u B:\n1000 -> %d\n10.5 -> %d\n2F -> %d\n'A' -> %d", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
	
	return 0;
}
