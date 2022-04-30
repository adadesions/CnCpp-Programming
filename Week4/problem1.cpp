/*
    Find the 10,001st prime number.
    Explain: 2, 3, 5, 7, 11, 13 --> 13 is the 6th prime.
    Definition: Prime number is only 2 two numbers can divides the number so that numbers are 1, itself.

    Example: isPrime(7)
    {2, 3, 4, 5, 6} !| 7 ==> True

    Example: isPrime(4)
    {2, 3} | 4 ==> False

    Example: isPrime(10000)
    {2, 3, 4, ..., 9999} !| 10000 ==> ?
*/

#include <stdio.h>
#include <cmath>
#include <vector>

using namespace std;

bool isPrimeOpz(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;

    for (int i=2; i<(sqrt(n)+1); i++) {
        if ( n % i == 0) return false;
    }
    return true;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;

    for (int i=2; i<n; i++) {
        if ( n % i == 0) return false;
    }
    return true;
}

void brutePrime() {
    vector<int> primes;
    int i = 2;
    int counter = 0;
    while (counter != 10001) {
        if (isPrimeOpz(i)) {
            primes.push_back(i);
            printf("%d, ", i);
            counter++;
        }
        i++;
    }
    printf("\n");
    printf("The 10,001st prime is %d\n", primes.back());
}

int main() {
    // Brute-force method
    brutePrime();

    // Optimized method
    // optimizedPrime();

    return 0;
}

