//
// Created by wbzhang on 2020/8/10.
//

#include<iostream>
#include<sstream>        //istringstream 必须包含这个头文件
#include<string>
using namespace std;
int main()
{
	string inStr;


	while(getline(cin,inStr) )
	{
		istringstream is(inStr);
		string s;
		while(is>>s)	cout<<s<<endl;
	}

}

//	string str2= "hello world ni hao ya"
//    string str= "hello,world,ni,hao,ya"

