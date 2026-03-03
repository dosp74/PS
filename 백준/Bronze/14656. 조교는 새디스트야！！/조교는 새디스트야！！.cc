#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> students(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> students[i];
    }
    
    int cnt = 0;
    
    for (int i = 1; i <= N; i++) {
        if (students[i] != i) {
            cnt++;
        }
    }
    
    cout << cnt;
    
    return 0;
}