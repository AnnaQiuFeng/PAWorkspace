#include <stdio.h>

int main () {
	int num;
	printf("Please enter a number \n");
	scanf("%d", &num);

	if (num % 3 == 0 && num % 5 == 0) {
		printf("The number is both divided by 3 and 5\n");
	} else {
		printf("The number is not divided by 3 and 5\n");
	}
	return 0;
}
