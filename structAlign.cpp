// 结构体对齐问题
// Created by wbzhang on 2020/9/19.
//

#include <iostream>
using namespace std;

/*
 * 根据字节数最大的类型进行对齐，并且结构体内的成员顺序并不影响存储的顺序。
 * 10,1,4,8 =23--> 3*8 = 24
 * 10,1,4 = 15 --> 4*4 = 16
 * 6,1,4 = 10 --> 3*4 = 12
 * 15,1,4 = 20 --> 4*5 = 20
 * 15,2,4 = 21 --> 4*6 = 24
 * 15,2,4,8 = 29--> 4*8=32
 * */
struct student{
	char name[15]; //姓名,size_dynamic
	char classNum[2]; //班级号
	int age; // 年龄
	double score; // 评分,optional
};

// 3,1,4,8 = 16--> 2*8 = 16
struct student1{
	double score; // 评分
	char name[15]; //姓名
	char classNum[2]; //班级号
	int age; // 年龄
};

int main()
{
	student stu;
	student1 stu1;


	int sz = sizeof(stu);
	int sz1 = sizeof(stu1);

	cout<<"sz: "<<sz<<endl;
	cout<<"sz1: "<<sz1<<endl;

	return 0;
}