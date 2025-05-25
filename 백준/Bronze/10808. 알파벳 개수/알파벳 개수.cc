#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int alphabet[26] = { 0 };
    
    for (int i = 0; i < S.length(); i++) {
        char c = S[i];
        
        alphabet[c - 'a']++;
    }
    
    for (int i = 0; i < 26; i++)
        cout << alphabet[i] << " ";
    
    return 0;
}