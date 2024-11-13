#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "The prime numbers between 1 and 100 are: ";
    for (int n = 2; n <= 100; ++n) {
        if (isPrime(n)) {
            cout << n << " ";
        }
    }
    return 0;
}
