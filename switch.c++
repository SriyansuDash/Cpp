#include <bits/stdc++.h>
using namespace std ;

int main(){
    cout<<"Enter the day number of week : ";
    cout << "Week starts on Sunday which is day one";
    int n ;
    cin >> n;
    switch(n){
        case 1 : 
        cout << "Sunday";
        break;
        case 2 :
        cout << "Monday";
        break;
        case 3 :
        cout << "Tuesday";
        break;
        case 4 :
        cout << "Wednesday";
        break;
        case 5 :
        cout << "Thursday";
        break;
        case 6 :
        cout << "Friday";
        break;
        case 7 :
        cout << "Saturday";
        break;
        default:
        cout << "Invalid Input";
        break;
    }
    return 0;
}