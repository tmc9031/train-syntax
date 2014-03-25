/*
 ============================================================================
 Name        : c-printf.c
 Author      : tmc9031@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char a = '\70';
//	unsigned short a=32768;
	printf("a=%c\n", a);

	char b = 0xfe;
	int c = b;
	printf("c=%d\n", c);

	char b2[2] = { 0xfe, 0xff };
	int c2 = 0;
	memcpy(&c2, &b2, 2);
	printf("c2=%d\n", c2);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
