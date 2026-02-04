#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<string> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    int K;
    cin >> K;
    
    if (K == 1) {
        
    }
    else if (K == 2) {
        for (int i = 0; i < N; i++) {
            reverse(a[i].begin(), a[i].end());
        }
    }
    else if (K == 3) {
        reverse(a.begin(), a.end());
    }
    
    for (int i = 0; i < N; i++) {
        cout << a[i] << "\n";
    }
    
    return 0;
}