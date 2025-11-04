#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int picture[100][100] = { 0 };
    
    int N, M;
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        for (int x = x1; x <= x2; x++) {
            for (int y = y1; y <= y2; y++) {
                picture[x - 1][y - 1]++;
            }
        }
    }
    
    int result = 0;
    
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (picture[i][j] > M) {
                result++;
            }
        }
    }
    
    cout << result;
    
    return 0;
}