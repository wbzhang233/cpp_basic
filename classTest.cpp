//
// Created by wbzhang on 2020/8/14.
//
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Data{
public:
	int a,b;
//	Data():a(b),b(30){};
	Data(){};
};

struct Student{
	int age;
	char gender[10];
	double height;
	char name[11];
}Std;

int main()
{
	Data dt;
	cout<<"a:"<<dt.a<<endl;
	cout<<"b:"<<dt.b<<endl;

	Student student1;
	cout<<"std:"<< sizeof(student1)<<endl;
	cout<<"age:"<< sizeof(student1.age)<<endl;
	cout<<"name:"<< sizeof(student1.name)<<endl;
	cout<<"height:"<< sizeof(student1.height)<<endl;
	cout<<"gender:"<< sizeof(student1.gender)<<endl;

	string str ="abc";
	string str2 = str.substr(0,2);
	cout<<str2<<endl;


}