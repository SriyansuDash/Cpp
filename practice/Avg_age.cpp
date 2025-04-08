// Calculate the avg age of a perticular group using array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the different persons of age : " << endl;
    int n;
    cin >> n;
    int arr[n];
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n ;i++){
        cout << "Enter "<< i+1 << " person's age : ";
        cin >> arr[i];
    }
    int sum = 0;
    for(int i : arr){
        sum+=i;
    }
    float avg = sum/length;
    cout << "Average age of the group is : "<< avg << endl;
    return 0 ;
}