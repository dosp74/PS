#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    vector<bool> isPrime(MAX + 1, true);
    
    // 에라토스테네스의 체
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    while (T--) {
        int N;
        cin >> N;
        
        int count = 0;
        
        for (int i = 2; i <= N / 2; i++) { // 파티션 조건
            if (isPrime[i] && isPrime[N - i]) {
                count++;
            }
        }
        
        cout << count << "\n";
    }
    
    return 0;
}