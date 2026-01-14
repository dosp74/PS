#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[100][100] = { 0 };
    
    for (int i = 0; i < 4; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        for (int j = x1; j < x2; j++) {
            for (int k = y1; k < y2; k++) {
                arr[j][k] = 1;
            }
        }
    }
    
    int cnt = 0;
    
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (arr[i][j] == 1) {
                cnt++;
            }
        }
    }
    
    cout << cnt;
    
    return 0;
}