/* escape.c -- use escape characters */

#pragma warning(disable:4996)
#include<stdio.h>
int main(void) {
	//float salary;

	//printf("\aEnter your desired monthly salary:"); /* 1 */
	//printf(" $_______\b\b\b\b\b\b\b");/* 2 */
	//scanf("%f", &salary);
	//printf("\n\t%.2f a month is $%.3f a year.", salary, salary*12.0);
	//printf("\rGee!\n");

	float salary;
	printf("Enter your desired monthly salary: ");
	scanf("%f", &salary);

	getchar();
	getchar();
	return 0;
}