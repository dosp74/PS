#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> W(10), K(10);
    
    for (int i = 0; i < 10; i++) {
        cin >> W[i];
    }
    
    for (int i = 0; i < 10; i++) {
        cin >> K[i];
    }
    
    sort(W.begin(), W.end(), greater<int>());
    sort(K.begin(), K.end(), greater<int>());
    
    cout << W[0] + W[1] + W[2] << " " << K[0] + K[1] + K[2];
    
    return 0;
}