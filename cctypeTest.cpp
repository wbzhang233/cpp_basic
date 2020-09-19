//
// Created by wbzhang on 2020/8/11.
//

#include <iostream>
#include <cctype>

using namespace std;


int main() {
	std::cout << "Hello, World!" << std::endl;

	char s1 = 't';
	char s2 = ',';
	char s3 = '1';
	char s4 = '\t';
	cout<<isalnum(s1)<<" ";
	cout<<isalnum(s2)<<" ";
	cout<<isalnum(s3)<<" ";
	cout<<isalnum(s4)<<" "<<endl;

	cout<<isalnum('a')<<endl;
	cout<<isalnum('z')<<endl;
	cout<<isalnum('0')<<endl;
	cout<<isalnum('9')<<endl;


	cout<<isdigit(s1)<<" ";
	cout<<isdigit(s2)<<" ";
	cout<<isdigit(s3)<<" ";
	cout<<isdigit(s4)<<" "<<endl;



	return 0;
}
