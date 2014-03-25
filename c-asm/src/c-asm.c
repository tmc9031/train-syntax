/*
 ============================================================================
 Name        : c-asm.c
 Author      : tmc9031@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//register int a __asm("eax");
	//register int b __asm("ebx");
	int a = 1;
	int b = 2;
	int c = 1;
	int d = 2;
	int e = 1;
	int f = 2;
	printf("a=%d b=%d\n", a, b);

	__asm volatile("nop");
	__asm volatile
	("add %3,%0\n\t"
			"add %4,%1\n\t"
			"add %5,%2\n\t"
			:"+r"(a),"+r"(c),"+r"(e)
			:"r"(b),"r"(d),"r"(f)
	);
	__asm volatile("nop");

	printf("a=%d b=%d\n", a, b);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
