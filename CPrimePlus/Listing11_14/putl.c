/* prints a string without adding \n*/
#include<stdio.h>
void putl(const char *string)/* string not altered */
{
	while (*string != '\0')
		putchar(*string++);
}

int main(void) {
	putl("dsfasdfasdfasfasfas");

	getchar();
	return 0;
}