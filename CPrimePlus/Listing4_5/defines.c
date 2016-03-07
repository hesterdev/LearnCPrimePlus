// defines.c -- uses defined constants from limit.h and float.h
#include<stdio.h>
#include<limits.h> // integer limits
#include<float.h>  // floating-point limits
int main(void) {
	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MAX);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);

	puts("");
	puts("");

	double a = 1.6;
	printf("%A\n", a);

	int b = 16;
	printf("%p\n", &b);
	getchar();
	return 0;
}