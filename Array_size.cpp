#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int myNumbers[5] = {10 ,20 , 30 , 40 ,50};
    int getArrayLength = sizeof(myNumbers[0]);
    for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << "\n";
      }
    // cout << getArrayLength << endl;
    return 0; 
}