#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        int dx = x1 - x2;
        int dy = y1 - y2;
        int dist2 = dx * dx + dy * dy; // 실수 오차 방지
        int sum = r1 + r2;
        int diff = r1 - r2;
        
        if (diff < 0) {
            diff = -diff;
        }
        
        int sum2 = sum * sum;
        int diff2 = diff * diff;
        
        if (dist2 == 0 && r1 == r2) {
            cout << -1 << "\n";
        }
        else if (dist2 > sum2 || dist2 < diff2) {
            cout << 0 << "\n";
        }
        else if (dist2 == sum2 || dist2 == diff2) {
            cout << 1 << "\n";
        }
        else {
            cout << 2 << "\n";
        }
    }
    
    return 0;
}