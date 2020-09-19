//
// Created by wbzhang on 2020/8/31.
//

#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

//bool cmp(int arr[])
//{
//	if(arr[0]>arr[1]){
//		return true;
//	}
//	return false;
//};

//struct mycmp{
//	bool cmp(const vector<int> &a,const vector<int> &b){
//		return a[0]<b[0];
//	};
//};

bool cmp(const vector<int> &a,const vector<int> &b){
	return a[0]<b[0];
};


int main()
{
//	int arr[2] = {1,2};
//	int *array = new int[2];
//	for(int i=0;i<2;i++){
//		array[i] = i;
//	}

	vector<int> ar = {1,4,2,3,5};
	sort(ar.begin(),ar.end(),cmp);

	return 0;
}