#include <stdio.h>

int main() {

	int N;
	int sum = 0;
	int i = 1;
	printf("Enter a number: \n");
	scanf("%d", &N);

	while (i <= N) {
		sum = sum + i;
		i++;
	}


		printf("%d\n", sum);

	return 0;
}

