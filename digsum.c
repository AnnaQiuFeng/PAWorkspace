#include <stdio.h>

int main() {
	int num;
	printf("Please enter a 3-digit number \n");
	scanf("%d", &num);

	int a = num / 100;
	int b = num % 100;
       	b = b / 10;
	int c = num % 10;
	int sum = a + b + c;
	
	printf("Sum of the digits is %d \n", sum);
	
	return 0;
}
