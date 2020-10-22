//
// Created by wbzhang on 2020/9/15.
//
#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

typedef tuple<string,int,double> strid; // 名字，年龄和分数

int main() {
//	vector<int> vec;
//	for(int i=0;i<10;i++){
//		cout<<i<<" ";
//		vec.push_back(i*i);
//	}
//
//	cout<<endl;
//	for(int j=0;j<10; ++j){
//		cout<<vec[j]<<" ";
//	}

//	int a = 2;
//	printf("%d",a++);
//	printf("%d",++a);

//	int a,b,c,d;
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	fopen("1.txt","w+");
//	cout<<"a:"<<a<<endl;
//	cout<<"b:"<<b<<endl;
//	cout<<"c:"<<c<<endl;
//	cout<<"d:"<<d<<endl;

	tuple<string,int,double> tpl = {"zhangqi",25,10.0};
	cout<<std::get<0>(tpl)<<" "<<std::get<1>(tpl)<<" "<<std::get<2>(tpl)<<endl;
	string string1;
	int x;
	double dbl;
	std::tie(string1,x,dbl) = tpl;



	for(int i = 0; i + 20; i--)
		cout << "hello "<< i<< endl;

	char a = 10;
	// const char *p = &a;

	const char *p = "123";
	// const修饰 char *p；表明以p所指向的字符串数组不可变
	// p为(字符串常量)的指针，p指向该字符串的首字母。并且所指向内容不可变(即*p代表的字符串为常量，*p不可变，但是p可变)
	char const *p1 = "456"; // 常量指针，p1所指向内容不可变;
	// const 修饰 *p1，其类型为char；

	char *const p2 = "369"; // 指针常量，p2本身不可变；实际上等同于const char *const p2
	// const修饰 p2，p2为(指针常量)，指向一个字符串,
	// 该指针的指向p2不可变；但所指向的内容*p2可变



	// before
	cout<<"-- before --"<<endl;
	cout<<"*p: "<<*p<<endl; // p指向该字符串的首字母，即*p=1
	cout<<"p: "<<p<<endl; // p为该字符串常量的指针，将输出 123

	cout<<"*p1: "<<*p1<<endl; // p1指向该字符串的首字母,即*p1=4
	cout<<"p1: "<<p1<<endl; //  p1为该字符串常量的指针，将输出 456

	cout<<"*p2: "<<*p2<<endl; // p2指向字符串常量的首字母，因此为3
	cout<<"p2: "<<p2<<endl; // p2为指针常量，将输出字符串常量 369

	// after
	cout<<"-- after --"<<endl;
	p = "5"; // p本身可变
//	*p = 'a'; //p所指向的内容不可变
//	*p = "abd";

	p1 = "678"; // p1本身可变
//	*p1 = 'p'; //p1所指向内容不可变
//	*p1 = "bcd"; //p1所指向内容不可变

	char str[100]="Hello World";
//	*p2 = str[1];
//	p2 = "a";  //p2不可变，
//	p2[0] = 'a'; //所指向内容可变,且 p2指向字符串中的第一个字符，将报错
//	(*p2) = 'a'; //所指向内容可变,且 p2指向字符串中的第一个字符,将报错
//	*p2 = "amd";  //所指向内容可变


	cout<<"*p: "<<*p<<endl;
	cout<<"p: "<<p<<endl;

	cout<<"*p1: "<<*p1<<endl;
	cout<<"p1: "<<p1<<endl;

	cout<<"*p2: "<<*p2<<endl;
	cout<<"p2: "<<p2<<endl;

	cout << "done" << endl;

}