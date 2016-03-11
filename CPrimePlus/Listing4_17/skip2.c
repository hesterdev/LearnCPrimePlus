/* skips over first two integers of input */
#include<stdio.h>

#pragma warning(disable:4996)
int main(void) {
	int n;
	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);
	
	getchar();
	getchar();

	return 0;
}