//
// Created by wbzhang on 2020/8/11.
//

#include <iostream>
#include <cctype>
#include <string>
#include <string.h>
//#include <sstream>

using namespace std;

/*bool operator>(const string& s1,const string& s2)
{
	return strcmp(s1,s2)<0;
}*/

int main() {
	std::cout << "Hello, World!" << std::endl;

	string s1 = "adcbf";
	string s2 = "dcfba";
	int res = strcmp(s1,s2);
	cout<<res<<endl;


	bool flag = s1>s2;
	cout<<flag<<endl;


	return 0;
}
