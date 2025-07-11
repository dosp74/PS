#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string S;
    cin >> S;
    
    unordered_set<string> us;
    
    for (int i = 0; i < S.size(); i++) {
        for (int j = i; j < S.size(); j++) {
            string partS = S.substr(i, j - i + 1);
            us.insert(partS);
        }
    }
    
    cout << us.size();
    
    return 0;
}