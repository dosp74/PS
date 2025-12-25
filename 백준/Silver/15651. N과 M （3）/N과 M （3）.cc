#include <bits/stdc++.h>
using namespace std;

int N, M;
int col[8];

void sequences(int i) {
    if (i == M) {
        for (int j = 1; j <= M; j++) {
            cout << col[j] << " ";
        }
        
        cout << "\n";
    }
    else {
        for (int k = 1; k <= N; k++) {
            col[i + 1] = k;
            sequences(i + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    
    sequences(0);
    
    return 0;
}