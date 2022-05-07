// filename: functionPointer.cpp
#include <iostream>
#include <string>

using namespace std;

void print(int* data, int size) {
    cout << "{";
    for(int i=0; i<size; i++) {
        cout << *(data + i) << ", ";
    }

    cout << "}" << endl;
}

void power2(int* data, int size) {
    int* p;
    for(int i=0; i<size; i++) {
        p = data + i;
        *p = (*p) * (*p);
    }
}

void swap(int* data, int m, int n) {
    // x = 0, y = 1
    // Goal: x = 1, y = 0
    // Algorithm
    // tmp = x // tmp = 0
    // x = y // x = 1
    // y = tmp // y = 0
    int tmp = *(data + m);
    *(data+m) = *(data + n);
    *(data+n) = tmp;
}

int main() {
    int data[] = {1, 5, 8, 364};
    int size = sizeof(data) / sizeof(data[0]);
    int* ptr = data;

    // Array[3] {x0000, x0001, x0002}
    cout << "data[0] = " << *ptr << endl;
    cout << "data[1] = " << *(ptr + 1) << endl;
    power2(ptr, size);
    print(ptr, size);
    swap(ptr, 0, 2);
    print(ptr, size);

    // cout << "Before:" << endl;
    // print(data, size);
    // power2(data);

    // cout << "After:" << endl;
    // print(data, size);

    return 0;
}