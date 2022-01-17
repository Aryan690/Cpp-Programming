//arrays and pointers
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[10];
	a[0] = 4;
	a[1] = 8;
	cout << "a: " << a << endl;
	cout << "&a[0]: " << &a[0] << endl;
	cout << "value in a: " << *a << endl;
	cout << "a + 1: " << a + 1 << endl;
	cout << "&a[1]: " << &a[1] << endl;
	cout << "*(a+1): " << *(a+1) << endl;
}