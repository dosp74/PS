#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string N;
    cin >> N;
    
    vector<int> cnt(10, 0);
    
    for (int i = 0; i < N.length(); i++) {
        cnt[N[i] - '0']++;
    }
    
    int result = cnt[0];
    
    for (int i = 1; i < 10; i++) {
        if (i == 6 || i == 9) {
            continue;
        }
        
        if (result < cnt[i]) {
            result = cnt[i];
        }
    }
    
    int sixNine = cnt[6] + cnt[9];
    sixNine = (sixNine + 1) / 2;
    
    result = max(result, sixNine);
    
    cout << result;
    
    return 0;
}