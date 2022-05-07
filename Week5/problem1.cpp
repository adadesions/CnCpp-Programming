/*
problem 1
Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;
    int* ptrA;
    int* ptrB;

    cout << "Enter intergers a, b: ";
    cin >> a >> b;    

    ptrA = &a;
    ptrB = &b;

    cout << "ptrA point at: " << ptrA << endl;
    cout << "ptrA value: " << *ptrA << endl;

    cout << "ptrB point at: " << ptrB << endl;
    cout << "ptrB value: " << *ptrB << endl;

    return 0;
}