#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number :";
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = i;
        while (j <= n){
            cout << j ;
            j++;
        }
        cout << endl;
        i++;
    } 
    return 0 ;
}