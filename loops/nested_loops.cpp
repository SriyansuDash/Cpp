#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout << "Enter your number n : ";
    cin >> n;
    cout << "Enter your number m : ";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << j << " ";
        }
        cout << i << " " << endl;
    }
    return 0;
    
}