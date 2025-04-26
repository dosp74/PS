#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int alphabet[26];
    for (int i = 0; i < 26; i++)
        alphabet[i] = -1;
    
    for (int i = 0; i < S.size(); i++) {
        int index = S[i] - 'a';
        
        if (alphabet[index] == -1)
            alphabet[index] = i;
    }
    
    for (int i = 0; i < 26; i++)
        cout << alphabet[i] << " ";
    
    return 0;
}