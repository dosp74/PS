#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    
    if (S.empty()) {
        cout << 0;
        return 0;
    }
    
    int count = 0;
    bool inWord = false;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] != ' ' && !inWord) {
            inWord = true;
            count++;
        }
        else if (S[i] == ' ')
            inWord = false;
    }
    
    cout << count;
    
    return 0;
}