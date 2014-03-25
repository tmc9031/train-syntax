//============================================================================
// Name        : cpp-stdio.cpp
// Author      : tmc9031@gmail.com
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a[10][10] = { 0 };
//	a[0]=1;
//	a[10]=1;
	std::cout << a[0][6] << std::endl;
	std::cout << a[9][9] << std::endl;
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	return 0;
}
