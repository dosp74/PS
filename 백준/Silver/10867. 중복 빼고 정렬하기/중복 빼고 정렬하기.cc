#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    vector<int> result;
    int cur = arr[0];
    result.push_back(cur);
    
    for (int i : arr) {
        if (cur < i) {
            cur = i;
            result.push_back(cur);
        }
    }
    
    for (int i : result) {
        cout << i << " ";
    }
    
    return 0;
}