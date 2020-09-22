//
// Created by wbzhang on 2020/9/22.
//

#include <bits/stdc++.h>
using namespace std;

// 1.自定义结构体的自定义比较函数
struct Point2i{
	int x,y;
	Point2i(int _x,int _y):x(_x),y(_y){ };
	// 1.结构体内重载operator<运算符
	bool operator<(const Point2i &pt)
	{
		return this->y < pt.y;
	}
};


// 2.自定义比较函数
bool ptcmp(Point2i pt1,Point2i pt2)
{
	return pt1.y<pt2.y;
}

// 3.结构体包装operator()运算符函数
struct sptcmp{
	bool operator()(const Point2i &pt1,const Point2i &pt2){
		return pt2.y < pt1.y;
	}
}sptcmp1;

// 打印点集
void printPts(vector<Point2i> &vpts){
	for(auto pt:vpts){
		cout<<pt.x<<","<<pt.y<<"\t";
	}
}

// 2.自定义类型比较函数
struct mycmp{
	bool operator()(const vector<int> &a,const vector<int> &b){
		return a[0]<b[0];
	};
};

bool cmp(vector<int> va, vector<int> vb){
	if(va.size()==0) return true;
	return va[0]<vb[0];
};

bool operator<(const vector<int> &a,const vector<int> &b){
	return a[0]<b[0];
}


int main()
{
	/// 2.对结构体自定义比较函数

	// 自定义结构体
	vector<Point2i> pts;
	for(int i=0;i<6;++i){
		pts.push_back(Point2i(i,(i+1)*3) );
	}
	printPts(pts);
	cout<<endl;
	// 将pts按照y逆向排序
	sort(pts.begin(),pts.end(),ptcmp);
	printPts(pts);
	cout<<endl;

	// 在逆序
	sort(pts.begin(),pts.end());
	printPts(pts);
	cout<<endl;

	// 在逆序
	sort(pts.begin(),pts.end(),sptcmp1);
	printPts(pts);
	cout<<endl;



	//	vector<vector<int> > arr2 = {{1,4,5},{0,3,6},{9,8,5},{2,1,1},{0,3,6}};
	// 	std::sort(arr2.begin(),arr2.end(),cmp);
	//	std::sort(arr2.begin(),arr2.end());


	return 0;
}