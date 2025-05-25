#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int myNumbers[5] = {10, 20, 30, 40, 50};
  int getArraySize = sizeof(myNumbers) / sizeof(myNumbers[0]);
  cout << "Size of array is : " << getArraySize << endl;
  cout << "Array elements are : ";
  for (int i : myNumbers)
  {
    cout << i << " ";
  }
  return 0;
}