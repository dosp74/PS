#include <bits/stdc++.h>
using namespace std;

void hanoi(long long n, int from, int via, int to, long long k) {
    if (n == 1) {
        cout << from << " " << to << "\n";
        
        return;
    }
    
    long long leftMoves = (1LL << (n - 1)) - 1;
    
    if (k <= leftMoves) {
        hanoi(n - 1, from, to, via, k);
    }
    else if (k == leftMoves + 1) {
        cout << from << " " << to << "\n";
        
        return;
    }
    else {
        hanoi(n - 1, via, from, to, k - (leftMoves + 1));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N, K;
    cin >> N >> K;
    
    hanoi(N, 1, 2, 3, K);
    
    return 0;
}