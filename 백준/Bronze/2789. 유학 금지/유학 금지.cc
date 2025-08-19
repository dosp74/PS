#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    
    string criteria = "CAMBRIDGE";
    string result = "";
    
    for (char c : word) {
        if (criteria.find(c) == string::npos) {
            result += c;
        }
    }
    
    cout << result;
    
    return 0;
}