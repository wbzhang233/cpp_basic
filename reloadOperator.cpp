
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

struct Point2d{
	double x,y;
	// 默认构造
	Point2d (){this->x = 0;this->y =0;};
	// 构造函数
	Point2d (int _x,int _y):x(_x),y(_y){ };
	// 加法重载
	Point2d operator+(const Point2d& pt)
	{
		Point2d res;
		res.x = this->x +pt.x;
		res.y = this->y +pt.y;
		return res;
	}
	// 大于号载入,先比较x坐标
	bool operator>(const Point2d& pt)
	{
		return  (this->x > pt.x) ? true : (this->x == pt.x && this->y > pt.y );
	}
};

//// 外部定义
bool operator<(const Point2d& pt1, const Point2d& pt2)
{
	return  (pt1.x < pt2.x) ? true : (pt1.x == pt2.x && pt1.y < pt2.y ); //x1<x2或者，x1=x2并且，y1<y2时，认为pt1更小
}

/// 试图重载点积运算
double operator*(const Point2d& pt1, const Point2d& pt2)
{
	return pt1.x*pt2.x+pt1.y*pt2.y;
}


int main()
{
	Point2d pt1(10,5);
	Point2d pt2(5,9);
	// 加法
	auto sum = pt1+pt2;
	cout<<sum.x<<" "<<sum.y<<endl;

	// 内部比较大小
	bool cmp1 = pt1>pt2;
	cout<< "inner:"<<cmp1<<endl;

	// 外部比较大小
	bool cmp2 = pt1<pt2;
	cout<<"outside:"<< cmp2 <<endl;

	// product
	double prod = pt1*pt2;
	cout<<"prod:"<<prod<<endl;

	double x = 2.56;
	int x1 = floor(x);
	int x2= round(x);
	int x3 = ceil(x);
	cout<<"floor:"<<x1<<endl;
	cout<<"round:"<<x2<<endl;
	cout<<"ceil:"<<x3<<endl;

	return 0;
}