#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cout << "Enter your day number of week : " << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Sunday" << endl;
        break;
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    default:
        cout << "Invalid day number " << endl;
    }
}