/*
 * funcpp.cpp
 *
 *  Created on: Feb 24, 2012
 *      Author: root
 */

#include <stdio.h>
#include "funcpp.h"

static void funcpp_static(int i);
static int iAll;

funcpp::funcpp() {
	// TODO Auto-generated constructor stub

}

funcpp::~funcpp() {
	// TODO Auto-generated destructor stub
}

void funcpp::funcpp_do() {
	printf("funcpp_do\n");
	funcpp_static(0);
	iAll = 0;
}

static void funcpp_static(int i) {
	printf("funcpp_static\n");
}

//
extern "C" void funcpp_extern(int i) {
	printf("funcpp_extern\n");
}
