#include <iostream>
using namespace std;

int main(){
    cout << "Enter the size of the array : " << endl;
    int n;
    cin >> n;
    int number[n];
    cout << "Enter your array elements :  " << endl;
    for(int i = 0 ; i < n ; i++){
        cin >> number[i];
    }
    cout << "\n Your array elements are : " << endl;
    for(int i : number){
        cout << i << "\t";
    }
    return 0 ;
}