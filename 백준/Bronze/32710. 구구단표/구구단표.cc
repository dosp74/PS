#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    for (int A = 2; A <= 9; A++) {
        for (int B = 1; B <= 9; B++) {
            int C = A * B;
            
            if (N == A || N == B || N == C) {
                cout << 1;
                
                return 0;
            }
        }
    }
    
    cout << 0;
    
    return 0;
}