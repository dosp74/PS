#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    unsigned long long n;
    cin >> n;
    
    unsigned long long q = sqrtl(n);
    
    while ((__int128)q * q < n) {
        q++;
    }
    
    while (q > 0 && (__int128)(q - 1) * (q - 1) >= n) {
        q--;
    }
    
    cout << q;
    
    return 0;
}