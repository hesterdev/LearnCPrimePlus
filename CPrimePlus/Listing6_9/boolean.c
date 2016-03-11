/* using a _Bool variable*/
#pragma warning(disable:4996)
#include<stdio.h>
int main(void) {
	long num;
	long sum = 0L;
	_Bool input_is_good;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	int n = scanf("%ld", &num);
	input_is_good = (n == 1);
	while (input_is_good) {
		sum += num;
		printf("Please enter next integer (q to quit): ");
		input_is_good = (scanf("%ld", &num) == 1);
	}
	printf("Those integers sum to %ld.\n", sum);

	char ch=getchar();
	char ch2=getchar();
	getchar();
	return 0;
}