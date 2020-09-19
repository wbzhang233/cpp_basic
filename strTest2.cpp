//
// Created by wbzhang on 2020/8/11.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int len;

	// 复制 str1 到 str3
	str3 = str1;
	cout << "str3 : " << str3 << endl;

	// 连接 str1 和 str2
	str3 = str1 + str2;
	cout << "str1 + str2 : " << str3 << endl;

	// 连接后，str3 的总长度
	len = str3.size();
	cout << "str3.size() :  " << len << endl;

	// string比较大小
	bool flag = str1 > str2;
	cout << "str1 > str2:" << flag << endl;
	bool flag2 = str1<=str2;
	cout << "str1 <= str2:" << flag2 << endl;
	bool flag3 = (str1==str2);
	cout << "str1 == str2:" << flag3 << endl;


	return 0;
}
