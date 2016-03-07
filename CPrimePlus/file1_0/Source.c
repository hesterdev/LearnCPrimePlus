#pragma warning(disable:4996)

#include<stdio.h>
int main() {
	FILE *fp = fopen("c:/users/pc/desktop/1.txt", "wb");
	//int a = 1;
	double a = 1.0;
	
	fwrite(&a, sizeof(a), 1,fp);
	fclose(fp);

	puts("Done");
	getchar();
}

