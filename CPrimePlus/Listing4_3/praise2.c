#pragma warning(disable:4996)

/* praise2.c */
// try the %u or %lu specifiers if your implementation
// does not recognize the %zd specifier
#include<stdio.h>
#include<string.h> /* provides strlen() prototype */
#define PRAISE "You are an extraordinary being."
int main(void) {
	char name[40];

	printf("What's your name?");
	scanf("%s", name);
	printf("Hello, %s. %s \n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",
		strlen(name), sizeof name);
	printf("The phrase of praise has %zd letters ", strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);

	char str[23223];
	gets(str);
	getchar();
	getchar();
	
	return 0;
		
}
