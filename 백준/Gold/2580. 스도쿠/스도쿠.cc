#include <bits/stdc++.h>
using namespace std;

int input[9][9];
vector<pair<int, int>> blanks;
bool isComplete = false;

bool promising(int r, int c, int num) {
    for (int i = 0; i < 9; i++) {
        if (input[r][i] == num) {
            return false;
        }
        
        if (input[i][c] == num) {
            return false;
        }
    }
    
    int sr = r / 3 * 3;
    int sc = c / 3 * 3;
    
    for (int i = sr; i < sr + 3; i++) {
        for (int j = sc; j < sc + 3; j++) {
            if (input[i][j] == num) {
                return false;
            }
        }
    }
    
    return true;
}

void sudoku(int i) {
    if (i == blanks.size()) {
        isComplete = true;
        
        return;
    }
    
    int r = blanks[i].first;
    int c = blanks[i].second;
    
    for (int j = 1; j <= 9; j++) {
        if (promising(r, c, j)) {
            input[r][c] = j;
            sudoku(i + 1);
            
            if (!isComplete) {
                input[r][c] = 0;
            }
            else {
                return;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> input[i][j];
            
            if (input[i][j] == 0) {
                blanks.push_back({i, j});
            }
        }
    }
    
    sudoku(0);
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << input[i][j] << " ";
        }
        
        cout << "\n";
    }
    
    return 0;
}