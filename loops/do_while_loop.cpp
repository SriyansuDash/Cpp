#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter your N value : " << endl;
    int n;
    cin >> n;
    int i = 0, sum = 0;
    do{
        sum += i;
        cout << sum << "\t";
        i++;
    }while (i <= n);
    cout << "\n" << "Total Sum : " << sum << endl;
    return 0 ;
}