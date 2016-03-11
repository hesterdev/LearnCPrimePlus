
#pragma warning(disable:4996)
// when to use &
#include<stdio.h>
int main(void) {
	//int age; //variable
	//float assets;
	//char pet[30];

	//printf("Enter your age, assets, and favorite pet.\n");
	//scanf("%d %f", &age, &assets);// use the & here
	//scanf("%s", pet);	// no & for char array
	//printf("%d $%.2f %s\n", age, assets, pet);

	int a;
	scanf("%x", &a);

	printf("%d\n", a);

	getchar();
	getchar();
	return 0;
}