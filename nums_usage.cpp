//
// Created by wbzhang on 2020/9/22.
//

#include <iostream>
#include <vector>
using namespace std;

/*
class Solution {
public:

	const int N = 26;

	bool isAnagram(string s, string t) {
		if(s.length()!=t.length() ) return false;
		int hist1[N],hist2[N];
		int hist1[N] = new int(26);
		for(int i=0;i<N;i++){
			hist1[i] = 0;
			hist2[i] = 0;
		}

		for(int i=0;i<s.length();++i){
			hist1[s[i]-'a' ]++;
			hist2[t[i]-'a' ]++;
		}

		for(int i=0;i<N;i++){
			if(hist1[i]!=hist2[i])
				return false;
		}
		return true;
	}
};*/

int main()
{


}