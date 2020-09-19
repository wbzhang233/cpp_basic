// 虚函数动态多态
// Created by wbzhang on 2020/9/19.
//

#include <iostream>
#include <string>
using namespace std;

struct Point2i
{
	int x,y;
};

// 基类 Shape
class Shape
{
protected:
	int width;
	int height;
public:
	static string ShapeName; // 静态成员

	static void shapePrint()
	{
		std::printf("ShapeName is %s in stacic.","shape");
	}

	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
	virtual void print()
	{
		cout<<"This is shape"<<endl;
	}

	// 构造函数
	Shape():width(0),height(0)
	{
		cout<<"This Shape is constructed."<<endl;
	}

	// 父类析构函数申明为虚函数
	virtual ~Shape()
	{
		cout<<"This Shape is destroyed."<<endl;
	}
};

// 接口类，仅包含纯虚函数，并且不包含其他任何成员与方法
// 无法进行实例化
class PaintMethod
{
public:
	virtual void getCube()=0;
	virtual void getPencil()=0;
	virtual void getBlank()=0;
};

// 基类 PaintCost，抽象类;无法进行实例化
class PaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}

	// 声明一个纯虚函数
	virtual void getCube() =0;
};


// 还有一种所有方法均public给外界调用的叫啥...给忘了，集成类？？


// 派生类
class Rectangle: public Shape, public PaintCost
{
private:
	Point2i startPt;
	Point2i endPt;
public:
	int getArea()
	{
		return (width * height);
	}
	void print()
	{
		cout<<"This is Rectangle"<<endl;
	}

	// 继承了抽象类的纯虚函数，则必须将所有纯虚函数均实现才可以实例化
	void getCube()
	{
		cout<<"Just test for pure_virtual_class."<<endl;
	}

	// 子类构造函数
	Rectangle()
	{
		cout<<"This Rectangle is constructed."<<endl;
	}

	// 子类析构函数
	~Rectangle()
	{
		cout<<"This Rectangle is destroyed."<<endl;
	}
};

int main(void)
{
	// 1.构造函数
	cout<<"------ Shape constructor func ------"<<endl;
	Shape *shape = new Shape();
	cout<<"------ Rectangle constructor func ------"<<endl;
	Rectangle *rectangle = new Rectangle();

	// 1.1 调用自身打印
	cout<<"------ Self print ------"<<endl;
	cout<<"Shape print: ";
	shape->print();
	cout<<"Rectangle print: ";
	rectangle->print();

	// 1.2 类的静态成员与静态方法,通过::获取
	Shape::ShapeName = "I'm BJTUer.";
	cout<<Shape::ShapeName<<endl;
	Shape::shapePrint();

	// 2 动态多态打印
	cout<<"------ Dynamic constructor func ------"<<endl;
	Shape *shape1 = new Rectangle();
	cout<<"------ Dynamic bind print ------"<<endl;
	shape1->print();

	// 3 调用析构函数
	cout<<"------ shape destructor func------"<<endl;
	delete shape;
	cout<<"------ rectangle destructor func------"<<endl;
	delete rectangle;
	cout<<"------ shape1 destructor func------"<<endl;
	delete shape1;

	return 0;
}
