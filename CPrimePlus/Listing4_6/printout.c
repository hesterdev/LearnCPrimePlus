/* printout.c -- use conversion specifiers */
#include<stdio.h>
#define	PI 3.141593
int main(void) {
	int number = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("The %d contestants ate %f berry pies.\n", number, pies);
	printf("The value of pi is %f.\n", PI);

	printf("Farewell! thou art too dear for my possesing,\n");
	printf("%c%d\n", '$', 2 * cost);
	puts("");
	printf("%5.4f\n", 3);

	printf("% d\n", -10);
	getchar();
	return 0;
}