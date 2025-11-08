#include <bits/stdc++.h>
using namespace std;

int arr[128][128];
int white = 0, blue = 0;

bool isSameColor(int x, int y, int size) {
    int color = arr[x][y];
    
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (arr[i][j] != color) {
                return false;
            }
        }
    }
    
    return true;
}

void cntColor(int x, int y, int size) {
    if (isSameColor(x, y, size)) {
        if (arr[x][y] == 0) {
            white++;
        }
        else {
            blue++;
        }
        
        return;
    }
    
    int half = size / 2;
    
    cntColor(x, y, half);
    cntColor(x, y + half, half);
    cntColor(x + half, y, half);
    cntColor(x + half, y + half, half);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }
    
    cntColor(0, 0, N);
    
    cout << white << "\n" << blue;
    
    return 0;
}