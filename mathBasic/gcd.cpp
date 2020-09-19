//
// Created by wbzhang on 2020/8/12.
//

#include <iostream>
#include <iomanip>
#include "gcd.h"
using namespace std;

int main()
{
	int x = 24,y = 36;
	int g = gcd(x,y);
	cout<<"gcd:"<<g<<endl; //最大公约数 Greatest Common Divisor(GCD)
	cout<<"lcm:"<<(x*y)/g<<endl; //最小公倍数 Least Common Multiple

	long fact5 = fact(5);
	cout<<"fact:"<<fact5<<endl;

	myswap2(x,y);
	cout<<"x:"<<x<<"y"<<y<<endl;

	return 0;
}