//
// Created by wbzhang on 2020/8/12.
//

#include <iostream>

using namespace std;

inline int Max(int x, int y)
{
	return (x > y)? x : y;
}

// 程序的主函数
int main( )
{

	cout << "Max (20,10): " << Max(20,10) << endl;
	cout << "Max (0,200): " << Max(0,200) << endl;
	cout << "Max (100,1010): " << Max(100,1010) << endl;
	return 0;
}