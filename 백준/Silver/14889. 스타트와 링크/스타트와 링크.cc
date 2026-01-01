#include <bits/stdc++.h>
using namespace std;

int N;
vector<vector<int>> stats;
int minValue = INT_MAX;
bool picked[20];

void solve(int i, int pickedCount) {
    if (pickedCount == N / 2) {
        int currentValue1 = 0;
        int currentValue2 = 0;
        
        for (int j = 0; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if (picked[j] && picked[k]) {
                    currentValue1 += stats[j][k] + stats[k][j];
                }
                
                if (!picked[j] && !picked[k]) {
                    currentValue2 += stats[j][k] + stats[k][j];
                }
            }
        }
        
        int currentResult = abs(currentValue1 - currentValue2);
        minValue = min(minValue, currentResult);
        
        return;
    }
    else {
        for (int j = i; j < N; j++) {
            picked[j] = true;
            solve(j + 1, pickedCount + 1);
            picked[j] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    stats.resize(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> stats[i][j];
        }
    }
    
    picked[0] = true;
    solve(1, 1);
    
    cout << minValue;
    
    return 0;
}