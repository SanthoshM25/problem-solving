//Program to print the sub strings of a string

#include<bits/stdc++.h>
using namespace std;

void subString(string &s, string curr="", int i = 0){
	if(i == s.length()) {
		cout<< curr << " ";
		return;
	}

	subString(s, curr, i+1);
	subString(s, curr + s[i], i+1);
}

int main(){
	string s = "abc";
	subString(s);
	return 0;
}