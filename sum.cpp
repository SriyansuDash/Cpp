#include <iostream>
using namespace std;

int main(){
    int n,sum = 0  ;
    cin >> n ;

    int i = 1 ;
    while(i <= n){
        if(i % 2 == 0){

            sum +=i ;
        }
        i++;
    }
    
    cout << "Sum of even numbers from 1 to " << n << " is: " << sum << endl;
    return 0 ;
}