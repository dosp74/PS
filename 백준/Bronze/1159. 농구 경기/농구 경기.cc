#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<string> names(N);
    for (int i = 0; i < N; i++) {
        cin >> names[i];
    }
    
    vector<char> lastNames(26, 0);
    for (int i = 0; i < N; i++) {
        string temp = names[i];
        lastNames[temp[0] - 'a']++;
    }
    
    bool isPREDAJA = true;
    for (int i = 0; i < 26; i++) {
        if (lastNames[i] >= 5) {
            cout << char(i + 'a');
            isPREDAJA = false; 
        }
    }
    
    if (isPREDAJA) {
        cout << "PREDAJA";
    }
    
    return 0;
}