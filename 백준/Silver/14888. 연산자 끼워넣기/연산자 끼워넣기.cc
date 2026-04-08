#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A;
int op[4]; // 0: +, 1: -, 2: *, 3: /
int minValue = INT_MAX;
int maxValue = INT_MIN;

void dfs(int idx, int curValue) {
    if (idx == A.size() - 1) {
        minValue = min(curValue, minValue);
        maxValue = max(curValue, maxValue);
        
        return;
    }
    else {
        for (int i = 0; i < 4; i++) {
            if (op[i] == 0) {
                continue;
            }
            
            op[i]--;
            
            int nextValue;
            
            if (i == 0) { // +
                nextValue = curValue + A[idx + 1];
            }
            
            if (i == 1) { // -
                nextValue = curValue - A[idx + 1];
            }
            
            if (i == 2) { // *
                nextValue = curValue * A[idx + 1];
            }
            
            if (i == 3) { // /
                nextValue = curValue < 0 ? (abs(curValue) / A[idx + 1]) * (-1) : curValue /= A[idx + 1];
            }
            
            dfs(idx + 1, nextValue);
            op[i]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    A.resize(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    for (int i = 0; i < 4; i++) {
        cin >> op[i];
    }
    
    dfs(0, A[0]);
    
    cout << maxValue << "\n" << minValue;
    
    return 0;
}