#include <stdio.h>

int main() {

	int n;
	int i =1;
	int mltp;
	printf("Enter a number: \n");
	scanf("%d", &n);

	while (i <= 10) {
	       mltp = n * i;
	       printf("%d * %d = %d\n", n, i, mltp);
	       i++;
	}

	return 0;
}

