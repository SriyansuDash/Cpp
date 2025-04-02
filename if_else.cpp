#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter your age ";
    int age1 , age2;
    cin >> age1 ;
    cout << "Enter your friend's age ";
    cin >> age2;
    
    if(age1 > age2){
        cout << "Your friend is younger than you..";
    }
    else if( age1 == age2){
        cout << "You and tour friend are in same age..";
    }
    else{
        cout << "Your friend is older than you..";
    }
    return 0 ;
}


    // int a = 22;
    // int b = 45;
    // int a , b ;
    // cout << "Enter first number : ";
    // cin >> a;
    // cout << "Enter second number : ";
    // cin >> b;
    // if(a>b){
    //     cout << a << " is greater than " << b << endl;
    //     cout << "Loop 1 is executed "<< endl;
    // }
    // else{
    //     if(b>a){
    //         cout << b << " is grater than " << a << endl;
    //         cout << "Loop 2 is executed "<< endl;
    //     }
    // }
    // return 0;
// }