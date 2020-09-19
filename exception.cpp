//
// Created by wbzhang on 2020/8/12.
//

#include <iostream>
using namespace std;

double division(int a, int b)
{
	if( b == 0 )
	{
//		throw "Division by zero condition!";
		string msg = "I love ZQ.";
		throw msg;
	}
	return (a/b);
}

int main ()
{
	int x = 50;
	int y = 0;
	double z = 0;

	try {
		z = division(x, y);
		cout << z << endl;
	}
//	catch (const char* msg) {
////		cerr << msg << endl;
////	}catch (string msg){
////		cerr << msg << endl;
////	}
	catch (exception msg){
		cerr << msg.what() << endl;
	}

	cout<<"what happened"<<endl;
	return 0;
}