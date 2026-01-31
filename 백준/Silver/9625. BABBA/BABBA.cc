#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K;
    cin >> K;
    
    long long A = 1, B = 0;
    
    for (int i = 1; i <= K; i++) {
        long long nextA = B;
        long long nextB = A + B;
        A = nextA;
        B = nextB;
    }
    
    cout << A << " " << B;
    
    return 0;
}