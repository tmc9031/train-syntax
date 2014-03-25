/*
 ============================================================================
 Name        : c-point.c
 Author      : tmc9031@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int func(void *pValue) {
	printf("<%d> 0x%x\n", __LINE__, pValue); //is 0xa
	printf("<%d> %d\n", __LINE__, (int) pValue); //is 10

	puts("!!!func!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

int (*pFunc)(void *);

int main(void) {
	int iValue = 10;

	pFunc = func;
	(*pFunc)((void *) iValue);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
