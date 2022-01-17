#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, mul = 1;
		cin >> n;
		int a[n];
		for(int i = 0; i <= n-1; ++i){
			cin >> a[i];
		}
		for(int i = 0; i <= n-1; ++i){
			
			mul = mul * a[i];
		}
		if (mul % 10 == 2 || mul % 10 == 3 || mul % 10 == 5){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
		
	}
	
}


