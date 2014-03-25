/*
 ============================================================================
 Name        : c-byte.c
 Author      : tmc9031@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int iInt;
	printf("%x\n", &iInt);
	printf("%x\n", &iInt + 1);

	char cChar[3] = { 0x03, 0x10, 0x3d };
	char temp[2] = { 0x10, 0x00 };
	int i;
	for (i = 0; i < 3; i++) {
		if (cChar[i] < 0x10)
			sprintf(temp, "0%X", cChar[i]);
		else
			sprintf(temp, "%X", cChar[i]);
		printf("%s\n", temp);
	}

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
