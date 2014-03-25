//============================================================================
// Name        : cpp-recursion.cpp
// Author      : tmc9031@gmail.com
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int recursion(int n) {
	if (n >= 4)
		return recursion(n - 1) + recursion(n - 3);
	else
		return 1;
}

int main() {
	int n;
	int irecursion;

	cin >> n;
	irecursion = recursion(n);

	cout << irecursion << endl; // prints !!!Hello World!!!
	return 0;
}
