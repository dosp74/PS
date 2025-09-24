#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, L;
    cin >> N >> L;
    
    vector<int> h;
    
    for (int i = 0; i < N; i++) {
        int hi;
        cin >> hi;
        h.push_back(hi);
    }
    
    sort(h.begin(), h.end());
    
    for (int i = 0; i < h.size(); i++) {
        if (L >= h[i]) {
            L++;
        }
        else {
            cout << L;
            
            return 0;
        }
    }
    
    cout << L;
    
    return 0;
}