#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    string isPalindrom = str;
    reverse(isPalindrom.begin(), isPalindrom.end());
    
    if (str == isPalindrom)
        cout << 1;
    else
        cout << 0;
    
    return 0;
}