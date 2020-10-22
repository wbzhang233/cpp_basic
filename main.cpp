#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ;
	cin>>n;
	cin.ignore();    //或者是getchar();
//	getchar();
/*	string a[n];
	for(int i = 0; i < n; i++){
		getline(cin,a[i]);
	}

	for(int i = 0 ; i< n ; i++){
		for(int j = a[i].size()-1 ; j>=0 ; j--){
			cout<<a[i].at(j);
		}
		cout<<endl;
	}*/

	vector<string> lines;
	string str;
	while(n>0){
		getline(cin,str);
		lines.push_back(str);

		--n;
	}

	cout<<"\n --- Hello World! --- \n"<<endl;

	for(auto s:lines){
		cout<<s<<endl;
	}

	return 0;
}

int main2(){
	int n ;
	cin>>n;
	cin.ignore();    //或者是getchar();
	string a[n];
	for(int i = 0; i < n; i++){
		getline(cin,a[i]);
	}

	cout<<"\n --- Hello World! --- \n"<<endl;

	for(int i = 0 ; i< n ; i++){
		for(int j = a[i].size()-1 ; j>=0 ; j--){
			cout<<a[i].at(j);
		}
		cout<<endl;
	}
}

// test case
//3
//I love zq
//I love zq forever.
//I will keep the oath. Forever.