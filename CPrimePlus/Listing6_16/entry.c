/* entry condition loop */
#pragma warning(disable:4996)
#include<stdio.h>
int main(void) {
	const int secret_code = 13;
	int code_entered;

	printf("To enter the triskaidekaphobia therapy club,\n");
	printf("please enter the secret code number: ");
	scanf("%d", &code_entered);
	while (code_entered != secret_code) {
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);
	}
	
	printf("Congratulations! You are cured!\n");

	getchar();
	getchar();
	return 0;

}