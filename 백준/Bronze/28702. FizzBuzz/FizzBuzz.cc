#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void printFizzBuzz(int num) {
    if (num % 15 == 0) {
        cout << "FizzBuzz";
    }
    else if (num % 3 == 0) {
        cout << "Fizz";
    }
    else if (num % 5 == 0) {
        cout << "Buzz";
    }
    else {
        cout << num;
    }
}

bool isNumeric(const string& s) {
    if (s.empty()) {
        return false;
    }
    
    for (char ch : s) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string inputs[3];
    
    for (auto& str : inputs) {
        cin >> str;
    }
    
    for (int i = 0; i < 3; i++) {
        if (isNumeric(inputs[i])) {
            int num = stoi(inputs[i]);
            printFizzBuzz(num + (3 - i));
            
            break;
        }
    }
    
    return 0;
}