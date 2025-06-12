#include <iostream>
#include <vector>
using namespace std;

char WB[8][8] = {
    { 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
    { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
    { 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
    { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
    { 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
    { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
    { 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
    { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' }
};

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<char>> board(N, vector<char> (M));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
        }
    }
    
    int minCount = 64;
    
    for (int i = 0; i < N - 7; i++) {
        for (int j = 0; j < M - 7; j++) {
            int count = 0;
            
            for (int k = i; k < i + 8; k++) {
                for (int l = j; l < j + 8; l++) {
                    if (board[k][l] != WB[k - i][l - j])
                        count++;
                }
            }
            
            int localMin = min(count, 64 - count);
            
            if (localMin < minCount)
                minCount = localMin;
        }
    }
    
    cout << minCount;
    
    return 0;
}