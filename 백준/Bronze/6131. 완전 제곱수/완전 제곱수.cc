#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int cnt = 0;
    
    for (int A = 1; A <= 500; A++) {
        for (int B = 1; B <= A; B++) {
            if (A * A == B * B + N) {
                cnt++;
            }
        }
    }
    
    cout << cnt;
    
    return 0;
}