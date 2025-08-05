#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string ISBN;
    cin >> ISBN;
    
    int value = 0;
    int randomNumber = 0;
    bool isEven = false;
    
    for (int i = 0; i < ISBN.length(); i++) {
        if (i % 2 == 0) { // 짝수 인덱스
            char ch = ISBN[i];
            
            if (ch == '*') {
                isEven = true;
                
                continue;
            }
            
            if (isdigit(ch)) {
                value += ch - '0';
            }
        }
        else { // 홀수 인덱스
            char ch = ISBN[i];
            
            if (ch == '*') {
                isEven = false;
                
                continue;
            }
            
            if (isdigit(ch)) {
                value += 3 * (ch - '0');
            }
        }
    }
    
    if (isEven) {
        while ((value + randomNumber) % 10 != 0) {
            randomNumber += 1;
        }
    }
    else {
        while ((value + 3 * randomNumber) % 10 != 0) {
            randomNumber += 1;
        }
    }
    
    cout << randomNumber;
    
    return 0;
}