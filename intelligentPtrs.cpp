// 面试常考题：四种常用的智能指针- auto_ptr,unique_ptr,share_ptr,weak_ptr
// Created by wbzhang on 2020/9/22.
//

#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

class Box{
private:
	int x, y;
	string name;
public:
	Box(int _x,int _y,string _name):x(_x),y(_y),name(_name)
	{

	};

	Box()
	{
		this->name = "BOX";
		this->x = 0;
		this->y = 0;
	};

	int getArea()
	{
		return this->x * this->y;
	}

	void printBox()
	{
		cout<<this->name<<" "<<this->x<<" "<<this->y<<endl;
	};

};

int main()
{
	// 1.auto_ptr,已弃用
//	auto_ptr<string>

	/* 2.unique_ptr：
	 * 独占所有权，禁止拷贝操作；可通过move转移控制权
	 * */
	unique_ptr<Box> box1(new Box(4,5,"box1") ); // 申请
	unique_ptr<Box> box2(new Box(5,10,"box2") );
	// 禁止拷贝操作,编译不通过
//	unique_ptr<Box> box3(box1);
	unique_ptr<Box> box3(new Box());
	cout<<"--- box3 ---"<<endl;
	box3->printBox();
	box3 = std::move(box1); // 将box1对象的控制权转移给box3,此时box1已经被置空
	cout<<"box3获得控制权后"<<endl;
	box3->printBox();
	cout<<"box1控制权被转移后"<<endl;
//	box1->printBox(); // 此时已经被置空，变为野指针，所以会引发段错误


	/* 3.share_ptr：共享指针
	 * 共享所有权，可以有多个只能指针指向同一个对象
	 * */
	shared_ptr<Box> box4(new Box(6,8,"box4"));
	shared_ptr<Box> box41(new Box(66,88,"box41"));
	shared_ptr<Box> box5(box4);
	shared_ptr<Box> box6(box4);
	cout<<"--- box4 ---"<<endl;
	box4->printBox();
	cout<<"--- box5 ---"<<endl;
	box5->printBox();
	cout<<"--- box6 ---"<<endl;
	box6->printBox();
	// 输出引用计数
	cout<<"count of box4 ptr: "<<box4.use_count()<<endl;

	// 两个智能指针指向对象，可造成死锁
	box4 = box5;
	cout<<"count of box5 ptr: "<<box4.use_count()<<endl;

	/* 4.weak_ptr：弱指针
	 * 协助share_ptr进行管理。当使用弱指针指向某一对象时，不会增加share_ptr的引用计数
	 * */
	weak_ptr<Box> box7(box4);
	cout<<"count of box4 ptr: "<<box4.use_count()<<endl;

	return 0;
}
