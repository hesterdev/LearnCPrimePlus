#pragma warning(disable:4996)

//#include<stdio.h>
//int main() {
//	FILE *fp = fopen("c:/users/pc/desktop/1.txt", "wb");
//	//int a = 1;
//	double a = 0.0; 
//	
//	fwrite(&a, sizeof(a), 1,fp);
//	fclose(fp);
//
//	puts("Done");
//	getchar();
//}


//#include<stdio.h>  // 为了使用FILE, fgets 等
//#define MAXSIZE 1024
//int main(void) {
//	char buffer[MAXSIZE];// 声明一个足够大的空间来存放内容
//	char *fn = "g:/abc.txt";	// 文件路径
//	FILE *fp = fopen(fn, "r");
//	fgets(buffer, MAXSIZE, fp);
//
//	printf("文件内容是: %s\n", buffer);
//
//	getchar();
//	return 0;
//}

//#include<stdio.h>
//typedef unsigned short bitSet;
//
//bitSet makeBitSet() {
//	bitSet bits = 90;
//	return bits;
//}
//displayBitSet(bitSet bs) {
//	int i;
//	for (i = 0; i < 16; i++) {
//		printf("%d", ((bs & (int)pow(2, (16 - 1))) >> (16 - i)));
//	}
//}
//
//main() {
//	bitSet bits = makeBitSet();
//	displayBitSet(bits);
//
//	getchar();
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdint.h>
//
//#define INTTYPE unsigned short
//#define BITSLEN sizeof INTTYPE
//
//typedef struct {
//	INTTYPE bit : 1;
//}Bit;
//
//typedef union {
//	INTTYPE i;
//	Bit data[16];
//}BitSet;
//
//void printBitSet(BitSet bs) {
//	for (int i = 0; i < 16; i++) {
//		printf("%d", bs.data[i].bit);
//	}
//	puts("");
//}
//int main(void) {
//	unsigned short n = 0xffff;
//	BitSet bs;
//	memcpy(&bs, &n, sizeof n);
//	printBitSet(bs);
//
//	getchar();
//	return 0;
//}



	//#include<stdio.h>
	//#include<string.h>
	//
	//typedef struct {
	//	unsigned short b0 : 1, b1 : 1, b2 : 1, b3 : 1, b4 : 1, b5 : 1, b6 : 1, b7 : 1, b8 : 1, b9 : 1, b10 : 1, b11 : 1, b12 : 1, b13 : 1, b14 : 1, b15 : 1;
	//}stBit;
	//
	//_Bool isBigEndian() {
	//	union {
	//		unsigned short a;
	//		unsigned char b[2];
	//	}n;
	//	n.a = 0xFF00;
	//	return n.b[0] == 0xFF;
	//}
	//
	//void printStBit(stBit s) {
	//	if (isBigEndian()) {
	//		printf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n", s.b0, s.b1, s.b2, s.b3, s.b4, s.b5, s.b6, s.b7, s.b8, s.b9, s.b10, s.b11, s.b12, s.b13, s.b14, s.b15);
	//	}
	//	else {
	//		printf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n", s.b8, s.b9, s.b10, s.b11, s.b12, s.b13, s.b14, s.b15, s.b0, s.b1, s.b2, s.b3, s.b4, s.b5, s.b6, s.b7);
	//	}
	//}
	//
	//int main(void) {
	//	unsigned short n = 90;
	//	stBit  s;
	//	memcpy(&s, &n, sizeof n);
	//	printStBit(s);
	//
	//	getchar();
	//	return 0;
	//}

	//#include<stdio.h>
	//#include<string.h>
	//void split(char*str, char** arr) {
	//	char* str2 = strstr(str, " ");
	//	*str2 = '\0';
	//	str2++;
	//	arr[0] = str;
	//	arr[1] = str2;
	//}
	//int main(void) {
	//	char ex1[20] = "Hello hi";

	//	char*arr[2];
	//	split(ex1, arr);

	//	int choose;
	//	scanf("%d", &choose);
	//	switch (choose) {
	//	case 0:
	//		puts(arr[0]);
	//		break;
	//	case 1:
	//		puts(arr[1]);
	//		break;
	//	}

 // 		return 0;
	//}

//
//#include<stdio.h>
//#include<stdint.h>
//
//typedef uint8_t IMAGE_TYPE[4][8];
//typedef uint8_t(*IMAGE_PTR_TYPE)[8];
//IMAGE_TYPE test1 = { 
//	{ 0,1,2,3,4,5,6,7 },
//	{ 0,1,2,3,4,5,6,7 },
//	{ 0,1,2,3,4,5,6,7 },
//	{ 0,1,2,3,4,5,6,7 } 
//};
//IMAGE_TYPE test2 = { 
//	{ 10,11,12,13,14,15,16,17 },
//	{ 10,11,12,13,14,15,16,17 },
//	{ 10,11,12,13,14,15,16,17 },
//	{ 10,11,12,13,14,15,16,17 } 
//};
//IMAGE_PTR_TYPE test_ptr_array[] = { test1, test2 };
//
//IMAGE_TYPE*ptr[] = { test1,test2 };
//
//unsigned int myVar = 0x00;
//int main() {
//	printHex(myVar);
//}


#include<stdio.h>
int main() {
	//char c;


	//while ((c = getchar()) != EOF) {
	//	putchar(c);
	//}

	//char ch1=getchar();


	char str[81];
	gets(str);
	
	puts(str);
	char ch2=getchar();
	
	return 0;
}