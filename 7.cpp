#include<bits/stdc++.h>
using namespace std;

int main(){
    // int i = 1;
    // while(i <= 10){
    //     cout << i << endl;
    //     i++; 
    // }
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            cout << "*";
        }
        cout << endl;
    }
  }
}
