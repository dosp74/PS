#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M, K;
    cin >> N >> M >> K;
    
    vector<string> board(N + 1);
    
    for (int i = 1; i <= N; i++) {
        string row;
        cin >> row;
        board[i] = " " + row; // 0 인덱스 제외
    }
    
    vector<vector<int>> prefix(N + 1, vector<int>(M + 1, 0));
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            char expected;
            
            // 왼쪽 위가 W인 체스판 기준
            if ((i + j) % 2 == 0) {
                expected = 'W';
            }
            else {
                expected = 'B';
            }
            
            int wrong = 0;
            
            if (board[i][j] != expected) {
                wrong = 1;
            }
            
            prefix[i][j] = prefix[i - 1][j]
                         + prefix[i][j - 1]
                         - prefix[i - 1][j - 1]
                         + wrong;
        }
    }
    
    int answer = K * K;
    
    for (int x1 = 1; x1 <= N - K + 1; x1++) {
        for (int y1 = 1; y1 <= M - K + 1; y1++) {
            int x2 = x1 + K - 1;
            int y2 = y1 + K - 1;
            
            int newW = prefix[x2][y2]
                     - prefix[x1 - 1][y2]
                     - prefix[x2][y1 - 1]
                     + prefix[x1 - 1][y1 - 1];
            
            int newB = K * K - newW;
            
            answer = min(answer, min(newW, newB));
        }
    }
    
    cout << answer;
    
    return 0;
}