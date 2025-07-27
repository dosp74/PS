#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) {
        return false;
    }
    
    if (n == 2) {
        return true;
    }
    
    if (n % 2 == 0) {
        return false;
    }
    
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        long long n;
        cin >> n;
        
        while (true) {
            if (isPrime(n)) {
                cout << n << "\n";
                
                break;
            }
            
            n++;
        }
    }
    
    return 0;
}