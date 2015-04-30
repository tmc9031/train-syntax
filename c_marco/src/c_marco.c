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
#include <stdarg.h>

void va_log(const char *msg, ...)
{
	va_list vap;
	char string[100];
	va_start(vap, msg);
	vsprintf(string, msg, vap);
//	printf(msg, vap); //NOTE: NOT support va_list
	va_end(vap);
	printf("%s", string);
}

//compile fail
//#define myprintf(templt, ...) fprintf(stderr, templt, __VA_ARGS__)

//compile ok
#define myprintf(templt, ...) fprintf(stderr, templt, ##__VA_ARGS__)
//#define myprintf(templt, args...) fprintf(stderr, templt, ##args)

#define myprintf0(templt) myprintf(templt)
#define myprintf1(templt, arg1) myprintf(templt, arg1)

//va_list + marco
#define myvprintf(templt, ...) va_log("<%s:%d> " templt, __func__, __LINE__, ##__VA_ARGS__)

int main(void) {
	myprintf1("ARG1=%d\n", 1);
	myprintf0("ARG0\n");

	myprintf("ARG1=%d\n", 1);
	myprintf("ARG0\n");

	fflush(stderr);

	va_log("va_log() %d %f\n", 3, 3.3);
	myvprintf("myvprintf() %d %f\n", 3, 3.3);
	myvprintf("myvprintf() ARG0\n");

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
