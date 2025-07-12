#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    int first, second;
    
    for (int i = 0; i < T; i++) {
        cin >> first >> second;
        cout << "Case " << i + 1 << ": " << first + second << "\n";
    }
    
    return 0;
}