// O. Fibonacci
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N. Print the Fibonacci number of N.

// Note: In order to create the Fibonacci sequence use the following function:

// fib(1) = 0.
// fib(2) = 1.
// fib(n) = fib(n - 1) + fib(n - 2).
// Input
// Only one line containing a number N (1 ≤ N ≤ 50).

// Output
// Print the Fibonacci number of N.

// Examples
// InputCopy
// 1
// OutputCopy
// 0
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 0;
        return 0;
    }

    vector<long long> arr(n);
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << arr[n - 1];
    return 0;
}
