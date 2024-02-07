#include <iostream>
using namespace std;

int fib(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // Recursive calls
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Fibonacci sequence: ";
    for (int i = 0; i <= n; i++) { // n<n when user want to read 0 as 1
        cout << fib(i) << " ";
    }
    return 0;
}

