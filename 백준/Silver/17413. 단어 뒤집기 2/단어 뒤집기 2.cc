#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    
    stack<char> s;
    bool isIn = false;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '<' || isIn) {
            while (!s.empty()) {
                cout << s.top();
                s.pop();
            }
            
            cout << S[i];
            
            isIn = true;
            
            if (S[i] == '>') {
                isIn = false;
            }
        }
        else {
            if (S[i] == ' ') {
                while (!s.empty()) {
                    cout << s.top();
                    s.pop();
                }
                
                if (i != S.length() - 1 && S[i + 1] != '<') {
                    cout << " ";
                    
                    continue;
                }
            }
            
            s.push(S[i]);
        }
    }
    
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    
    return 0;
}