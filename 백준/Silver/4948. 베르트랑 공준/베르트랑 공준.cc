#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    while (n != 0) {
        vector<bool> isPrime(2 * n + 1, true);
        isPrime[0] = isPrime[1] = false;
        
        for (int i = 2; i * i <= 2 * n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= 2 * n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        
        int count = 0;
        
        for (int i = n + 1; i <= 2 * n; i++) {
            if (isPrime[i]) {
                count++;
            }
        }
        
        cout << count << "\n";
        
        cin >> n;
    }
    
    return 0;
}