#include <iostream>
#include <vector>
using namespace std;

vector<int> fib; 
int fibonacci(int n) {
    if (n <= 1) return n;

    if (fib[n] != -1) return fib[n];

    fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fib[n];
}

int main() {
    int terms;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> terms;

    fib.resize(terms, -1);

    cout << "Fibonacci series:" << endl;
    for (int i = 0; i < terms; ++i) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
    return 0;
}
