/*
 ============================================================================
 Name        : c-sort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
#if 1
	int a[10] = { 2, 1, 3, 5, 7, 8, 9, 4, 3, 5 };

	int i, j;
	int t;

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (a[j] > a[j + 1]) { //1 2 3 3 4 5 5 7 8 9
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
#else

	int a[10] = {2, 1, 3, 5, 7, 8, 9, 4, 3, 5};

	int i, j, k;
	int t;

	for (i = 0; i < 9; i++) {
		k = i;
		for (j = i + 1; j < 10; j++) {
			if (a[j] > a[k]) { //9 8 7 5 5 4 3 3 2 1
				k = j;
			}
		}
		if (k != i) {
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
#endif

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
