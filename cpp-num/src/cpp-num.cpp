//============================================================================
// Name        : cpp-num.cpp
// Author      : tmc9031@gmail.com
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Num {
public:
	//构造函数,用参数a初始化m
	Num(int a) :
			m(a) {
	}
	//所有大于1小于 整数m的非素数放入数组x 中;
	void fun() {
		int i, n;

		for (i = 3, k = 0; i < m; i++) {
			for (n = 2; n < i; n++)
				if (i % n == 0)
					break;
			if (n == i)
				xx[k++] = i;
		}
	}
	void view() {
		int i = 0;

		for (i = 0; i < k; i++) {
			cout << xx[i] << " ";
		}
		cout << endl;
	}
private:
	int m;		//存放输入的查找范围的上界
	int k;		//存放指定范围内非素数的个数
	int xx[50];	//存放指定范围内的所有非素数
};

int main() {
	int m = 0;

	cout << "输入查找范围的上界:" << endl;
	cin >> m;

	Num test(m);

	test.fun();
	test.view();

	return 0;
}
