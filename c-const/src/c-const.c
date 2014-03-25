/*
 ============================================================================
 Name        : c-const.c
 Author      : tmc9031@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char c7;

int main(void) {
	const char *p1 = "123";
	char * const p2 = "234"; //
	char const *p3 = "345";
	char *p4 = "456";
	static char *p5 = "567";

	static char c6 = '6';
	char s8[10] = "\0";
	char s9[10] = "\0";

//	*p1='a';
//	p2=NULL;
//	*p3='a';

//	p4=0xc0000000;
//	printf("0x%x\n",*p4);

	printf("0x%x\n", &p1);
	printf("0x%x\n", &p2);
	printf("0x%x\n", &p3);
	printf("0x%x\n", &p4);
	printf("0x%x\n", &p5); //low add???
	puts("!!!Hello World!!!");
	printf("0x%x\n", p1);
	printf("0x%x\n", p2);
	printf("0x%x\n", p3);
	printf("0x%x\n", p4);
	printf("0x%x\n", p5);
	puts("!!!Hello World!!!");
	printf("0x%x\n", s8 + 0);
	printf("0x%x\n", s8 + 1);
	printf("0x%x\n", s8 + 2);
	printf("0x%x\n", s9);
	printf("0x%x\n", s9 + 9);
	puts("!!!Hello World!!!");
	printf("0x%x\n", &c6);
	printf("0x%x\n", &c7);
	printf("0x%x\n", &s8);
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	printf("0x%x\n", *s8);
	puts("!!!Hello World!!!");
	return EXIT_SUCCESS;
}

