/*
 ============================================================================
 Name        : c-unsigned.c
 Author      : tmc9031@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int i = 2;
	unsigned char j = i;

	printf("%d", j);

	unsigned int a = 10;
	unsigned int b = 20;
	int c = 0;

	c = (a - b) * 2;

	//c = (a - b);
	//c /= 2;
	//c =- 5;

	c = (a - b) / 2;
	//c = 2147483643 ???

	printf("%d\n", c);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
