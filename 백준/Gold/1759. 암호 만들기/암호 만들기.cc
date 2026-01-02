#include <bits/stdc++.h>
using namespace std;

int L, C;
vector<char> v;
bool picked[15];

void solve(int i, int pickedCount) {
    if (pickedCount == L) {
        string output = "";
        int consonantCount = 0;
        int vowelCount = 0;
        
        for (int j = 0; j < C; j++) {
            if (picked[j]) {
                if (v[j] == 'a' || v[j] == 'e' || v[j] == 'i' || v[j] == 'o' || v[j] == 'u') {
                    vowelCount++;
                }
                else {
                    consonantCount++;
                }
                
                output += v[j];
            }
        }
        
        if (consonantCount >= 2 && vowelCount >= 1) {
            cout << output << "\n";
        }
        
        return;
    }
    else {
        for (int j = i; j < C; j++) {
            picked[j] = true;
            solve(j + 1, pickedCount + 1);
            picked[j] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> L >> C;
    v.resize(C);
    for (int i = 0; i < C; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    solve(0, 0);
    
    return 0;
}