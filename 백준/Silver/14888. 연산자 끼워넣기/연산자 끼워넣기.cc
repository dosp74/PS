#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> sequence;
int op[4];
int maxValue = INT_MIN;
int minValue = INT_MAX;

void dfs(int i, int currentValue) {
    if (i == N) {
        maxValue = max(currentValue, maxValue);
        minValue = min(minValue, currentValue);
        
        return;
    }
    else {
        for (int j = 0; j < 4; j++) {
            if (op[j] <= 0) {
                continue;
            }
            
            op[j]--;
            
            int nextValue;
            
            if (j == 0) {
                nextValue = currentValue + sequence[i];
            }
            else if (j == 1) {
                nextValue = currentValue - sequence[i];
            }
            else if (j == 2) {
                nextValue = currentValue * sequence[i];
            }
            else {
                if (currentValue < 0) {
                    nextValue = -(abs(currentValue) / sequence[i]);
                }
                else {
                    nextValue = currentValue / sequence[i];
                }
            }
            
            dfs(i + 1, nextValue);
            op[j]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    sequence.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }
    
    for (int i = 0; i < 4; i++) {
        cin >> op[i];
    }
    
    dfs(1, sequence[0]);
    
    cout << maxValue << "\n" << minValue;
    
    return 0;
}