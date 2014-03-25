//============================================================================
// Name        : cpp-template.cpp
// Author      : tmc9031@gmail.com
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
#include <list>
#include <vector>
#include <map>

using namespace std;

class X	//list node
{
public:
	X(int i) :
			m(i) {/*cout<<"constructor"<<endl;*/
	}

	~X() {/*cout<<"de-constructor"<<endl;*/
	}

	int m;
};

int main(int argc, char *argv[]) {
	// list :
	list<X> intList;

	intList.push_back(X(4));	//X() no name object
	intList.push_back(X(2));
	intList.push_back(X(9));

	list<X>::iterator i = intList.begin();

	while (i != intList.end()) {
		cout << i->m << endl;	// : sequential access
		i++;
	}

	// vector :
	vector<int> intVector;	//re-allocation

	intVector.push_back(4);
	intVector.push_back(2);
	intVector.push_back(9);

	for (int j = 0; j < 3; j++) {
		cout << intVector[j] << endl;	//j_flag : random access
	}

	// map :
	map<int, X> xMap;
	typedef pair<int, X> X_Pair;

	xMap.insert(X_Pair(11, X(110)));
	xMap.insert(X_Pair(7, X(70)));
	xMap.insert(X_Pair(9, X(90)));

	map<int, X>::iterator it = xMap.find(7);
	if (it != xMap.end()) {
		cout << "found with key " << it->first << ": " << it->second.m << endl;
	}

	return 0;
}
