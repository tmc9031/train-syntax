//============================================================================
// Name        : cpp-externc.cpp
// Author      : tmc9031@gmail.com
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

extern "C" {
#include "func.h"
}	//cpp include c.h
#include "funcpp.h"

int main() {
	funcpp cpp;
	cpp.funcpp_do();
	func();	//cpp call c
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
