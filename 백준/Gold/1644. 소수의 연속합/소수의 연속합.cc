#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<bool> isPrime(N + 1, true);
    
    isPrime[0] = false;
    isPrime[1] = false;
    
    for (int i = 2; i * i <= N; i++) {
        if (!isPrime[i]) {
            continue;
        }
        
        for (int j = i * i; j <= N; j += i) {
            isPrime[j] = false;
        }
    }
    
    vector<int> primes;
    
    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    
    int left = 0;
    int right = 0;
    int sum = 0;
    int answer = 0;
    
    while (true) {
        if (sum >= N) {
            if (sum == N) {
                answer++;
            }
            
            sum -= primes[left];
            left++;
        }
        else {
            if (right == primes.size()) {
                break;
            }
            
            sum += primes[right];
            right++;
        }
    }
    
    cout << answer;
    
    return 0;
}