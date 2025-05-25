#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter number n : ";
    cin >> n;
    int i = 2;
    while(i < n){
        if(n < 1){
            cout << "Invalid Input" << endl;
        }
        else{
            if(n % i == 0){
                cout << n << " is prime for " << i << endl;
            }
            else{
                cout << n << " is not prime for " << i << endl;
            }
        }
        i++;
    }
    return 0 ;
}