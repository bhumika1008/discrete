#include <iostream>

using namespace std;
long long power(int a, int n) {
    long long result = 1;
    for (int i = 0; i < n; ++i) {
        result *= a;
    }
    return result;
}

int main() {
    int a, n;
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (n): ";
    cin >> n;

    cout << a << "^" << n << " = " << power(a, n) << endl;

    return 0;
}
