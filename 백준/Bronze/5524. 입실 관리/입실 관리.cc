#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string Si;
        cin >> Si;
        
        for (int j = 0; j < Si.length(); j++) {
            if (isupper(Si[j])) {
                Si[j] = tolower(Si[j]);
            }
        }
        
        cout << Si << "\n";
    }
    
    return 0;
}