#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> arr(n + 1);
    vector<int> pow2(n + 1);
    
    int a, b, c;
    cin >> a >> b >> c;
    
    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        arr[x] = 1;
    }
    
    for (int i = 0; i < b; i++) {
        int x;
        cin >> x;
        arr[x] = 2;
    }
    
    for (int i = 0; i < c; i++) {
        int x;
        cin >> x;
        arr[x] = 3;
    }
    
    pow2[0] = 1;
    
    for (int i = 1; i <= n; i++) {
        pow2[i] = (pow2[i - 1] * 2) % MOD;
    }
    
    int target = arr[n];
    int result = 0;
    
    for (int i = n; i >= 1; i--) {
        if (arr[i] != target) {
            result = (result + pow2[i - 1]) % MOD;
            target = 6 - target - arr[i];
        }
    }
    
    cout << arr[n] << "\n" << result;
    
    return 0;
}