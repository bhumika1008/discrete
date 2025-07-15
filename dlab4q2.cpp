#include <iostream>
using namespace std;


long long modPower(long long b, long long n, long long m) {
    long long result = 1;
    b %= m;  // In case b >= m

    while (n > 0) {
        if (n % 2 == 1)  // If n is odd
            result = (result * b) % m;

        b = (b * b) % m;
        n /= 2;
    }

    return result;
}

int main() {
    long long b, n, m;
    cout << "Enter base (b): ";
    cin >> b;
    cout << "Enter exponent (n): ";
    cin >> n;
    cout << "Enter modulus (m): ";
    cin >> m;

    cout << b << "^" << n << " mod " << m << " = " << modPower(b, n, m) << endl;

    return 0;
}
