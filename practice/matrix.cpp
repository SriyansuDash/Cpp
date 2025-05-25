#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void matrix(int rows , int cols){
    int arr[rows][cols];
    cout << "Enter your elements of the matrix"<<endl;
    for(int i =0 ;i < rows ;i++){
        cout << "Enter your " << i+1 << " row of the matrix" << endl;
        for(int j = 0; j<cols;j++){
            cin >> arr[i][j];
        }
    }
    cout << "Your matrix is : " << endl;
    for(int i = 0 ; i< rows ;i++){
        for(int j = 0 ; j< cols ;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int rows, cols;
    cout << "Enter your row size of the matrix " ;
    cin >> rows;
    cout << "Enter your column size of the matrix " ;
    cin >> cols;
    matrix(rows , cols);
    return 0;
}