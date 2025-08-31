#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> board;

void draw(int x, int y, int N) {
    if (N == 3) {
        board[x][y] = '*';
        board[x][y + 1] = '*';
        board[x][y + 2] = '*';
        board[x + 1][y] = '*';
        board[x + 1][y + 1] = ' ';
        board[x + 1][y + 2] = '*';
        board[x + 2][y] = '*';
        board[x + 2][y + 1] = '*';
        board[x + 2][y + 2] = '*';
        
        return;
    }
    
    int len = N / 3;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) {
                continue;
            }
            
            draw(x + i * len, y + j * len, len);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    board = vector<vector<char>>(N, vector<char>(N, ' '));
    
    draw(0, 0, N);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j];
        }
        
        cout << "\n";
    }
    
    return 0;
}