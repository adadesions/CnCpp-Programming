/*
problem 2 
Write a C++ program to find the max of an integral data set. The program will ask the user to input the number of data values in the set and each value. The program prints on screen a pointer that points to the max value.
*/

#include <iostream>
#include <cmath>

using namespace std;

void print(int* p, int size) {
    for (int i=0; i<size; i++) {
        cout << *(p+i) << ", ";
    }
    cout << endl;
}

int* findMax(int* p, int size) {
    int* max = p;
    for (int i=0; i<size; i++) {
        if (*max < *(p+i)) {
            max = p+i;
        }
    }

    return max;
}

int main() {
    int input[100] = {0};
    int size = 0;
    int* ptrMax;

    cout << "Enter positive integers [-1 for halt]: ";
    for (int i=0; i<100; i++) {
        cin >> input[i];
        if (input[i] < 0) break;
        size++;
    }

    print(input, size);

    // Find Max
    cout << "ptrMax: " << ptrMax << endl;
    ptrMax = findMax(input, size);
    cout << "Max pointer: " << ptrMax << endl;
    cout << "Max pointer value: " << *ptrMax << endl;

    return 0;
}