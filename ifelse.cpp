#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    cout << "Enter your age : ";
    int n;
    cin >> n ;
    if(n >= 60){
        cout << "Your age is " << n << " and you are adult and senior citizen";
    }
    else if(n >=18){
        cout << "Your age is " << n << " and you are adult ";
    }
    else {
        cout << "Your age is " << n << " and you are minor";
    }
    return 0 ;
}