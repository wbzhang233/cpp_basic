//
// Created by wbzhang on 2020/8/31.
//

//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 自定义结构体的自定义比较函数
struct Point2i{
	int x,y;
	Point2i(int _x,int _y):x(_x),y(_y){ };
	bool operator<(const Point2i &pt)
	{
		return this->y < pt.y;
	}
};

// 比较函数
bool ptcmp(Point2i pt1,Point2i pt2)
{
	return pt1.y<pt2.y;
}

// 结构体包装比较函数
struct sptcmp{
	bool operator()(const Point2i &pt1,const Point2i &pt2){
		return pt2.y < pt1.y;
	}
}sptcmp1;



bool cmp(int arr[])
{
	if(arr[0]>arr[1]){
		return true;
	}
	return false;
};

bool myfunction (int i,int j) { return (i<j); }

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
	// 1.基本类型定义比较函数
	int arr[2] = {1,2};
	int *array = new int[2];
	for(int i=0;i<2;i++){
		array[i] = i;
	}

	vector<int> ar = {1,4,2,3,5};
	sort(ar.begin(),ar.end(),myfunction); // 比较函数

	/// 2.对结构体自定义比较函数
//	vector<vector<int> > arr2 = {{1,4,5},{0,3,6},{9,8,5},{2,1,1},{0,3,6}};
// 	std::sort(arr2.begin(),arr2.end(),cmp);
//	std::sort(arr2.begin(),arr2.end());

	// 自定义结构体
	vector<Point2i> pts;
	for(int i=0;i<6;++i){
		pts.push_back(Point2i(i,(i+1)*3) );
	}
	// 将pts按照y逆向排序
	sort(pts.begin(),pts.end(),ptcmp);

	sort(pts.begin(),pts.end());

	sort(pts.begin(),pts.end(),sptcmp1);
	


	return 0;
}