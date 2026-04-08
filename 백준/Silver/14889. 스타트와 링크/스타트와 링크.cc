#include <bits/stdc++.h>
using namespace std;

int N;
vector<vector<int>> board;
int minValue = INT_MAX;
bool picked[20];

void dfs(int i, int pickedCount) {
    if (pickedCount == N / 2) {
        int curValue1 = 0;
        int curValue2 = 0;
        
        for (int j = 0; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if (picked[j] && picked[k]) {
                    curValue1 += board[j][k] + board[k][j];
                }
                
                if (!picked[j] && !picked[k]) {
                    curValue2 += board[j][k] + board[k][j];
                }
            }
        }
        
        minValue = min(minValue, abs(curValue1 - curValue2));
        
        return;
    }
    else {
        for (int j = i; j < N; j++) {
            picked[j] = true;
            dfs(j + 1, pickedCount + 1);
            picked[j] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    board.resize(N, vector<int>(N));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }
    
    picked[0] = true;
    dfs(1, 1);
    
    cout << minValue;
    
    return 0;
}