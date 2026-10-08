#include <stdio.h>

int main () {
	int a = 4;
	int b = 7;
	int tempo;
	tempo = a;
	a = b;
	b = tempo;
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
