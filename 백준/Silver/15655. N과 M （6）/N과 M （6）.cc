#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> sequence;
int col[8];

void sequences(int i) {
    if (i == M) {
        for (int j = 0; j < i; j++) {
            cout << col[j] << " ";
        }
        
        cout << "\n";
    }
    else {
        for (int k = 0; k < N; k++) {
            if (i > 0 && sequence[k] <= col[i - 1]) {
                continue;
            }
            else {
                col[i] = sequence[k];
                sequences(i + 1);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    sequence.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }
    
    sort(sequence.begin(), sequence.end());
    sequences(0);
    
    return 0;
}