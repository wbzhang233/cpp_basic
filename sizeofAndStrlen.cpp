//
// Created by wbzhang on 2020/9/22.
//

#include <bits/stdc++.h>
using namespace std;


int main() {
	char* s1 = "0123456789";
	cout<<sizeof(s1)<<endl;  // 输出 8，因为这时的参数 s 是一个指向字符串常量的字符指针，因此计算的是指针的大小，注意这里不同编译器得到的值可能不同，也有可能是4
	cout<<sizeof(*s1)<<endl;  // 输出 1，*s 是第一个字符
	cout<<strlen(s1)<<endl;  // 输出 10，有10个字符，strlen是个函数，内部实现是用一个循环计算到\0之前为止
	//strlen(*s1);  // 报错，因为strlen函数的参数类型只能是 char* 即字符串

	char s2[] = "0123456789";  // 动态数组
	cout<<sizeof(s2)<<endl;  // 结果为11，数组名虽然本质上是一个指针，但是作为sizeof的参数时，计算的是整个数组的大小，这点要特别注意。且在求动态数组的大小时，sizeof统计到第一个结束字符'\0'处结束
	cout<<strlen(s2)<<endl;  // 结果为10
	cout<<sizeof(*s2)<<endl;  // 结果为1，*s是第一个字符

	char s3[100] = "0123456789";
	cout<<sizeof(s3)<<endl;  // 结果为100，因为内存给数组 s3分配了字节数为100的空间大小
	cout<<strlen(s3)<<endl;  // 结果为10

	int s4[100] = {0,1,2,3,4,5,6,7,8,9};
	cout<<sizeof(s4)<<endl;  // 结果为400，因为int数组中每个元素都是int型，int型占用4字节
	//strlen(s4);  // 报错，strlen不能以int* 作为函数参数

	char p[] = {'a', 'b','c','d','e', 'f', 'g','h'};
	char q[] = {'a', 'b','c','d','\0', 'e', 'f', 'g'};
	cout<<sizeof(p)<<endl;  // 结果为8
	cout<<strlen(p)<<endl;  // 结果是一个随机数，因为字符串数组中没有结束字符 '\0', 因此该函数会一直统计下去，直到碰到内存中的结束字符
	cout<<sizeof(q)<<endl;  // 结果还是8
	cout<<strlen(q)<<endl;  // 结果为4, 结束字符 '\0'前有4个字符

	return 0;
}