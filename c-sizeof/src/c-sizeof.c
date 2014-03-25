/*
 ============================================================================
 Name        : c-sizeof.c
 Author      : tmc9031@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char string[6] = "\0";
	char *pstring[6];

	printf("%d\n", sizeof(string));	//res=6
	printf("%d\n", sizeof(pstring));	//res=24

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
