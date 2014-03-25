/*
 * func.c
 *
 *  Created on: Feb 24, 2012
 *      Author: root
 */

#include <stdio.h>
#include "func.h"
//#include "funcpp.h"	//
extern void funcpp_extern(int i);	//

static void func_static();

void func() {
	printf("func\n");
	func_static();
	funcpp_extern(0);	//c call cpp
}

static void func_static() {
	printf("func_static\n");
}
