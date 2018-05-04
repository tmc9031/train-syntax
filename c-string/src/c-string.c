/*
 ============================================================================
 Name        : c-string.c
 Author      : tmc9031@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define STRING "1"

int main(void) {

	unsigned int buf[10] = {0x34, 0x45, 0x56};
	char str[30];

	memset(str, 0, sizeof(str));
	int i=0;
	for(i=0; i<10; i++)
	{
		sprintf(str, "%s%02x ", str, buf[i]);
	}
	puts(str);

	printf("<%d> %d\n", __LINE__, sizeof(STRING)); //is 2, because include \0

	char cstr[100] = "123";
	char *str_p = NULL;
	str_p = strtok(str, ",");

	printf("<%d> 0x%x\n", __LINE__, (unsigned int) str_p);
	puts(str_p);

	char lacrac[100] = "23..24";
	char *lacrac_p = NULL;
	printf("<%d> 0x%x\n", __LINE__, strstr(lacrac, "...")); //return NULL
	printf("<%d> %s\n", __LINE__, strstr(lacrac, "..") + 2);

	srand(time(NULL));
	printf("<%d> %d\n", __LINE__, rand() % (24 - 23 + 1) + 23);

	char string[10];
	snprintf(string, 10, "%s", "0123456789");
	printf("<%d> %s\n", __LINE__, string);

//	char com[64] = "123,4356,2134";
	char com[64] = ",,,";
	printf("<%d> %s\n", __LINE__, strtok(com, ","));
	printf("<%d> %s\n", __LINE__, strtok(NULL, ","));
	printf("<%d> %s\n", __LINE__, strtok(NULL, ","));
	printf("<%d> %s\n", __LINE__, strtok(NULL, ","));

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
