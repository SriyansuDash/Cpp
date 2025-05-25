#include <iostream>
using namespace std;

int swapNumbers(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
    return 0;
}

int main(){
    int n,m;
    cout << "Enter your 1st number : "<< endl;
    cin >> n;
    cout << "Enter your 2nd number : "<< endl;
    cin >>m;
    cout << "Before swapping : " << endl;
    cout << "1st number : " << n << endl;
    cout << "2nd number : " << m << endl;
    cout << endl;
    swapNumbers(n,m);
    cout << "After swapping : " << endl;
    cout << "1st number : " << n << endl;
    cout << "2nd number : " << m << endl;
    return 0;
}