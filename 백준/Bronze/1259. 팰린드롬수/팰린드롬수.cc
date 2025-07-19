#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string number;
    cin >> number;
    
    while (number != "0") {
        string reverseNumber = number;
        reverse(reverseNumber.begin(), reverseNumber.end());
        
        if (number == reverseNumber) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
        
        cin >> number;
    }
    
    return 0;
}