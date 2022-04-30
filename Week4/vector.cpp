#include <stdio.h>
#include <vector>
#include <string>
#include <type_traits>

using namespace std;
// Array = Static Array {static size}
// Vector = Dynamic Array {dynamci size}

// Addr0: {1, 2, 3}, 12 bytes
// Pointer: Addr0, 1 bytes
// Addr1: {1, 2, 3}, 12 bytes

void print(vector<int>& data) {    
    for (auto d : data) {
        printf("%d, ", d);
    }
    // Casting long unsigned int to int
    printf("size = %d", (int)data.size());
    printf("\n");
}

int main() {
    // Generic Programming
    vector<int> data {1, 2, 3};
    print(data);

    // Add new data to vector
    data.push_back(4);
    print(data);

    vector<string> books {"Harry Potter", "Deep work"};
    // print(books);

    return 0;
}