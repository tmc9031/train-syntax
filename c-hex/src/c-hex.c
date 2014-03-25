/*
 ============================================================================
 Name        : c-hex.c
 Author      : tmc9031@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num = -(float) 64 / (float) 10;
	printf("%f\n", num);

	//16-num to char
	unsigned char hex = 0xef;
	printf("%02x\n", hex);

	unsigned char hex2[13];	//Q:10+3 ??? A:4B sscanf one time
	unsigned char hex3[30] = "0e38007456385638576f";

	//16-string to buffer
	int i = 0;
	for (i = 0; i < 10; i++) {
		sscanf(hex3 + i * 2, "%02x", &hex2[i]);		//%x means 4B int type
//		sprintf(&hex2[i], "%02x", hex3[i*2]);	//nouse
	}
	for (i = 0; i < 10; i++) {
		printf("%02x", hex2[i]);
	}
	printf("\n");

	//str to str
	sprintf(hex2, "%02x", 0x0f);	//h[0]='0' h[1]='f'
	//16-num to char
	hex2[2] = 0x44;
	hex2[3] = 0xb6;
	for (i = 0; i < 10; i++) {
		printf("%02x", hex2[i]);
	}
	printf("\n");

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
