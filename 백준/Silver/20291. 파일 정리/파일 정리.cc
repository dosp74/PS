#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    map<string, int> m;
    
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        
        for (int j = 0; j < name.length(); j++) {
            if (name[j] == '.') {
                string extension = name.substr(j + 1, name.length());
                m[extension]++;
                
                break;
            }
        }
    }
    
    for (const auto& p : m) {
        cout << p.first << " " << p.second << "\n";
    }
    
    return 0;
}