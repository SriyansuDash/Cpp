#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int start ,end;
    cout << "Enter your range : \n";
    cout << "Start: "<< endl;
    cin >> start;
    cout << "End : " << endl;
    cin >> end;
    for (int i = start; i <= end; i++)
    {
        if(i%2 == 0){
            cout << i << " ";
        }
        else{
            continue;
        }
    }
    return 0;
    
}