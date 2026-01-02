#include <bits/stdc++.h>
using namespace std;

int k;
vector<int> v;
bool picked[12];

void solve(int i, int pickedCount) {
    if (pickedCount == 6) {
        for (int j = 0; j < k; j++) {
            if (picked[j]) {
                cout << v[j] << " ";
            }
        }
        
        cout << "\n";
        
        return;
    }
    else {
        for (int j = i; j < k; j++) {
            picked[j] = true;
            solve(j + 1, pickedCount + 1);
            picked[j] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> k;
    
    while (k != 0) {
        v.resize(k);
        for (int i = 0; i < k; i++) {
            cin >> v[i];
        }
        
        solve(0, 0);
        
        cout << "\n";
        
        cin >> k;
    }
    
    return 0;
}