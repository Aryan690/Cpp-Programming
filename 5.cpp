#include<bits/stdc++.h>
using namespace std;

int main(){
    // && || to check multiple conditions
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << "YES";
    }
    else if(n % 3 == 0){
        cout << "Divisble by 3";
    }
    else{
        cout << "NO";
    }

}