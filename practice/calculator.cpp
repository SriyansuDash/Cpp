#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int addition(int a , int b){
    return a+b;
}
int subtraction(int a , int b){
    return a-b;
}
int multiplication(int a , int b){
    return a*b;
}
int division(int a , int b){
    return a/b;
}

int main(){
    int n,m;
    cout << "Enter your 1st number : "<< endl;
    cin >> n;
    cout << "Enter your 2nd number : "<< endl;
    cin >>m;
    int choice;
    cout << "Enter your choice : " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Addition of two numbers is " << addition(n,m) << endl;
        break;
    case 2:
        cout << "Subtraction of two numbers is " << subtraction(n,m) << endl;
        break;
    case 3:
        cout << "Multiplication of two numbers is " << multiplication(n,m) << endl;
        break;
    case 4:
        cout << "Division of two numbers is " << division(n,m) << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
    return 0;
}