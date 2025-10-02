#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int M;
    cin >> M;
    
    unordered_set<int> S;
    
    while (M--) {
        string command;
        cin >> command;
        
        if (command == "add") {
            int x;
            cin >> x;
            
            S.insert(x);
        }
        else if (command == "remove") {
            int x;
            cin >> x;
            
            S.erase(x);
        }
        else if (command == "check") {
            int x;
            cin >> x;
            
            if (S.find(x) != S.end()) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
        else if (command == "toggle") {
            int x;
            cin >> x;
            
            if (S.find(x) != S.end()) {
                S.erase(x);
            }
            else {
                S.insert(x);
            }
        }
        else if (command == "all") {
            for (int i = 1; i <= 20; i++) {
                S.insert(i);
            }
        }
        else if (command == "empty") {
            S.clear();
        }
    }
    
    return 0;
}