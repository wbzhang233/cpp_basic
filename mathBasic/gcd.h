//
// Created by wbzhang on 2020/8/12.
//

#ifndef CPPBASIC_GCD_H
#define CPPBASIC_GCD_H

#include <iostream>
using namespace std;

/* 辗转相除法
 * 如果y为0，则结束，输出x；
 * 否则，上一次的x%y!=0，则交换y和x%y
 * 如，24,36；
 */
int gcd(int x,int y){
	return y?gcd(y,x%y):x;
}

// 求n的阶乘
long fact(int n)
{
	if(n==1){
		return 1;
	}
	return n*fact(n-1);
}

// 两数交换
void myswap(int& a,int& b)
{
	a = a+b;
	b = a-b;
	a = a-b;
}

// 两数交换 异或
void myswap2(int &a,int &b)
{
	a = a^b;
	b = a^b;
	a = a^b;
}

#endif //CPPBASIC_GCD_H
