#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    cin.ignore();
    
    unordered_set<string> pledges = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"
    };
    
    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);
        
        if (pledges.find(line) == pledges.end()) {
            cout << "Yes";
            
            return 0;
        }
    }
    
    cout << "No";
    
    return 0;
}