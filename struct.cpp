#include <iostream>
using namespace std;

struct{
    int a;
    string name;
    float grade;
}myStruct1, myStruct2,myStruct3;

int main(){
    myStruct1.a = 2;
    myStruct1.name = "John";
    myStruct1.grade = 3.6;
    cout << myStruct1.a << endl;
    cout << myStruct1.name << endl;
    cout << myStruct1.grade << endl;

    myStruct2.a = 45;
    myStruct2.name = "Ab";
    myStruct2.grade = 4.5;

    cout << "My name is " << myStruct2.name << " my age is " << myStruct2.a << " and mygrade is : " << myStruct2.grade << endl;
    return 0 ;
}