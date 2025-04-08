#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string cars[] = {"Toyota", "Honda", "Ford", "Nissan", "BMW"};
    int length = cars->length();
    cout << length << endl;
    for(int i = 0 ; i < cars->length(); i++){
        cout << i << endl;
    }
    return 0 ;
    
}