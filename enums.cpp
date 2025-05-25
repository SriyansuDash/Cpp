#include <iostream>
#include <bits/stdc++.h>
using namespace std;

enum level
{
    LOW,
    MID,
    HIGH
};
int main()
{
    level l1 = LOW;
    level l2 = MID;
    level l3 = HIGH;

    cout << "Low level: " << l1 << endl;
    cout << "Mid level: " << l2 << endl;
    cout << "High level: " << l3 << endl;

    enum level myLevel = LOW;
    cout << "My level is " << myLevel << endl;
    return 0;    
}
