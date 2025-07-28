#include <iostream>
using namespace std;

long long fact(long long n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    
    return n * fact(n - 1);
}

int main() {
    int N, K;
    cin >> N >> K;
    
    cout << fact(N) / (fact(N - K) * fact(K));
    
    return 0;
}