#include<bits/stdc++.h>
using namespace std;

int main(){
	string str, str_rev;
	cin >> str;
	for(int i = str.size()-1; i >= 0; --i){
		str_rev.push_back(str[i]);
	}
	if(str == str_rev){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}