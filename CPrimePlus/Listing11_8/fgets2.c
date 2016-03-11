/* using fgets() and fputs() */
#include<stdio.h>
#include<stdbool.h>
#define STLEN 10
int main(void) {
	char words[STLEN];
	puts("Enter strings (empty line to quit: ");
	char *ptr;
	/*while ((ptr = fgets(words, STLEN, stdin)) != NULL && words[0] != '\n')
		fputs(words, stdout);*/
	while (true) {
		ptr = fgets(words, STLEN, stdin);
		if (ptr != NULL) {
			if (words[0] != '\n') {

			}
			else
				break;
		}
		else
			break;
	}
	puts("Done");

	getchar();
	return 0;
}