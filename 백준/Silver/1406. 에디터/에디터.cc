#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str; // str.length() == N
    cin >> str;
    
    list<char> editor(str.begin(), str.end());
    
    int M;
    cin >> M;
    
    auto it = editor.end();
    
    for (int i = 0; i < M; i++) {
        char command;
        cin >> command;
        
        if (command == 'P') {
            char input;
            cin >> input;
            
            editor.insert(it, input);
        }
        else if (command == 'B') {
            if (it == editor.begin()) {
                continue;
            }
            else {
                it = editor.erase(--it);
            }
        }
        else if (command == 'L') {
            if (it == editor.begin()) {
                continue;
            }
            
            it--;
        }
        else if (command == 'D') {
            if (it == editor.end()) {
                continue;
            }
            
            it++;
        }
    }
    
    for (const auto& i : editor) {
        cout << i;
    }
    
    return 0;
}