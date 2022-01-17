 #include <bits/stdc++.h>
using namespace std;

int main(){
	int x = 4;
	int *p_x = &x;
	cout << "address of x: " << &x << endl;
	cout << "value in p_x: " << p_x << endl;
	cout << "value in *p_x:" << *p_x << endl;
	*p_x = 5;
	cout << "value of x: " << x << endl; 
	cout << "p_x + 1: " << p_x + 1 <<endl;
	int **pp_x = &p_x;
	cout << "address of p_x: " << &p_x << endl;
	cout << "value in pp_x: " << pp_x << endl;
	cout << "value in *pp_x: " << *pp_x << endl;
	cout << "value in **pp_x: " << **pp_x << endl;
	**pp_x = 10;
	cout << "value of x: " << x <<endl;	
}