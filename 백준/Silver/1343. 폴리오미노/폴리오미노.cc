#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string board;
    cin >> board;
    
    string result;
    
    for (int i = 0; i < board.length(); i++) {
        if (i < board.length() - 3) {
            if (board[i] == 'X' && board[i + 1] == 'X' && 
                board[i + 2] == 'X' && board[i + 3] == 'X') {
                result.append(4, 'A');
                i += 3;
                
                continue;
            }
        }
        
        if (i < board.length() - 1) {
            if (board[i] == 'X' && board[i + 1] == 'X') {
                result.append(2, 'B');
                i++;
                
                continue;
            }
        }
        
        if (board[i] == '.') {
            result.append(1, '.');
            
            continue;
        }
        
        cout << -1;
        
        return 0;
    }
    
    for (int i = 0; i < result.length(); i++) {
        cout << result[i];
    }
    
    return 0;
}