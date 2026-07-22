#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        else {
            str[i] = toupper(str[i]);
        }
    }
    
    cout << str;
    
    return 0;
}