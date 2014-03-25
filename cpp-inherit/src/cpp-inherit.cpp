//============================================================================
// Name        : cpp-inherit.cpp
// Author      : tmc9031@gmail.com
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <string.h>

using namespace std;

/****************** 父类 *******************/
class Base {
public:
	static int m1;
protected:
	int m2;
private:
	int m3;
};

int Base::m1 = 0;

/****************** 公有继承 *******************/
class PublicClass: public Base //私有继承
{
};

class DerivedFromPub: public PublicClass {
public:
	void test() {
		// TODO: 尝试访问 Base 类的成员
		cout << "m1:" << m1 << endl;
	}
};

/****************** 保护继承 *******************/
class ProtectedClass: protected Base //保护继承
{
};

class DerivedFromPro: public ProtectedClass {
public:
	void test() {
		// TODO: 尝试访问 Base 类的成员
		cout << "m2:" << m2 << endl;
	}
};

/****************** 私有继承 *******************/
class PrivateClass: private Base //私有继承
{
};

class DerivedFromPri: public PrivateClass {
public:
	void test() {
		// TODO: 尝试访问 Base 类的成员
//		cout<<"m3:"<<m3<<endl;
	}
};

int main(int argc, char* argv[]) {
	PublicClass p1;
	ProtectedClass p2;
	PrivateClass p3;

	cout << "m1:" << p1.m1 << endl;
	cout << "m2:" << p2.m2 << endl;
	cout << "m3:" << p3.m3 << endl;

	DerivedFromPub pub;
	DerivedFromPro pro;
	DerivedFromPri pri;

	pub.test();
	pro.test();
	pri.test();

	return 0;
}
