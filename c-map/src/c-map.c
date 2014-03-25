/*
 ============================================================================
 Name        : c-map.c
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
	char * dev_name = NULL;
	char *p = NULL;

	p = malloc(100);
	bzero(p, 100);

	dev_name = "/dev/video0";
//	*dev_name = '-';

	printf("%x\n", dev_name);	//global
	printf("%x\n", &dev_name);	//stack

	printf("%x\n", p);		//heap
	printf("%x\n", &p);		//stack

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
