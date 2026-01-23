#include <bits/stdc++.h>
using namespace std;

static int cnt[2000001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        cnt[x + 1000000]++;
    }
    
    for (int i = 0; i <= 2000000; i++) {
        while (cnt[i]--) {
            cout << i - 1000000 << "\n";
        }
    }
    
    return 0;
}