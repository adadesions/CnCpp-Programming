#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
    string adabrain = "AdaBrain";  
    string x = "Peter";

    // Pointer Declaration
    string* ptr;

    // Pointer Assigment
    ptr = &adabrain;   

    cout << adabrain << endl;
    cout << &adabrain << endl;
    
    cout << ptr << endl; // Pointing Address
    cout << *ptr << endl; // Pointer Value
    cout << &ptr << endl; // Pointer Address

    *ptr = "Hacked";

    cout << "*ptr = " << *ptr << endl;
    cout << "adabrain = " << adabrain << endl;

    ptr = &x;

    cout << "*ptr = " << *ptr << endl;
    cout << "x = " << x << endl;

    *ptr = "Peter Parker";
    cout << "new x = " << x << endl;

    return 0;
}