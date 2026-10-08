#include <stdio.h>

int main () {
	int num;
	printf("Enter a number \n");
	scanf("%d", &num);
	
	int lastdig = num % 10;

	printf("The last digit of the given number is %d \n", lastdig);
	return 0;
}

