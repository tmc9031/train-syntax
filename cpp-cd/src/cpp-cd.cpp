//============================================================================
// Name        : cpp-cd.cpp
// Author      : tmc9031@gmail.com
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

class Tool {
public:
	Tool(int cl) :
			color(cl) {
		cout << "Tool constructor" << endl;
	}

	~Tool() {
		cout << "destroy tool" << endl;
	}

	int color;
};

class Box {
public:
	Box(int sz) :
			size(sz) {
		cout << "Box constructor" << endl;
	}

	~Box() {
		cout << "destroy Box" << endl;
	}

protected:
	int size;
};

class ToolBox: public Box {
public:
	ToolBox(int sz) :
			Box(sz), t(128), toolNum(1) {
		cout << "ToolBox constructor" << endl;
	}

	~ToolBox() {
		cout << "destroy ToolBox" << endl;
	}

	void Dump() {
		cout << "tool num: " << toolNum << " tool color: " << t.color
				<< " box size: " << size << endl;
	}

protected:
	Tool t;
	int toolNum;
};

int main(int argc, char* argv[]) {

	ToolBox tb(5);
	tb.Dump();

	return 0;
}
