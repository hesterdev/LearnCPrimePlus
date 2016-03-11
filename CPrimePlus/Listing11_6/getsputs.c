/* using gets() and puts() */
#include<stdio.h>
#define STLEN 5
int main(void) {
	char words[STLEN];

	puts("Enter a string,please.");
	//gets(words);

	fgets(words, STLEN, stdin);


	printf("Your string twice:\n");
	printf("%s\n", words);
	puts(words);
	puts("Done");
	fputs(words, stdout);
	char ch=getchar();
	return 0;
}