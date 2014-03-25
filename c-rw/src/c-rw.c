/*
 ============================================================================
 Name        : c-rw.c
 Author      : tmc9031@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 512

int my_read(int fd, void *buf, size_t len) {
	size_t cc, total = 0;

	while (len > 0) {
		if ((cc = read(fd, (char *) buf, len)) < 0) {
			if (errno == EINTR) {
				continue;
			}
			return cc;
		}
		if (cc == 0) {
			break;
		}
		buf = (char *) (buf) + cc;
		total += cc;
		len -= cc;
	}
	return total;
}

int my_write(int fd, void *buf, size_t len) {
	size_t cc, total = 0;

	while (len > 0) {
		if ((cc = write(fd, (char *) buf, len)) < 0) {
			if (errno == EINTR) {
				continue;
			}
			return cc;
		}
		buf = (char *) buf + cc;
		total += cc;
		len -= cc;
	}
	return total;
}

int main(void) {
	char buffer[BUFFER_SIZE]; //字符串指针
	int ret = 0;
	while (1) {
		ret = my_read(stdin, buffer, sizeof(buffer));
		printf("%s", buffer);
		my_write(stdout, buffer, strlen(buffer));
	}

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
