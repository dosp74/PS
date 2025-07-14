#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        stack<char> s;
        
        string input;
        cin >> input;
        
        bool isComplete = false;
        
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '(') {
                s.push('(');
            }
            else {
                if (s.empty()) {
                    cout << "NO\n";
                    isComplete = true;
                    
                    break;
                }
                else {
                    s.pop();
                }
            }
        }
        
        if (isComplete) {
            continue;
        }
        
        if (!s.empty()) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    
    return 0;
}