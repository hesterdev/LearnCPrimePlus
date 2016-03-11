/* converts a shoe size to inches */
#include<stdio.h>
#define ADJUST 7.31 // one kind of symbolic constant
int main(void) {
	const double SCALE = 0.333; // another
	double shoe, foot;

	shoe = 9.0;
	foot = SCALE*shoe + ADJUST;
	printf("Shoe size (men's) foot length\n");
	printf("%10.1f %15.2f inches\n", shoe, foot);

	getchar();
	return 0;
}