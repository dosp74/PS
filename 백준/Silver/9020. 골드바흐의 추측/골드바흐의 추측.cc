#include <iostream>
#include <vector>
#include <utility>
using namespace std;

const int MAX = 10000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    while (T--) {
        int n;
        cin >> n;
        
        pair<int, int> p;
        
        for (int i = 1; i <= n / 2; i++) { // 골드바흐 파티션
            if (isPrime[i] && isPrime[n - i]) {
                p = {i, n - i};
            }
        }
        
        cout << p.first << " " << p.second << "\n";
    }
    
    return 0;
}