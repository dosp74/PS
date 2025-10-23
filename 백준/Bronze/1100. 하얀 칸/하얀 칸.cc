#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char board[8][8];
    
    for (int i = 0; i < 8; i++) {
        string input;
        cin >> input;
        
        for (int j = 0; j < 8; j++) {
            board[i][j] = input[j];
        }
    }
    
    int cnt = 0;
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0 && j % 2 == 0 && board[i][j] == 'F') {
                cnt++;
            }
            else if (i % 2 != 0 && j % 2 != 0 && board[i][j] == 'F') {
                cnt++;
            }
        }
    }
    
    cout << cnt;
    
    return 0;
}