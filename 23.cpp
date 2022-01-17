#include<bits/stdc++.h>
using namespace std;

void increment(int *x){
	(*x)++;

}
int main(){
	int a = 4;
	cout << a << endl;
	increment(&a);
	cout << a << endl;
}