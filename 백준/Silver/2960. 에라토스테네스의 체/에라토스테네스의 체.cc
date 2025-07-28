#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K;
    cin >> N >> K;
    
    vector<bool> isPrime(N + 1, true);
    int count = 0;
    
    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            isPrime[i] = false;
            count++;
            
            if (count == K) {
                cout << i;
                
                return 0;
            }
            
            for (int j = i * 2; j <= N; j += i) {
                if (isPrime[j]) {
                    isPrime[j] = false;
                    count++;
                    
                    if (count == K) {
                        cout << j;
                        
                        return 0;
                    }
                }
            }
        }
    }
    
    return 0;
}