#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    int alphabet[26] = { 0 };
    
    for (int i = 0; i < str.size(); i++) {
        char c = str[i];
        
        if (islower(c))
            c = toupper(c);
        
        alphabet[c - 65]++;
    }
    
    int maxCount = 0;
    int maxIndex;
    bool isMany = false;
    
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > maxCount) {
            maxCount = alphabet[i];
            maxIndex = i;
            isMany = false;
        }
        else if (alphabet[i] == maxCount)
            isMany = true;
    }
    
    if (isMany)
        cout << "?";
    else
        cout << char(maxIndex + 65);
    
    return 0;
}
