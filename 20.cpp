//arrays can't be pass by value, they always pass by reference.
#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;
int a[N][N];
void func(){
	a[0][0] = 2;
}

int main(){
	a[0][0] = 5;
	cout << a[0][0] << endl;
	func();
	cout << a[0][0] << endl;
}