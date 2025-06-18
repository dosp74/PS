#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string line;
    
    while (getline(cin, line)) {
        if (line == "END")
            return 0;
        
        reverse(line.begin(), line.end());
        cout << line << "\n";
    }
    
    return 0;
}