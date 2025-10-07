#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> arr(N);
        int sum = 0;
        
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        
        cout << sum << "\n";
    }
    
    return 0;
}