#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *p = &a; // pointer to a
    cout << "Value of a : " << a << endl;
    cout << "Address of a : " << &a << endl;
    cout << "Value of p : " << p << endl;
    cout << "Value at address p : " << *p << endl; // dereferencing the pointer
    return 0 ;

}