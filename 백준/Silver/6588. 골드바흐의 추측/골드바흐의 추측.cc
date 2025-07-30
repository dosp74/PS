#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    int n;
    cin >> n;
    
    while (n != 0) {
        bool isGoldbach = false;
        
        for (int i = 1; i <= n / 2; i++) {
            if (isPrime[i] && isPrime[n - i]) {
                cout << n << " = " << i << " + " << n - i << "\n";
                isGoldbach = true;
                
                break;
            }
        }
        
        if (!isGoldbach) {
            cout << "Goldbach's conjecture is wrong.\n";
        }
        
        cin >> n;
    }
    
    return 0;
}