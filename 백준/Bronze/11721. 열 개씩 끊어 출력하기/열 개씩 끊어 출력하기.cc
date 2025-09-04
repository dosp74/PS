#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    
    for (int i = 1; i <= word.length(); i++) {
        if (i % 10 == 0) {
            cout << word[i - 1] << "\n";
        }
        else {
            cout << word[i - 1];
        }
    }
    
    return 0;
}