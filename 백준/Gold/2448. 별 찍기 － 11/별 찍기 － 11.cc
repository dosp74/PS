#include <bits/stdc++.h>
using namespace std;

vector<string> board;

void draw(int r, int c, int size) {
    if (size == 3) {
        board[r][c] = '*';
        board[r + 1][c - 1] = '*';
        board[r + 1][c + 1] = '*';
        
        for (int i = -2; i <= 2; i++) {
            board[r + 2][c + i] = '*';
        }
        
        return;
    }
    
    int half = size / 2;
    
    draw(r, c, half);
    draw(r + half, c - half, half);
    draw(r + half, c + half, half);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int width = 2 * N - 1;
    
    board = vector<string>(N, string(width, ' '));
    
    draw(0, N - 1, N);
    
    for (int i = 0; i < N; i++) {
        cout << board[i] << "\n";
    }
    
    return 0;
}