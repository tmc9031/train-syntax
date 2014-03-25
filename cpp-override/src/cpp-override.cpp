//============================================================================
// Name        : cpp-override.cpp
// Author      : tmc9031@gmail.com
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>

using namespace std;

class Animal {
public:
	// 被覆盖的函数
	virtual void Voice() {
		cout << "animal voice" << endl;
	}
	virtual ~Animal() {
		cout << "~Animal()" << endl;
	}
};

class Cat: public Animal {
public:
	// 覆盖父类的函数
	void Voice() {
		cout << "meow" << endl;
	}
};

class Dog: public Animal {
public:
	// 覆盖父类的函数
	void Voice() {
		cout << "wang" << endl;
	}

	virtual ~Dog() {
		cout << "~Dog()" << endl;
	}
};

int main(int argc, char* argv[]) {

	Animal animal;
	Animal *panimal = NULL;
	Cat cat;
	Dog dog;

	cout << sizeof(cat) << endl;

	panimal = &cat;
	panimal->Voice();
	panimal = &dog;
	panimal->Voice();

//	animal.Voice();
//
//	cat.Voice();	//equal cat.Cat::Voice();
//	cat.Animal::Voice();
//	dog.Voice();
//	dog.Animal::Voice();

	delete panimal;	//&dog

	return 0;
}
