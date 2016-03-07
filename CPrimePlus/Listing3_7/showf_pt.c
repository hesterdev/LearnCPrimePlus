/* showf_pt.c -- displays float value in two ways */
#include<stdio.h>
//int main(void) {
//	float aboat = 32000.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//
//	printf("%f can be written %e\n", aboat, aboat);
//	// next line requires C99 or later compliance
//	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
//	printf("%f can be written %e\n", abet, abet);
//	printf("%Lf can be written %Le\n", dip, dip);
//
//
//	printf("\n\n");
//
//	float toobig = 3.4E38*100.0f;
//	printf("%e\n", toobig);
//	getchar();
//	return 0;
//}

#include<complex.h>
int main(void) {

	//I
	//_COMPLEX
	float a, b;
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f\n", a);

	getchar();
}