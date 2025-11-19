#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    vector<string> name(N);
    for (int i = 0; i < N; i++) {
        cin >> name[i];
    }
    
    for (int i = 0; i < N; i++) {
        string test = name[i];
        
        for (int j = 0; j < test.length(); j++) {
            if (test[j] == 'S') {
                cout << test;
                
                return 0;
            }
        }
    }
    
    return -1;
}