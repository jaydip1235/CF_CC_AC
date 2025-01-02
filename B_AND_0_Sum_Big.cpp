#include <bits/stdc++.h>
using namespace std;

// Function to compute (a^b) % mod
long long modular_exponentiation(long long a, long long b, long long mod) {
    long long result = 1;
    a = a % mod; 
    while (b > 0) {
        if (b % 2 == 1) { 
            result = (result * a) % mod;
        }
        a = (a * a) % mod; 
        b /= 2;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, mod=1e9+7;
        cin >> a >> b;
        cout << modular_exponentiation(a, b, mod) << endl;
    }
    return 0;
}
