#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string &ref = food ;
    cout << "Memory address of food : " << &ref << endl;
    cout << food << endl ;
    if(food == ref){
        cout << "The food is equal to the reference" << endl ;
    }
    else{
        cout << "Both are different" << endl;
    }
    return 0 ;
}