#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_set<string> passwords;
    
    for (int i = 0; i < N; i++) {
        string password;
        cin >> password;
        passwords.insert(password);
    }
    
    for (const auto& copy : passwords) {
        string test = copy;
        reverse(test.begin(), test.end());
        if (passwords.find(test) != passwords.end()) {
            cout << test.size() << " " << test[test.size() / 2];
            
            return 0;
        }
    }
    
    return 0;
}