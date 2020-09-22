//
// Created by wbzhang on 2020/8/11.
//

#include <iostream>
#include <cctype>
#include "reloadOperator.h"

using namespace std;

template <typename T>
bool f = [](T x, T y){ return x < y ; };

static Point2d pts[10];

int main() {
	std::cout << "Hello, World!" << std::endl;
	int x=1.0,y=2.0;

//	bool f1 = [](int x, int y){ return x < y ; };

	for (int i = 0; i < 10; ++i) {
		pts[i].x = i;
		pts[i].y = i*i;
	}

	for (int j = 0; j < 10; ++j) {
		cout<<"x:"<<pts[j].x<<"\t";
		cout<<"y:"<<pts[j].y<<endl;
	}

	return 0;
}