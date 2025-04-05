#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();
    
    while(T--) {
        string input;
        getline(cin, input);
        
        int A, B, comma;
        comma = input.find(',');
        
        A = stoi(input.substr(0, comma));
        B = stoi(input.substr(comma + 1));
        
        cout << A + B << "\n";
    }
    
    return 0;
}