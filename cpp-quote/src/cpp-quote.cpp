//============================================================================
// Name        : cpp-quote.cpp
// Author      : tmc9031@gmail.com
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <iostream>
using namespace std;

void change(char* &ap, char* &bp) {
	char* temp = NULL;

	temp = ap;
	ap = bp;
	bp = temp;
}

int main() {
	char *ap = "hello";
	char *bp = "how ara you";

	cout << "ap:" << ap << endl;
	cout << "bp:" << bp << endl;

	change(ap, bp);
	cout << "after change..." << endl;

	cout << "ap:" << ap << endl;
	cout << "bp:" << bp << endl;

	return 0;
}
