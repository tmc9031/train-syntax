/*
 ============================================================================
 Name        : c_marco.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//compile fail
//#define myprintf(templt, ...) fprintf(stderr, templt, __VA_ARGS__)

//compile ok
#define myprintf(templt, ...) fprintf(stderr, templt, ##__VA_ARGS__)
//#define myprintf(templt, args...) fprintf(stderr, templt, ##args)

#define myprintf0(templt) myprintf(templt)
#define myprintf1(templt, arg1) myprintf(templt, arg1)

int main(void) {
	myprintf1("ARG1=%d\n", 1);
	myprintf0("ARG0\n");

	myprintf("ARG1=%d\n", 1);
	myprintf("ARG0\n");

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
